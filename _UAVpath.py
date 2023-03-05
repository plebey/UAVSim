#import setup_path
import airsim
import sys
import time

def main():
    client = airsim.MultirotorClient()
    client.confirmConnection()
    client.enableApiControl(True)

    print("arming the drone...")
    client.armDisarm(True)

    state = client.getMultirotorState()
    if state.landed_state == airsim.LandedState.Landed:
        print("taking off...")
        client.takeoffAsync().join()
    else:
        client.hoverAsync().join()

    # params: roll, pitch, yaw, z, duration
    z = -5.5
    client.moveByRollPitchYawZAsync(0, 0.2, 0, z, 4).join()
    client.moveByRollPitchYawZAsync(-0.45, 0.3, 1.57, z, 2).join()
    client.moveByRollPitchYawZAsync(0, 0.25, 1.57, z, 1.8).join()
    client.moveByRollPitchYawZAsync(-0.45, 0.3, 3.14, z, 2).join()
    client.moveByRollPitchYawZAsync(0, 0.25, 3.14, z, 1.1).join()
    client.moveByRollPitchYawZAsync(0.45, 0.3, 1.57, z, 1.2).join()
    client.moveByRollPitchYawZAsync(-0.45, 0.3, 3.14, z, 1.8).join()
    client.moveByRollPitchYawZAsync(-0.7, 0.225, 4.71, z, 2).join()
    client.moveByRollPitchYawZAsync(0, 0.25, 4.71, z, 1.8).join()
    client.moveByRollPitchYawZAsync(-0.46, 0.3, 0, z, 2).join()
    client.moveByRollPitchYawZAsync(-0.02, 0.3, 0, z, 2.8).join()
    client.moveByRollPitchYawZAsync(0.75, 0.22, -1.57, z, 2).join()
    client.moveByRollPitchYawZAsync(0, 0.25, -1.57, z, 1.2).join()
    client.moveByRollPitchYawZAsync(0.72, 0.22, -3.14, z, 1.7).join()
    client.moveByRollPitchYawZAsync(-0.1, 0.25, -3, z, 1.5).join()
    client.moveByRollPitchYawZAsync(0, -0.5, -3, z, 0.5).join()
    #time.sleep(3)
    #client.moveByRollPitchYawZAsync(0, 0, 0, 0, 0.5).join()
    #client.goHomeAsync().join()

    # params: vx, vy, vz, duration, drivetrain, yaw_mode
    #client.moveByVelocityAsync(5, 0.1, 0, 4).join()
    # params: yaw_rate, duration
    #client.rotateByYawRateAsync(-30, 4).join()
    #client.moveByVelocityAsync(-0.5, -4, 0, 5).join()

    # параметры: крен(roll), тангаж(pitch), рыскание(yaw),
    # дроссельная заслонка(throttle) (0-1), время_удержания(duration)
    #client.moveByRollPitchYawrateThrottleAsync(0, 0.2, -0.07, 0.6, 6).join()

    client.landAsync().join()
    #client.armDisarm(False)
    #client.hoverAsync().join()
    #client.enableApiControl(False)

if __name__ == "__main__":
    main()