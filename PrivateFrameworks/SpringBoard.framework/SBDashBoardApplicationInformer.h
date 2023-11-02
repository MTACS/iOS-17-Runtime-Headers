
@interface SBDashBoardApplicationInformer : NSObject <CSApplicationInforming> {
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_installedApplicationsDidChange:(id)arg1;
- (bool)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (void)_screenTimeNotificationPolicyDidChange:(id)arg1;
- (void)addApplicationInformationObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (bool)isBundleIdentifierClock:(id)arg1;
- (bool)isBundleIdentifierUserVisible:(id)arg1;
- (bool)isBundleIdentifierWallet:(id)arg1;
- (void)removeApplicationInformationObserver:(id)arg1;
- (bool)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;

@end
