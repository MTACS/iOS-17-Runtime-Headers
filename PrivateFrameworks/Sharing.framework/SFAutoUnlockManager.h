
@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol> {
    <SFAutoUnlockManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAutoUnlockManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double spinnerDelay;
@property (readonly) Class superclass;

+ (bool)autoUnlockEnabled;
+ (bool)autoUnlockEnabled:(unsigned int)arg1;
+ (bool)autoUnlockSupported;
+ (bool)bluetoothAndWiFiEnabled;
+ (void)enableBluetoothAndWiFi;
+ (bool)mockedAutoUnlockEnabled;
+ (bool)mockedBluetoothAndWiFiEnabled;
+ (void)mockedEnableBluetoothAndWiFi;
+ (bool)mockedPhoneAutoUnlockAWDLUnavailable;
+ (bool)mockedPhoneAutoUnlockEnabled;
+ (bool)mockedPhoneAutoUnlockFaceIDDisabled;
+ (bool)mockedPhoneAutoUnlockInBioLockout;
+ (bool)mockedPhoneAutoUnlockMaskUnlikely;
+ (bool)mockedPhoneAutoUnlockNeverUnlocked;
+ (bool)mockedPhoneAutoUnlockNoMask;
+ (bool)mockedPhoneAutoUnlockNoPairedWatch;
+ (bool)mockedPhoneAutoUnlockNoWatch;
+ (bool)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;
+ (float)mockedPhoneAutoUnlockSimulateLatency;
+ (bool)mockedPhoneAutoUnlockSimulateMagnetBreak;
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;
+ (bool)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+ (bool)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+ (bool)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+ (bool)mockedPhoneAutoUnlockWatchLocked;
+ (bool)mockedPhoneAutoUnlockWatchNoMotion;
+ (bool)mockedPhoneAutoUnlockWatchOffWrist;
+ (bool)mockedPhoneAutoUnlockWatchSleepModeOn;
+ (bool)mockedPhoneAutoUnlockWatchWiFiOff;
+ (bool)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+ (bool)mockedPhoneAutoUnlockWiFiOff;
+ (id)userDefaults;

- (void).cxx_destruct;
- (void)attemptAutoUnlock;
- (void)attemptAutoUnlockForSiri;
- (void)attemptAutoUnlockWithoutNotifyingWatch;
- (void)authPromptInfoWithCompletionHandler:(id /* block */)arg1;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)arg1;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)cancelAutoUnlock;
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;
- (void)completeAutoUnlockWithNotification:(bool)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (void)declinedToEnablePhoneAutoUnlock;
- (id)delegate;
- (id)delegateQueue;
- (void)deviceRequestedRelock:(id)arg1;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)donateDeviceUnlockedWithMask:(bool)arg1;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)enabledDevice:(id)arg1;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)failedUnlockWithError:(id)arg1;
- (id)init;
- (void)keyDeviceLocked:(id)arg1;
- (void)mockedAttemptAutoUnlock;
- (void)mockedCancelUnlock;
- (void)mockedDisableAutoUnlockForDevice:(id /* block */)arg1;
- (void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)mockedEnableAutoUnlockWithDevice:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)prewarmAutoUnlock;
- (void)repairCloudPairing;
- (void)requestRelock;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (double)spinnerDelay;

@end
