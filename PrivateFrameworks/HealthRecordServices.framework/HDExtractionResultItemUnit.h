
@interface HDExtractionResultItemUnit : NSObject <NSCopying, NSSecureCoding> {
    HKClinicalRecord * _clinicalRecord;
    NSArray * _downloadableAttachments;
    HKMedicalRecord * _medicalRecord;
}

@property (nonatomic, readonly, copy) HKClinicalRecord *clinicalRecord;
@property (nonatomic, readonly, copy) NSArray *downloadableAttachments;
@property (nonatomic, readonly, copy) HKMedicalRecord *medicalRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clinicalRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)downloadableAttachments;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMedicalRecord:(id)arg1 clinicalRecord:(id)arg2 downloadableAttachments:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;

@end
