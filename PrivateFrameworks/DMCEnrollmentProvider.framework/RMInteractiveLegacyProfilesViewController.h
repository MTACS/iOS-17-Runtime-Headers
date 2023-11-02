
@interface RMInteractiveLegacyProfilesViewController : PSListController {
    RMUIProfileViewModel * _profileModel;
    <RMConfigurationsDataProvider> * _rmDataProvider;
}

@property (nonatomic, retain) RMUIProfileViewModel *profileModel;
@property (nonatomic, retain) <RMConfigurationsDataProvider> *rmDataProvider;

- (void).cxx_destruct;
- (void)_activateProfile:(id)arg1 specifier:(id)arg2;
- (id)_isActivatedProfile:(id)arg1;
- (void)_presentAlertForErrorModel:(id)arg1;
- (void)_processUserInfoDictionary;
- (id)_specifiersForProfile;
- (id)profileModel;
- (id)rmDataProvider;
- (void)setProfileModel:(id)arg1;
- (void)setRmDataProvider:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
