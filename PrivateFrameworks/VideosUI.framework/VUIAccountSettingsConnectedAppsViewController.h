
@interface VUIAccountSettingsConnectedAppsViewController : PSListController {
    PSSpecifier * _appGroup;
    NSArray * _appSpecifiers;
}

- (void).cxx_destruct;
- (id)_accessStatusForSpecifier:(id)arg1;
- (void)_addPrivacyFooterToGroup:(id)arg1;
- (long long)_alertStyle;
- (id)_appGroupSpecifier;
- (void)_loadAppGroup;
- (void)_promptToDisableChannel:(id)arg1 withExternalID:(id)arg2;
- (void)_promptToEnableChannel:(id)arg1 withExternalID:(id)arg2;
- (void)_showPrivacySheet:(id)arg1;
- (void)_showVppaExpiredPrompt:(id)arg1;
- (void)_startAppSpinner;
- (void)_stopAppSpinner;
- (void)_toggleSpecifier:(id)arg1 sender:(id)arg2;
- (id)specifiers;
- (void)viewDidLoad;

@end
