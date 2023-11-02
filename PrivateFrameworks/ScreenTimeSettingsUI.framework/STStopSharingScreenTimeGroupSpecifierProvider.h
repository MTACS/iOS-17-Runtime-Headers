
@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver> {
    PSSpecifier * _stopSharingScreenTimeSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSSpecifier *stopSharingScreenTimeSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)confirmStopSharingScreenTime:(id)arg1;
- (void)dealloc;
- (void)disableManagement:(id)arg1;
- (void)disableScreenTime:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (void)setStopSharingScreenTimeSpecifier:(id)arg1;
- (id)stopSharingScreenTimeButtonName;
- (id)stopSharingScreenTimeConfirmationPrompt;
- (id)stopSharingScreenTimeFooterText;
- (id)stopSharingScreenTimeSpecifier;
- (void)updateStopSharingScreenTimeSpecifier;

@end
