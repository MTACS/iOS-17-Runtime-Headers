
@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate> {
    ACAccount * _iTunesAccount;
    bool  _isFirstRun;
    UIViewController * _presentingViewController;
    FAFamilySetupPrompter * _prompter;
    FAFamilySettings * _retainedSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) ACAccount *iTunesAccount;
@property bool isFirstRun;
@property UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_launchPrefsUsingDaemonWithOptions:(id)arg1;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (id)iTunesAccount;
- (bool)isAccountSignedIn;
- (bool)isFirstRun;
- (void)launchiCloudFamilySettings;
- (void)launchiCloudFamilySettingsWithOptions:(id)arg1;
- (id)presentingViewController;
- (void)setITunesAccount:(id)arg1;
- (void)setIsFirstRun:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
