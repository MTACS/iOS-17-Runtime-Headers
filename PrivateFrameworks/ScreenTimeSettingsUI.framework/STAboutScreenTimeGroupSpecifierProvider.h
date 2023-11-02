
@interface STAboutScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    PSSpecifier * _aboutScreenTimeSpecifier;
}

@property (nonatomic, retain) PSSpecifier *aboutScreenTimeSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aboutScreenTimeSpecifier;
- (void)dealloc;
- (id)init;
- (bool)isHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setAboutScreenTimeSpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;

@end
