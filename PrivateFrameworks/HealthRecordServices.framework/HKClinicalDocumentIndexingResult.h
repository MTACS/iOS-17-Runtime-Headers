
@interface HKClinicalDocumentIndexingResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _attachmentIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *attachmentIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttachmentIdentifiers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
