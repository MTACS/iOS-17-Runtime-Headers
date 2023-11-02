
@interface HKClinicalDocumentSpotlightSearchResult : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _attachmentUUID;
    HKMedicalRecord * _medicalRecord;
    NSString * _previewString;
    NSArray * _previewStringMatchRanges;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSUUID *attachmentUUID;
@property (nonatomic, readonly, copy) HKMedicalRecord *medicalRecord;
@property (nonatomic, readonly, copy) NSString *previewString;
@property (nonatomic, readonly, copy) NSArray *previewStringMatchRanges;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 medicalRecord:(id)arg2 attachmentUUID:(id)arg3 previewString:(id)arg4 previewStringMatchRanges:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (id)previewString;
- (id)previewStringMatchRanges;
- (id)title;

@end
