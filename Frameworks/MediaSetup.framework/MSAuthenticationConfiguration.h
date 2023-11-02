
@interface MSAuthenticationConfiguration : NSObject <NSCopying, NSSecureCoding> {
    CMSAuthenticationConfiguration * _configuration;
}

@property (readonly) CMSAuthenticationConfiguration *configuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
