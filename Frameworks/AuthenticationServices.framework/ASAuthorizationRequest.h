
@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding> {
    <ASAuthorizationProvider> * _provider;
}

@property (nonatomic, readonly) <ASAuthorizationProvider> *provider;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)provider;
- (bool)supportsStyle:(long long)arg1;

@end
