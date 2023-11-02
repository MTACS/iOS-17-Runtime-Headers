
@interface ARDeviceOrientationSensor : NSObject <ARSensor> {
    <ARSensorDelegate> * _delegate;
    double  _interval;
    CMMotionManager * _motionManager;
    double  _previousCaptureEndingTimestamp;
    NSOperationQueue * _taskDeviceMotion;
    long long  _worldAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interval;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long worldAlignment;

- (void).cxx_destruct;
- (void)changeReferenceFrame:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)handleDeviceMotionUpdateWithMotion:(id)arg1 error:(id)arg2;
- (id)initWithMotionManager:(id)arg1 alignment:(long long)arg2;
- (double)interval;
- (double)preferredInterval;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)start;
- (void)stop;
- (void)waitForOutstandingCallbacks;
- (long long)worldAlignment;

@end
