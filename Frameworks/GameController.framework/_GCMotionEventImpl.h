
@interface _GCMotionEventImpl : NSObject <_GCMotionEvent> {
    double  _accelerometerX;
    double  _accelerometerY;
    double  _accelerometerZ;
    double  _attitudeW;
    double  _attitudeX;
    double  _attitudeY;
    double  _attitudeZ;
    double  _gyroPitch;
    double  _gyroRoll;
    double  _gyroYaw;
    bool  _hasAccelerometer;
    bool  _hasAttitude;
    bool  _hasGyro;
    unsigned long long  _timestamp;
}

@property (nonatomic) double accelerometerX;
@property (nonatomic) double accelerometerY;
@property (nonatomic) double accelerometerZ;
@property (nonatomic) double attitudeW;
@property (nonatomic) double attitudeX;
@property (nonatomic) double attitudeY;
@property (nonatomic) double attitudeZ;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double gyroPitch;
@property (nonatomic) double gyroRoll;
@property (nonatomic) double gyroYaw;
@property (nonatomic) bool hasAccelerometer;
@property (nonatomic) bool hasAttitude;
@property (nonatomic) bool hasGyro;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (double)accelerometerX;
- (double)accelerometerY;
- (double)accelerometerZ;
- (double)attitudeW;
- (double)attitudeX;
- (double)attitudeY;
- (double)attitudeZ;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)gyroPitch;
- (double)gyroRoll;
- (double)gyroYaw;
- (bool)hasAccelerometer;
- (bool)hasAttitude;
- (bool)hasGyro;
- (id)initWithMotionEvent:(id)arg1;
- (void)setAccelerometerX:(double)arg1;
- (void)setAccelerometerY:(double)arg1;
- (void)setAccelerometerZ:(double)arg1;
- (void)setAttitudeW:(double)arg1;
- (void)setAttitudeX:(double)arg1;
- (void)setAttitudeY:(double)arg1;
- (void)setAttitudeZ:(double)arg1;
- (void)setGyroPitch:(double)arg1;
- (void)setGyroRoll:(double)arg1;
- (void)setGyroYaw:(double)arg1;
- (void)setHasAccelerometer:(bool)arg1;
- (void)setHasAttitude:(bool)arg1;
- (void)setHasGyro:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
