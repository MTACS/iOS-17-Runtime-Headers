
@interface CKSettingsSharedWithYouController : PSListController

- (id)appIsEnabled:(id)arg1;
- (id)getAppBundleIDsFromDefaults;
- (id)getAppSpecifiers;
- (void)postNotificationForAppEnablementChanges;
- (void)setAppIsEnabled:(id)arg1 specifier:(id)arg2 shouldPostNotification:(id)arg3;
- (void)setSharedWithYouEnabled:(id)arg1 specifier:(id)arg2;
- (void)setupDefaultAppsIfRequired;
- (id)sharedWithYouEnabled:(id)arg1;
- (id)specifiers;
- (void)updateAppPreferencesWith:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
