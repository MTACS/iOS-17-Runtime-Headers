
@interface AFUICloudStorageViewController : PSListController {
    AFSettingsConnection * _settings;
}

- (void).cxx_destruct;
- (void)_disableAndDeleteCloudSync;
- (void)confirmDisable;
- (void)confirmDisableForMultiUserVoiceIdentification;
- (void)didReceiveMemoryWarning;
- (void)handleDisableAndDeleteButtonPress;
- (id)specifiers;
- (void)viewDidLoad;

@end
