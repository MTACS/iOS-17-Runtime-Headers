
@interface STEnableRemoteManagementGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    PSSpecifier * _enableRemoteManagementSpecifier;
    UIViewController * _rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PSSpecifier *enableRemoteManagementSpecifier;
@property (readonly) unsigned long long hash;
@property UIViewController *rootViewController;
@property (readonly) Class superclass;

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)enableRemoteManagementButtonName;
- (id)enableRemoteManagementFooterText;
- (id)enableRemoteManagementSpecifier;
- (id)init;
- (bool)isHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)rootViewController;
- (void)setCoordinator:(id)arg1;
- (void)setEnableRemoteManagementSpecifier:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)showChildOnboardingFlow:(id)arg1;

@end
