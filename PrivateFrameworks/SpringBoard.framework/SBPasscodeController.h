
@interface SBPasscodeController : NSObject {
    SBPasscodeComplianceAlertItem * _complianceAlertItem;
    bool  _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
    NSDate * _forcedComplianceDate;
    id  _manageConfigurationEffectiveSettingsObserver;
    int  _mode;
    NSString * _newPasscode;
    SBPasscodeAlertItem * _passcodeAlertItem;
    NSObject<OS_dispatch_queue> * _passcodeComplianceQueue;
    NSString * _previousPasscode;
    int  _restoreCompletedAlertStateChangedToken;
    int  _simplePasscodeType;
    id  _telephonyNotificationObserver;
    int  _unlockScreenType;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_abort;
- (void)_activateComplianceAlert;
- (void)_didEndCall;
- (void)_fetchAndSetUnlockScreenTypeForNewPasscode:(bool)arg1;
- (bool)_isRestoreCompletedAlertActive;
- (void)_passwordEntered:(id)arg1;
- (void)_presentPasscodeAlertItemWithMode:(int)arg1 alertItemErrorString:(id)arg2 unlockScreenType:(int)arg3;
- (void)_startListeningToManagedConfigurationNotification;
- (void)_startListeningToRestoreCompletedAlertStateChangedNotifications;
- (void)_startListeningToTelephonyNotifications;
- (void)_stopListeningToManagedConfigurationNotification;
- (void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
- (void)_stopListeningToTelephonyNotifications;
- (void)_userWantsToComplyNow:(bool)arg1;
- (void)checkPasscodeCompliance;
- (void)dealloc;
- (void)forceUserToChangePasscode;
- (id)init;

@end
