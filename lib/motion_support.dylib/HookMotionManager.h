
@interface HookMotionManager : CMMotionManager <MotionSupport__AutoHook>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;
+ (id)targetClasses;

- (id)hook_accelerometerData;
- (id)hook_deviceMotion;
- (id)hook_gyroData;
- (id)hook_magnetometerData;
- (void)hook_setAccelerometerUpdateInterval:(double)arg1;
- (void)hook_setGyroUpdateInterval:(double)arg1;
- (void)hook_setMagnetometerUpdateInterval:(double)arg1;
- (void)hook_startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)hook_startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)hook_startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)hook_startGyroUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)hook_startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)hook_stopAccelerometerUpdates;
- (void)hook_stopGyroUpdates;
- (void)hook_stopMagnetometerUpdates;
- (id)original_accelerometerData;
- (id)original_deviceMotion;
- (id)original_gyroData;
- (id)original_magnetometerData;
- (void)original_setAccelerometerUpdateInterval:(double)arg1;
- (void)original_setGyroUpdateInterval:(double)arg1;
- (void)original_setMagnetometerUpdateInterval:(double)arg1;
- (void)original_startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)original_startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)original_startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)original_startGyroUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)original_startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)original_stopAccelerometerUpdates;
- (void)original_stopGyroUpdates;
- (void)original_stopMagnetometerUpdates;

@end
