
@interface CMBatchedSensorManager : NSObject {
    CMBatchedSensorManagerInternal * _internal;
}

@property (getter=isAccelerometerActive, nonatomic, readonly) bool accelerometerActive;
@property (readonly) NSArray *accelerometerBatch;
@property (nonatomic, readonly) long long accelerometerDataFrequency;
@property (getter=isDeviceMotionActive, nonatomic, readonly) bool deviceMotionActive;
@property (readonly) NSArray *deviceMotionBatch;
@property (nonatomic, readonly) long long deviceMotionDataFrequency;

+ (long long)authorizationStatus;
+ (bool)isAccelerometerSupported;
+ (bool)isDeviceMotionSupported;

- (id)accelerometerBatch;
- (long long)accelerometerDataFrequency;
- (void)dealloc;
- (id)deviceMotionBatch;
- (long long)deviceMotionDataFrequency;
- (id)init;
- (bool)isAccelerometerActive;
- (bool)isDeviceMotionActive;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesWithHandler:(id /* block */)arg1;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesWithHandler:(id /* block */)arg1;
- (void)stopAccelerometerUpdates;
- (void)stopDeviceMotionUpdates;

@end
