
@interface MOEffectiveShieldSettings : NSObject {
    MOEffectiveSettingsStore * _store;
}

@property (readonly) MOEffectiveCategoryShieldPolicy *applicationCategoryPolicy;
@property (readonly) MOEffectiveArray *applications;
@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveCategoryShieldPolicy *webDomainCategoryPolicy;
@property (readonly) MOEffectiveArray *webDomains;

+ (id)configurationForBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 categoryName:(id)arg3 error:(id*)arg4;
+ (id)configurationForCategoryIdentifier:(id)arg1 categoryName:(id)arg2 error:(id*)arg3;
+ (id)configurationForWebDomain:(id)arg1 categoryIdentifier:(id)arg2 categoryName:(id)arg3 error:(id*)arg4;
+ (void)handleAction:(long long)arg1 bundleIdentifier:(id)arg2 categoryIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)handleAction:(long long)arg1 categoryIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)handleAction:(long long)arg1 webDomain:(id)arg2 categoryIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)newConnection;

- (void).cxx_destruct;
- (id)applicationCategoryPolicy;
- (id)applications;
- (id)init;
- (id)store;
- (id)webDomainCategoryPolicy;
- (id)webDomains;

@end
