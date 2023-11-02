
@interface STRestrictionsGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    PSSpecifier * _contentPrivacySpecifier;
}

@property (nonatomic, retain) PSSpecifier *contentPrivacySpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentPrivacyDetailText;
- (id)contentPrivacySpecifier;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setContentPrivacySpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;

@end
