
@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {
    NSCountedSet * _additionalAttachments;
    long long  primaryType;
}

@property (nonatomic, retain) NSCountedSet *additionalAttachments;
@property (nonatomic) long long primaryType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAttachmentOfType:(long long)arg1;
- (id)additionalAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttachments:(id)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (long long)primaryType;
- (void)setAdditionalAttachments:(id)arg1;
- (void)setPrimaryType:(long long)arg1;

@end
