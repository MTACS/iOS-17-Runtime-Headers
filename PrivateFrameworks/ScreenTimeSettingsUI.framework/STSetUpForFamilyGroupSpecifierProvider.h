
@interface STSetUpForFamilyGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    UIViewController * _presenter;
    PSSpecifier * _setupFamilySpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presenter;
@property (nonatomic, readonly) PSSpecifier *setupFamilySpecifier;
@property (readonly) Class superclass;

+ (id)providerWithCoordinator:(id)arg1 presenter:(id)arg2;

- (void).cxx_destruct;
- (void)_updateEnabledValue;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentAppleAccountSetupFamilyController:(id)arg1;
- (id)presenter;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)setupFamilySpecifier;

@end
