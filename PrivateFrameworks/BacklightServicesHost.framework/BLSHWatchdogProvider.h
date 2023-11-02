
@interface BLSHWatchdogProvider : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSAbsoluteMachTimer * _lock_fireRetryTimer;
    <BSInvalidatable> * _lock_forceOverdueAbortTimer;
    bool  _lock_startedTailspin;
    BLSHWatchdogAbortParameters * _lock_waitingAbortParams;
    bool  _lock_waitingForTailspin;
    bool  _lock_waitingForWatchdogCompletion;
    <BLSHWatchdogProviderDelegate> * _providerDelegate;
    bool  _watchdogEnabled;
}

@property (getter=isWatchdogEnabled) bool watchdogEnabled;

+ (bool)checkForWatchdogDidFire:(bool)arg1;
+ (bool)ignoreWatchdogAborts;
+ (void)markWatchdogDidFire:(id)arg1 abortReason:(id)arg2;
+ (void)resetWatchdogDidFire;
+ (void)setIgnoreWatchdogAborts:(bool)arg1;
+ (void)showWatchdogDidFireAlert:(id)arg1;

- (void).cxx_destruct;
- (void)_abortForWatchdogFire:(id)arg1;
- (void)_checkForReadyToAbortAfterWaitingPastFire;
- (void)_clearIsWaitingForWatchdogCompletion;
- (void)_fireWatchdogWithTimer:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 elapsedTime:(double)arg4 abortContext:(id)arg5 explanation:(id)arg6 remainingRetries:(unsigned long long)arg7;
- (void)_giveUpWaitingForWatchdogCompletionAbortWhileWaitingPastFire:(id)arg1;
- (void)_startWritingTailspin;
- (void)clearWatchdogWithExplanation:(id)arg1 reason:(unsigned long long)arg2 timeout:(double)arg3 elapsedTime:(double)arg4;
- (void)dealloc;
- (void)didDetectSignificantUserInteraction;
- (void)fireWatchdogWithTimer:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 elapsedTime:(double)arg4;
- (id)initWithDelegate:(id)arg1;
- (bool)isTesting;
- (bool)isWaitingwaitingPastFireForCompletionAndTailspin;
- (bool)isWatchdogEnabled;
- (void)registerHandlersForService:(id)arg1;
- (id)scheduleWatchdogWithDelegate:(id)arg1 explanation:(id)arg2 timeout:(double)arg3;
- (void)setWaitingwaitingPastFireForCompletionAndTailspin:(id)arg1 waitForWatchdogCompletion:(bool)arg2;
- (void)setWatchdogEnabled:(bool)arg1;
- (id)waitingPastFireForCompletionAndTailspinAbortParams;

@end
