
@protocol HDFitnessMachineStateTimersDelegate <NSObject>

@optional

- (void)stateTimersDisconnectTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersFieldDetectTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersMachineIdentityVerificationTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersMfaTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersPauseTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersRetryConnectionTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersTagReadTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersUserAcceptanceTimeout:(HDFitnessMachineStateTimers *)arg1;
- (void)stateTimersWaitForMachineStartTimeout:(HDFitnessMachineStateTimers *)arg1;

@end
