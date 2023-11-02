
@interface STCommunicationGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    PSSpecifier * _communicationLimitsSpecifier;
    PSSpecifier * _communicationSafetySpecifier;
}

@property (nonatomic, retain) PSSpecifier *communicationLimitsSpecifier;
@property (nonatomic, retain) PSSpecifier *communicationSafetySpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_communicationLimitsDetailText;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)_communicationSafetyDetailText;
- (void)_communicationSafetyDidChange;
- (void)_isRemoteUserDidChangeFrom:(bool)arg1 to:(bool)arg2;
- (void)_resetCommunicationLimitsDetailText;
- (void)_showCommunicationLimitsViewController:(id)arg1;
- (void)_userTypeDidChange:(unsigned long long)arg1;
- (id)communicationLimitsSpecifier;
- (id)communicationSafetySpecifier;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCommunicationLimitsSpecifier:(id)arg1;
- (void)setCommunicationSafetySpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)showCommunicationSafetyViewController:(id)arg1;
- (bool)showDemoModeAlertIfNeeded;

@end
