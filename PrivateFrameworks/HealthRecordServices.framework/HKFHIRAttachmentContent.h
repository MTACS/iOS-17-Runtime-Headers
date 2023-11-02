
@interface HKFHIRAttachmentContent : NSObject <NSCopying, NSSecureCoding> {
    NSData * _content;
    NSString * _contentType;
}

@property (nonatomic, readonly, copy) NSData *content;
@property (nonatomic, readonly, copy) NSString *contentType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 contentType:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
