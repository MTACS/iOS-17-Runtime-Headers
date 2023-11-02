
@interface ASAuthorizationPublicKeyCredentialParameters : NSObject <NSCopying, NSSecureCoding> {
    long long  _algorithm;
}

@property (nonatomic, readonly) long long algorithm;

+ (bool)supportsSecureCoding;

- (long long)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAlgorithm:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end
