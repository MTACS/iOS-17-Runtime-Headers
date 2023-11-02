
@interface HKClinicalDocumentIndexingRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _attachmentIdentifiers;
    HKMedicalRecord * _medicalRecord;
}

@property (nonatomic, readonly, copy) NSArray *attachmentIdentifiers;
@property (nonatomic, readonly, copy) HKMedicalRecord *medicalRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMedicalRecord:(id)arg1 attachmentIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;

@end
