
@interface CMDeviceMotion : CMLogItem {
    id  _internal;
}

@property (nonatomic, readonly) CMAttitude *attitude;
@property (nonatomic, readonly) bool doingBiasEstimation;
@property (nonatomic, readonly) bool doingYawCorrection;
@property (nonatomic, readonly) bool fusedWithVision;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } gravity;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) double headingAccuracy;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; int x2; } magneticField;
@property (nonatomic, readonly) int magneticFieldCalibrationLevel;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rotationRate;
@property (nonatomic, readonly) long long sensorLocation;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } userAcceleration;
@property (nonatomic, readonly) bool usingVisionCorrections;

+ (bool)supportsSecureCoding;

- (id)attitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)doingBiasEstimation;
- (bool)doingYawCorrection;
- (void)encodeWithCoder:(id)arg1;
- (bool)fusedWithVision;
- (struct { double x1; double x2; double x3; })gravity;
- (double)heading;
- (double)headingAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; bool x6; bool x7; bool x8; float x9; bool x10; bool x11; int x12; })arg1 internal:(struct { float x1; })arg2 timestamp:(double)arg3;
- (bool)isEqual:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; int x2; })magneticField;
- (int)magneticFieldCalibrationLevel;
- (struct { double x1; double x2; double x3; })rotationRate;
- (long long)sensorLocation;
- (struct { double x1; double x2; double x3; })userAcceleration;
- (bool)usingVisionCorrections;

@end
