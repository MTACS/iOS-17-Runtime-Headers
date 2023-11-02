
@interface HDFitnessMachineStateTimers : NSObject {
    <HDFitnessMachineStateTimersDelegate> * _delegate;
    HDFitnessMachineStateTimer * _disconnectTimer;
    HDFitnessMachineStateTimer * _fieldDetectTimer;
    HDFitnessMachineStateTimer * _machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer * _mfaTimer;
    HDFitnessMachineStateTimer * _pauseTimer;
    NSObject<OS_dispatch_queue> * _queue;
    HDFitnessMachineStateTimer * _retryConnectionTimer;
    HDFitnessMachineStateTimer * _tagReadTimer;
    HDFitnessMachineStateTimer * _userAcceptanceTimer;
    HDFitnessMachineStateTimer * _waitForMachineStartTimer;
}

@property (nonatomic) <HDFitnessMachineStateTimersDelegate> *delegate;

- (void).cxx_destruct;
- (void)beginDisconnectTimeout;
- (void)beginFieldDetectTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (void)beginMfaTimeout;
- (void)beginPauseTimeout;
- (void)beginRetryConnectionTimeout;
- (void)beginTagReadTimeout;
- (void)beginUserAcceptanceTimeout;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelAllTimers;
- (void)cancelDisconnectTimeout;
- (void)cancelFieldDetectTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)cancelMfaTimeout;
- (void)cancelPauseTimeout;
- (void)cancelRetryConnectionTimeout;
- (void)cancelTagReadTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (void)dealloc;
- (id)delegate;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (bool)isDisconnectTimerValid;
- (bool)isFieldDetectTimerValid;
- (bool)isMachineIdentityVerificationTimerValid;
- (bool)isMfaTimerValid;
- (bool)isPauseTimerValid;
- (bool)isRetryConnectionTimerValid;
- (bool)isTagReadTimerValid;
- (bool)isUserAcceptanceTimerValid;
- (bool)isWaitForMachineStartTimerValid;
- (void)setDelegate:(id)arg1;

@end
