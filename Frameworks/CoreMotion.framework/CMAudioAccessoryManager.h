
@interface CMAudioAccessoryManager : NSObject {
    id  _internal;
}

@property (getter=_isAudioAccessoryAccelerometerAvailable, nonatomic, readonly) bool _audioAccessoryAccelerometerAvailable;
@property (setter=_setAudioAccessoryAccelerometerUpdateInterval:, nonatomic) double _audioAccessoryAccelerometerUpdateInterval;
@property (getter=_isAudioAccessoryDeviceMotionAvailable, nonatomic, readonly) bool _audioAccessoryDeviceMotionAvailable;
@property (setter=_setAudioAccessoryDeviceMotionUpdateInterval:, nonatomic) double _audioAccessoryDeviceMotionUpdateInterval;
@property (getter=_isAudioAccessoryGyroAvailable, nonatomic, readonly) bool _audioAccessoryGyroAvailable;
@property (setter=_setAudioAccessoryGyroUpdateInterval:, nonatomic) double _audioAccessoryGyroUpdateInterval;
@property (getter=_isAudioAccessoryMagnetometerAvailable, nonatomic, readonly) bool _audioAccessoryMagnetometerAvailable;
@property (setter=_setAudioAccessoryMagnetometerUpdateInterval:, nonatomic) double _audioAccessoryMagnetometerUpdateInterval;

+ (bool)_isAvailable;
+ (bool)_selectActiveAudioRouteForAccelerometerWithBTAddress:(id)arg1 modelID:(id)arg2;
+ (bool)_selectActiveAudioRouteForDeviceMotionWithBTAddress:(id)arg1 modelID:(id)arg2;
+ (bool)_selectActiveAudioRouteForGyroWithBTAddress:(id)arg1 modelID:(id)arg2;
+ (bool)_selectActiveAudioRouteForMagnetometerWithBTAddress:(id)arg1 modelID:(id)arg2;
+ (bool)_selectActiveAudioRouteWithBTAddress:(id)arg1 modelID:(id)arg2;

- (id)_audioAccessoryAccelerometerData;
- (double)_audioAccessoryAccelerometerUpdateInterval;
- (double)_audioAccessoryDeviceMotionUpdateInterval;
- (id)_audioAccessoryGyroData;
- (double)_audioAccessoryGyroUpdateInterval;
- (id)_audioAccessoryMagnetometerData;
- (double)_audioAccessoryMagnetometerUpdateInterval;
- (bool)_isAudioAccessoryAccelerometerAvailable;
- (void)_isAudioAccessoryAccelerometerAvailablePrivate;
- (bool)_isAudioAccessoryDeviceMotionAvailable;
- (void)_isAudioAccessoryDeviceMotionAvailablePrivate;
- (bool)_isAudioAccessoryGyroAvailable;
- (void)_isAudioAccessoryGyroAvailablePrivate;
- (bool)_isAudioAccessoryMagnetometerAvailable;
- (void)_isAudioAccessoryMagnetometerAvailablePrivate;
- (void)_setAudioAccessoryAccelerometerUpdateInterval:(double)arg1;
- (void)_setAudioAccessoryAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)_setAudioAccessoryDeviceMotionUpdateInterval:(double)arg1;
- (void)_setAudioAccessoryDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)_setAudioAccessoryGyroUpdateInterval:(double)arg1;
- (void)_setAudioAccessoryGyroUpdateIntervalPrivate:(double)arg1;
- (void)_setAudioAccessoryMagnetometerUpdateInterval:(double)arg1;
- (void)_setAudioAccessoryMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)_startAudioAccessoryAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startAudioAccessoryAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesPrivate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startAudioAccessoryDeviceMotionUpdatesPrivate:(id)arg1 lowLatencyMode:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)_startAudioAccessoryDeviceMotionUpdatesToQueue:(id)arg1 lowLatencyMode:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)_startAudioAccessoryGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startAudioAccessoryGyroUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startAudioAccessoryMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startAudioAccessoryMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_stopAudioAccessoryAccelerometerUpdates;
- (void)_stopAudioAccessoryAccelerometerUpdatesPrivate;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdates;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdatesPrivate;
- (void)_stopAudioAccessoryDeviceMotionUpdates;
- (void)_stopAudioAccessoryDeviceMotionUpdatesPrivate;
- (void)_stopAudioAccessoryGyroUpdates;
- (void)_stopAudioAccessoryGyroUpdatesPrivate;
- (void)_stopAudioAccessoryMagnetometerUpdates;
- (void)_stopAudioAccessoryMagnetometerUpdatesPrivate;
- (void)dealloc;
- (void)deallocPrivate;
- (id)init;
- (id)initPrivate;
- (void)onAudioAccessoryAccelerometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned long long x3; unsigned short x4; }*)arg1;
- (void)onAudioAccessoryDeviceMotion:(const void*)arg1;
- (void)onAudioAccessoryDeviceMotionConfig:(const void*)arg1;
- (void)onAudioAccessoryDeviceMotionStatus:(const int*)arg1;
- (void)onAudioAccessoryGyro:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned long long x3; unsigned short x4; float x5; }*)arg1;
- (void)onAudioAccessoryMagnetometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; unsigned long long x3; unsigned short x4; float x5; }*)arg1;

@end
