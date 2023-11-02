
@interface PKMAEntitlementTemplateManager : NSObject {
    PKMobileAssetManager * _mobileAssetManager;
}

- (void).cxx_destruct;
- (id)_templatesFromAssetBundle:(id)arg1;
- (id)cachedEntitlementTemplates;
- (void)entitlementTemplates:(id /* block */)arg1;
- (id)init;

@end
