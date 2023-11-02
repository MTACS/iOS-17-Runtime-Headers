
@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController {
    PSSpecifier * _automaticallyDownloadUpdatesSwitchSpecifier;
    PSSpecifier * _automaticallyInstallSwitchSpecifier;
    SUManagerClient * _manager;
    PSSpecifier * _securityResponseSwitchSpecifier;
}

@property (nonatomic, retain) PSSpecifier *automaticallyDownloadUpdatesSwitchSpecifier;
@property (nonatomic, retain) PSSpecifier *automaticallyInstallSwitchSpecifier;
@property (nonatomic, retain) SUManagerClient *manager;
@property (nonatomic, retain) PSSpecifier *securityResponseSwitchSpecifier;

- (void).cxx_destruct;
- (id)automaticDownloadEnabled;
- (id)automaticDownloadStatus;
- (id)automaticUpdateStatus;
- (id)automaticallyDownloadGroup;
- (id)automaticallyDownloadSecurityResponseAndSystemFilesSwitch;
- (id)automaticallyDownloadUpdatesSwitch;
- (id)automaticallyDownloadUpdatesSwitchSpecifier;
- (id)automaticallyInstallGroup;
- (id)automaticallyInstallSwitch;
- (id)automaticallyInstallSwitchSpecifier;
- (id)init;
- (id)manager;
- (id)previousUserSpecifiedAutomaticUpdateStatus;
- (id)previousUserSpecifiedSecurityResponseStatus;
- (id)securityResponseStatus;
- (id)securityResponseSwitchSpecifier;
- (void)setArmedAutomaticallyInstallToggledWithValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setAutomaticallyDownloadUpdatesSwitchSpecifier:(id)arg1;
- (void)setAutomaticallyDownloadUpdatesToggledWithValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setAutomaticallyInstallSecurityResponsesAndSystemDataToggledWithValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setAutomaticallyInstallSwitchSpecifier:(id)arg1;
- (void)setAutomaticallyInstallUpdatesToggledWithValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setManager:(id)arg1;
- (void)setNonArmedAutomaticallyInstallToggledWithValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setSecurityResponseSwitchSpecifier:(id)arg1;
- (void)setSecurityResponseToggleState:(id)arg1 toggleCellEnabled:(id)arg2 userSpecified:(bool)arg3 specifier:(id)arg4;
- (id)specifiers;
- (id)updateController;

@end
