
@interface HKVisionPrescription : HKSample <HDCoding, NSCopying, NSSecureCoding> {
    HKQuantity * _leftAddPower;
    HKQuantity * _leftAxis;
    HKQuantity * _leftCylinder;
    HKQuantity * _leftSphere;
    unsigned long long  _prescriptionType;
    HKQuantity * _rightAddPower;
    HKQuantity * _rightAxis;
    HKQuantity * _rightCylinder;
    HKQuantity * _rightSphere;
}

@property (nonatomic, readonly, copy) NSDate *dateIssued;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKQuantity *leftAddPower;
@property (nonatomic, readonly, copy) HKQuantity *leftAxis;
@property (nonatomic, readonly, copy) HKQuantity *leftCylinder;
@property (nonatomic, readonly, copy) HKQuantity *leftSphere;
@property (nonatomic, readonly) unsigned long long prescriptionType;
@property (nonatomic, readonly, copy) HKQuantity *rightAddPower;
@property (nonatomic, readonly, copy) HKQuantity *rightAxis;
@property (nonatomic, readonly, copy) HKQuantity *rightCylinder;
@property (nonatomic, readonly, copy) HKQuantity *rightSphere;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (bool)_validateAddPower:(id)arg1 error:(id*)arg2;
+ (bool)_validateAxis:(id)arg1 error:(id*)arg2;
+ (bool)_validateCylinder:(id)arg1 error:(id*)arg2;
+ (bool)_validateSphere:(id)arg1 error:(id*)arg2;
+ (id)prescriptionWithType:(unsigned long long)arg1 dateIssued:(id)arg2 expirationDate:(id)arg3 device:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPrescriptionType:(unsigned long long)arg1;
- (bool)_validateCommonFieldsWithError:(id*)arg1;
- (bool)_validateForSavingWithClientEntitlements:(id)arg1 applicationSDKVersion:(unsigned int)arg2 isAppleWatch:(bool)arg3 error:(id*)arg4;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIssued;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)leftAddPower;
- (id)leftAxis;
- (id)leftCylinder;
- (id)leftSphere;
- (unsigned long long)prescriptionType;
- (id)rightAddPower;
- (id)rightAxis;
- (id)rightCylinder;
- (id)rightSphere;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
