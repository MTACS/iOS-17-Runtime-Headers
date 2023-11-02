
@interface ARBKSAccelerometer : NSObject {
    BKSAccelerometer * _accelerometer;
    long long  _lastValidDeviceOrientation;
}

+ (id)sharedAccelerometerHandle;
+ (id)sharedWeakAccelerometerHandle;

- (void).cxx_destruct;
- (long long)currentOrientation;
- (void)dealloc;
- (id)initPrivate;
- (long long)rawOrientation;

@end
