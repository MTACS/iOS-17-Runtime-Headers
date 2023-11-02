
@interface HKMedicalRecordOriginIdentifier : NSObject <NSCopying, NSSecureCoding> {
    HKFHIRIdentifier * _fhirIdentifier;
    NSUUID * _signedClinicalDataRecordIdentifier;
}

@property (nonatomic, readonly, copy) HKFHIRIdentifier *fhirIdentifier;
@property (nonatomic, readonly, copy) NSUUID *signedClinicalDataRecordIdentifier;

+ (id)originIdentifierWithFHIRResourceType:(id)arg1 identifier:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)unitTesting_identifierWithAllPropertiesAllocated;
+ (id)unitTesting_identifierWithNeitherPropertyAllocated;

- (void).cxx_destruct;
- (id)_initWithFHIRIdentifier:(id)arg1 signedClinicalDataRecordIdentifier:(id)arg2;
- (void)_setFhirIdentifier:(id)arg1;
- (void)_setSignedClinicalDataRecordIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fhirIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFHIRIdentifier:(id)arg1;
- (id)initWithSignedClinicalDataRecordIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)signedClinicalDataRecordIdentifier;

@end
