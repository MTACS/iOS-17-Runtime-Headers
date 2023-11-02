
@interface STSignInToiCloudGroupSpecifierProvider : STRootGroupSpecifierProvider <AAUISignInControllerDelegate, MCProfileConnectionObserver> {
    PSSpecifier * _signInSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSSpecifier *signInSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateEnabledValue;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentAppleAccountSignInController:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)setSignInSpecifier:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;
- (id)signInSpecifier;

@end
