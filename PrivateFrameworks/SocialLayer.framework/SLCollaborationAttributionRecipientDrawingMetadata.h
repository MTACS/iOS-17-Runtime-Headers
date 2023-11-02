
@interface SLCollaborationAttributionRecipientDrawingMetadata : NSObject <NSCopying, NSSecureCoding> {
    CNContact * _contact;
    NSData * _contactImageData;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSData *contactImageData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)contactImageData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 contactImageData:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
