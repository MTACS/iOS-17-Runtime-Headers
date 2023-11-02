
@interface CMMotionManagerSupport : TweakObjAttachedStorage {
    TweakTimer * _accelTimer;
    TweakTimer * _gyroTimer;
    TweakTimer * _magnetometerTimer;
}

- (void).cxx_destruct;
- (id)accelerometerData;
- (id)gyroData;
- (id)init;
- (id)magnetometerData;
- (void)setAccelerometerUpdateInterval:(double)arg1;
- (void)setGyroUpdateInterval:(double)arg1;
- (void)setMagnetometerUpdateInterval:(double)arg1;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2 interval:(double)arg3;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2 interval:(double)arg3;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2 interval:(double)arg3;
- (void)stopAccelerometerUpdates;
- (void)stopGyroUpdates;
- (void)stopMagnetometerUpdates;

@end
