
@interface STPasscodeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    PSListController * _listController;
    PSSpecifier * _togglePasscodeSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PSListController *listController;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSSpecifier *togglePasscodeSpecifier;

+ (id)providerWithCoordinator:(id)arg1 listController:(id)arg2;

- (void).cxx_destruct;
- (id)_authenticationContextWithReasonKey:(id)arg1 presentingViewController:(id)arg2;
- (void)_promptForRecoveryAppleIDWithPINController:(id)arg1 passcode:(id)arg2;
- (void)_removeManagedPasscode;
- (id)_removePasscodeActionWithPINOptionsTitle:(id)arg1 pinOptionsHandler:(id /* block */)arg2 pinValidationHandler:(id /* block */)arg3;
- (void)_setManagedPasscode;
- (void)changeOrRemovePasscode:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isHidden;
- (id)listController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)reloadTogglePasscodeSpecifier;
- (void)setCoordinator:(id)arg1;
- (void)setTogglePasscodeSpecifier:(id)arg1;
- (id)togglePasscodeSpecifier;

@end
