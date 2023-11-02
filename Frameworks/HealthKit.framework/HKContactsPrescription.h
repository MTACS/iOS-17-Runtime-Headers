
@interface HKContactsPrescription : HKVisionPrescription <NSCopying, NSSecureCoding> {
    NSString * _brand;
    HKContactsLensSpecification * _leftEye;
    HKContactsLensSpecification * _rightEye;
}

@property (nonatomic, readonly, copy) NSString *brand;
@property (nonatomic, readonly, copy) HKContactsLensSpecification *leftEye;
@property (nonatomic, readonly, copy) HKContactsLensSpecification *rightEye;

+ (bool)_validateBaseCurve:(id)arg1 error:(id*)arg2;
+ (bool)_validateDiameter:(id)arg1 error:(id*)arg2;
+ (id)prescriptionWithRightEyeSpecification:(id)arg1 leftEyeSpecification:(id)arg2 brand:(id)arg3 dateIssued:(id)arg4 expirationDate:(id)arg5 device:(id)arg6 metadata:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBrand:(id)arg1;
- (void)_setLeftEyeSpecification:(id)arg1;
- (void)_setRightEyeSpecification:(id)arg1;
- (bool)_validateContactsFieldsWithError:(id*)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)brand;
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
