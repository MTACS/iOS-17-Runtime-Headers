
@interface ARMotionSensor : NSObject <ARSensor> {
    ARAccelerometerData * _currentAccelerometerData;
    ARGyroscopeData * _currentGyroData;
    ARMagnetometerData * _currentMagnetometerData;
    <ARSensorDelegate> * _delegate;
    double  _interval;
    CMMotionManager * _motionManager;
    bool  _requestMagnetometerData;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interval;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accelerometerOutput:(const struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; double x2; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)gyroscopeOutput:(const struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; double x2; }*)arg1;
- (id)initWithMotionManager:(id)arg1;
- (double)interval;
- (void)magnetometerOutput:(const struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; double x2; }*)arg1;
- (double)preferredInterval;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)start;
- (void)stop;

@end
