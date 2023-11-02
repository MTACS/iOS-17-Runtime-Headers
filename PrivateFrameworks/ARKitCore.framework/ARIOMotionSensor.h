
@interface ARIOMotionSensor : NSObject <ARSensor> {
    struct __IOHIDServiceClient { } * _accelerometerService;
    struct __IOHIDEventSystemClient { } * _accelerometerSystemClient;
    ARAccelerometerData * _currentAccelerometerData;
    ARGyroscopeData * _currentGyroData;
    <ARSensorDelegate> * _delegate;
    struct __IOHIDServiceClient { } * _gyroService;
    struct __IOHIDEventSystemClient { } * _gyroSystemClient;
    NSObject<OS_dispatch_queue> * _imuDataQueue;
    NSString * _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accelerometerDidOutputEvent:(struct __IOHIDEvent { }*)arg1 timestamp:(double)arg2;
- (void)dealloc;
- (id)delegate;
- (void)gyroscopeDidOutputEvent:(struct __IOHIDEvent { }*)arg1 timestamp:(double)arg2;
- (id)init;
- (long long)preferredSampleRate;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)waitForOutstandingCallbacks;

@end
