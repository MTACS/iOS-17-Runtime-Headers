
@interface HKSignedClinicalDataParsingResultClinicalItem : HKSignedClinicalDataParsingResultItem <NSCopying, NSSecureCoding> {
    NSArray * _clinicalRecords;
    NSArray * _medicalRecords;
    HKVerifiableClinicalRecord * _verifiableClinicalRecord;
}

@property (nonatomic, readonly, copy) NSArray *clinicalRecords;
@property (nonatomic, readonly, copy) NSArray *medicalRecords;
@property (nonatomic, readonly, copy) HKVerifiableClinicalRecord *verifiableClinicalRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clinicalRecords;
- (id)copyWithOriginalRecord:(id)arg1 mainRecord:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalRecord:(id)arg1 mainRecord:(id)arg2 verifiableClinicalRecord:(id)arg3 medicalRecords:(id)arg4 clinicalRecords:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)medicalRecords;
- (id)uniquenessChecksum;
- (id)verifiableClinicalRecord;

@end
