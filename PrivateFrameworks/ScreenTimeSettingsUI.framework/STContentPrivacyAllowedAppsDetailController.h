
@interface STContentPrivacyAllowedAppsDetailController : PSListController {
    NSObject<STContentPrivacyViewModelCoordinator> * _coordinator;
}

@property (nonatomic, retain) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (void).cxx_destruct;
- (void)_addBlacklistAppSpecifier:(id)arg1 bundleID:(id)arg2;
- (void)_addBooleanAppSpecifier:(id)arg1 configuration:(id)arg2 key:(id)arg3 bundleID:(id)arg4;
- (id)coordinator;
- (void)dealloc;
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 fallbackLabel:(id)arg3 icon:(id)arg4;
- (id)getItemSpecifierValue:(id)arg1;
- (id)init;
- (id)nameForInstalledSystemApp:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
