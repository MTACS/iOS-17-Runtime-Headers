
@interface VSIdentityProviderInfoQueryResult : NSObject {
    NSString * _designatedAppBundleIdentifier;
    VSIdentityProvider * _identityProvider;
}

@property (nonatomic, copy) NSString *designatedAppBundleIdentifier;
@property (nonatomic, copy) VSIdentityProvider *identityProvider;

- (void).cxx_destruct;
- (id)description;
- (id)designatedAppBundleIdentifier;
- (id)identityProvider;
- (void)setDesignatedAppBundleIdentifier:(id)arg1;
- (void)setIdentityProvider:(id)arg1;

@end
