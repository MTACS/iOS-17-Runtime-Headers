
@interface CVAIMUCalibration : NSObject <NSSecureCoding> {
    NSArray * _accelConversion;
    double  _accelTimestampCorrection;
    NSArray * _gravity;
    NSArray * _gyroConversion;
    NSArray * _imuToIMURotation;
    NSArray * _imuToIMUTranslation;
    NSArray * _noiseCharacteristics;
}

@property (nonatomic, retain) NSArray *accelConversion;
@property (nonatomic) double accelTimestampCorrection;
@property (nonatomic, retain) NSArray *gravity;
@property (nonatomic, retain) NSArray *gyroConversion;
@property (nonatomic, retain) NSArray *imuToIMURotation;
@property (nonatomic, retain) NSArray *imuToIMUTranslation;
@property (nonatomic, retain) NSArray *noiseCharacteristics;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accelConversion;
- (double)accelTimestampCorrection;
- (void)encodeWithCoder:(id)arg1;
- (id)gravity;
- (id)gyroConversion;
- (id)imuToIMURotation;
- (id)imuToIMUTranslation;
- (id)initWithCoder:(id)arg1;
- (id)noiseCharacteristics;
- (void)setAccelConversion:(id)arg1;
- (void)setAccelTimestampCorrection:(double)arg1;
- (void)setGravity:(id)arg1;
- (void)setGyroConversion:(id)arg1;
- (void)setImuToIMURotation:(id)arg1;
- (void)setImuToIMUTranslation:(id)arg1;
- (void)setNoiseCharacteristics:(id)arg1;

@end
