
@interface VSIdentityProviderStorefrontCollection : NSObject {
    NSString * _localizedDisplayName;
    NSMutableArray * _mutableAllIdentityProviders;
    NSMutableArray * _mutableFeaturedIdentityProviders;
    NSString * _storefrontTwoCharCode;
}

@property (nonatomic, retain) NSString *localizedDisplayName;
@property (nonatomic, retain) NSMutableArray *mutableAllIdentityProviders;
@property (nonatomic, retain) NSMutableArray *mutableFeaturedIdentityProviders;
@property (nonatomic, retain) NSString *storefrontTwoCharCode;

- (void).cxx_destruct;
- (id)allIdentityProviders;
- (void)featureProvidersInCurrentStorefront;
- (id)featuredIdentityProviders;
- (id)init;
- (id)localizedDisplayName;
- (id)mutableAllIdentityProviders;
- (id)mutableFeaturedIdentityProviders;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setMutableAllIdentityProviders:(id)arg1;
- (void)setMutableFeaturedIdentityProviders:(id)arg1;
- (void)setStorefrontTwoCharCode:(id)arg1;
- (id)storefrontTwoCharCode;

@end
