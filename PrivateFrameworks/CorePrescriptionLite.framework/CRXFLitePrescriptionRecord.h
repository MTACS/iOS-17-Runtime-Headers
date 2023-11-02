
@interface CRXFLitePrescriptionRecord : NSObject <NSSecureCoding> {
    NSData * _accPayload;
    NSDate * _enrollmentDate;
    NSString * _enrollmentName;
    NSString * _leftCalibrationData;
    CRXFLiteRXValues * _leftEyeRX;
    NSString * _rightCalibrationData;
    CRXFLiteRXValues * _rightEyeRX;
}

@property (nonatomic, readonly) NSData *accPayload;
@property (nonatomic, readonly) NSDate *enrollmentDate;
@property (nonatomic, readonly) NSString *enrollmentName;
@property (nonatomic, readonly) NSString *leftCalibrationData;
@property (nonatomic, readonly) CRXFLiteRXValues *leftEyeRX;
@property (nonatomic, readonly) NSString *rightCalibrationData;
@property (nonatomic, readonly) CRXFLiteRXValues *rightEyeRX;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accPayload;
- (void)encodeWithCoder:(id)arg1;
- (id)enrollmentDate;
- (id)enrollmentName;
- (id)initWithACCPayload:(id)arg1 enrollmentName:(id)arg2 enrollmentDate:(id)arg3 leftCalibrationData:(id)arg4 rightCalibrationData:(id)arg5 leftEyeRX:(id)arg6 rightEyeRX:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)leftCalibrationData;
- (id)leftEyeRX;
- (id)rightCalibrationData;
- (id)rightEyeRX;

@end
