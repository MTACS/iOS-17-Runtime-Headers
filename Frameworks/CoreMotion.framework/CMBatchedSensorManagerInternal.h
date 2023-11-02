
@interface CMBatchedSensorManagerInternal : NSObject {
    bool  _accelActive;
    NSArray * _accelBatch;
    id /* block */  _accelHandler;
    bool  _available;
    void * _connection;
    NSObject<OS_dispatch_queue> * _dataQueue;
    bool  _deviceMotionActive;
    NSArray * _deviceMotionBatch;
    id /* block */  _deviceMotionHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSArray *accelBatch;
@property (retain) NSArray *deviceMotionBatch;

+ (id)_newArrayByUnpackingAccelerometerBatch:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
+ (id)_newArrayByUnpackingDeviceMotionBatch:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
+ (bool)areBatchedSensorsSupported;

- (void)_connect;
- (void)_startAccelerometerUpdates;
- (void)_startAccelerometerUpdatesWithHandler:(id /* block */)arg1;
- (void)_startDeviceMotionUpdates;
- (void)_startDeviceMotionUpdatesWithHandler:(id /* block */)arg1;
- (void)_stopAccelerometerUpdates;
- (void)_stopDeviceMotionUpdates;
- (void)_teardown;
- (id)accelBatch;
- (void)dealloc;
- (id)deviceMotionBatch;
- (id)init;
- (void)setAccelBatch:(id)arg1;
- (void)setDeviceMotionBatch:(id)arg1;

@end
