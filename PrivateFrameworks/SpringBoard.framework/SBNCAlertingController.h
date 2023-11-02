
@interface SBNCAlertingController : NSObject <NCAlertingController> {
    NCNotificationRequest * _activeRequestWithRealerts;
    SBCommunicationPolicyManager * _communicationPolicyManager;
    SBLockScreenManager * _lockScreenManager;
    NSMutableSet * _realertTimers;
    SBNCScreenController * _screenController;
    SBNCSoundController * _soundController;
}

@property (nonatomic, retain) NCNotificationRequest *activeRequestWithRealerts;
@property (nonatomic, retain) SBCommunicationPolicyManager *communicationPolicyManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic, retain) NSMutableSet *realertTimers;
@property (nonatomic, retain) SBNCScreenController *screenController;
@property (nonatomic, retain) SBNCSoundController *soundController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_activeAlertDestinationsInRequestDestinations:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)_hardwareButtonPressed:(id)arg1;
- (bool)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (void)_killRealertsForNotificationRequest:(id)arg1;
- (void)_lockStateChanged;
- (void)_notificationCenterDidPresent;
- (void)_realertTimerFired:(id)arg1;
- (void)_scheduleRealertsForNotificationRequest:(id)arg1;
- (bool)_shouldRealert;
- (bool)_shouldScreenTimeSuppressNotificationRequest:(id)arg1;
- (bool)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (id)activeRequestWithRealerts;
- (void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2;
- (void)alertOnPresentationForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (id)communicationPolicyManager;
- (id)init;
- (id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3 communicationPolicyManager:(id)arg4;
- (void)killAlertsForNotificationRequest:(id)arg1;
- (void)killRealerts;
- (id)lockScreenManager;
- (id)realertTimers;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
- (id)screenController;
- (void)setActiveRequestWithRealerts:(id)arg1;
- (void)setCommunicationPolicyManager:(id)arg1;
- (void)setLockScreenManager:(id)arg1;
- (void)setRealertTimers:(id)arg1;
- (void)setScreenController:(id)arg1;
- (void)setSoundController:(id)arg1;
- (id)soundController;

@end
