
@interface MSAuthenticationCredential : NSObject <NSCopying, NSSecureCoding> {
    CMSAuthenticationCredential * _credential;
}

@property (readonly) CMSAuthenticationCredential *credential;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
