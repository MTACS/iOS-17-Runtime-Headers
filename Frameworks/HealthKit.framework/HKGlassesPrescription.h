
@interface HKGlassesPrescription : HKVisionPrescription <NSCopying, NSSecureCoding> {
    HKGlassesLensSpecification * _leftEye;
    HKGlassesLensSpecification * _rightEye;
}

@property (nonatomic, readonly, copy) HKGlassesLensSpecification *leftEye;
@property (nonatomic, readonly, copy) HKGlassesLensSpecification *rightEye;

+ (bool)_validatePrism:(id)arg1 error:(id*)arg2;
+ (id)prescriptionWithRightEyeSpecification:(id)arg1 leftEyeSpecification:(id)arg2 dateIssued:(id)arg3 expirationDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setLeftEyeSpecification:(id)arg1;
- (void)_setRightEyeSpecification:(id)arg1;
- (bool)_validateGlassesFieldsWithError:(id*)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leftAddPower;
- (id)leftAxis;
- (id)leftCylinder;
- (id)leftEye;
- (id)leftSphere;
- (id)rightAddPower;
- (id)rightAxis;
- (id)rightCylinder;
- (id)rightEye;
- (id)rightSphere;

@end
