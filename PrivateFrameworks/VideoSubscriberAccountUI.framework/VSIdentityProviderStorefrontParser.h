
@interface VSIdentityProviderStorefrontParser : NSObject {
    NSArray * _allIdentityProviders;
    NSArray * _allStorefronts;
    NSDictionary * _providersByStorefront;
    NSDictionary * _storefrontsByCountryCode;
}

@property (nonatomic, copy) NSArray *allIdentityProviders;
@property (nonatomic, copy) NSArray *allStorefronts;
@property (nonatomic, readonly, copy) NSDictionary *identityProvidersByStorefront;
@property (nonatomic, retain) NSDictionary *providersByStorefront;
@property (nonatomic, retain) NSDictionary *storefrontsByCountryCode;
@property (nonatomic, readonly, copy) NSArray *tvProviderSupportedStorefronts;

- (void).cxx_destruct;
- (id)allIdentityProviders;
- (id)allStorefronts;
- (id)identityProvidersByStorefront;
- (id)init;
- (id)providersByStorefront;
- (id)providersForStorefront:(id)arg1;
- (void)setAllIdentityProviders:(id)arg1;
- (void)setAllStorefronts:(id)arg1;
- (void)setAllStorefronts:(id)arg1 withCurrentStorefrontCode:(id)arg2;
- (void)setProvidersByStorefront:(id)arg1;
- (void)setStorefrontsByCountryCode:(id)arg1;
- (id)storefrontsByCountryCode;
- (id)tvProviderSupportedStorefronts;
- (id)updateFeaturedStorefronts:(id)arg1 withCurrentStorefrontCodeOrNil:(id)arg2;

@end
