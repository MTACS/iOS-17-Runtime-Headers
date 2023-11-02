
@interface CPSTVProviderRequest : CPSAuthenticationRequest <NSSecureCoding> {
    NSString * _providerCode;
    UIImage * _providerImage;
    NSString * _providerName;
    NSURL * _providerURL;
}

@property (nonatomic, retain) NSString *providerCode;
@property (nonatomic, retain) UIImage *providerImage;
@property (nonatomic, retain) NSString *providerName;
@property (nonatomic, retain) NSURL *providerURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)providerCode;
- (id)providerImage;
- (id)providerName;
- (id)providerURL;
- (void)setProviderCode:(id)arg1;
- (void)setProviderImage:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setProviderURL:(id)arg1;

@end
