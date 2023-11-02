
@interface STFamilyMemberGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    bool  _presentedAsModal;
    UIViewController * _rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presentedAsModal;
@property UIViewController *rootViewController;
@property (readonly) Class superclass;

+ (id)providerWithCoordinator:(id)arg1 presentedAsModal:(bool)arg2;
+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;

- (void).cxx_destruct;
- (id)createSpecifierForUser:(id)arg1 shouldWarn:(bool)arg2;
- (void)dealloc;
- (id)familySpecifiers;
- (void)imageDidUpdate:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)presentedAsModal;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)rootViewController;
- (void)setCoordinator:(id)arg1;
- (void)setPresentedAsModal:(bool)arg1;
- (void)setRootViewController:(id)arg1;
- (void)showChildOnboardingFlow:(id)arg1;
- (void)showChildOnboardingOrChildRootViewController:(id)arg1;
- (void)showChildRootViewController:(id)arg1;
- (id)totalChildUsageTime:(id)arg1;

@end
