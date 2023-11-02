
@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType> {
    <FCCoreConfigurationManager> * _configurationManager;
    FCEntitlementService * _entitlementService;
    <FCEntitlementsOverrideProviderType> * entitlementsOverrideProvider;
}

@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, readonly) FCEntitlementService *entitlementService;
@property (nonatomic, retain) <FCEntitlementsOverrideProviderType> *entitlementsOverrideProvider;

- (void).cxx_destruct;
- (void)_fetchEntitlementsWithIgnoreCache:(bool)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (id)configurationManager;
- (id)entitlementService;
- (id)entitlementsOverrideProvider;
- (void)fetchEntitlementsWithIgnoreCache:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithConfigurationManager:(id)arg1 entitlementService:(id)arg2;
- (void)setEntitlementsOverrideProvider:(id)arg1;

@end
