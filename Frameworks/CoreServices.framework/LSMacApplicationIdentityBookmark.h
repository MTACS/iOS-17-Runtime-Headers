
@interface LSMacApplicationIdentityBookmark : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSString * _bundleIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
