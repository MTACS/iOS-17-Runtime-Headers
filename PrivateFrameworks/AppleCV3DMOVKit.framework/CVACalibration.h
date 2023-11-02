
@interface CVACalibration : NSObject <NSSecureCoding> {
    NSArray * _cameraCalibrations;
    CVAIMUCalibration * _imuCalibration;
}

@property (nonatomic, retain) NSArray *cameraCalibrations;
@property (nonatomic, retain) CVAIMUCalibration *imuCalibration;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cameraCalibrations;
- (void)encodeWithCoder:(id)arg1;
- (id)imuCalibration;
- (id)initWithCoder:(id)arg1;
- (void)setCameraCalibrations:(id)arg1;
- (void)setImuCalibration:(id)arg1;

@end
