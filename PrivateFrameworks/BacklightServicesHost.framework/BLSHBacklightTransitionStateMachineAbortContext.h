
@interface BLSHBacklightTransitionStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext> {
    unsigned long long  _abortReason;
    NSArray * _abortedEvents;
    BLSHBacklightAggregateState * _currentState;
    BLSHEnsureFlipbookCurrentOperation * _ensureFlipbookCurrentOperation;
    BLSHBacklightEnvironmentStateMachine * _environmentStateMachine;
    const void * _payload;
    unsigned int  _payloadSize;
    BLSHPendingEnvironmentUpdateOperation * _pendingEnvironmentUpdate;
    BLSBacklightChangeEvent * _pendingPrewarmedEvent;
    BLSHPendingUpdateDisplayMode * _pendingUpdateDisplayMode;
    BLSHPendingUpdatePresentation * _pendingUpdatePresentation;
    BLSHPendingUpdateToSpecifier * _pendingUpdateToSpecifier;
    NSArray * _performingEvents;
    NSArray * _queuedEventsToPerform;
    bool  _sleepImminent;
    bool  _sleepRequested;
    BLSHBacklightMutableTargetState * _targetState;
    double  _timeInSleepImminent;
}

@property (nonatomic, readonly) unsigned long long abortReason;
@property (nonatomic, readonly, copy) NSString *abortReasonString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEnsureFlipbookCurrent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const void*payload;
@property (nonatomic, readonly) unsigned int payloadSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsPanic;
@property (nonatomic, readonly) bool wantsWaitPastFireForCompletionAndTailspin;

+ (unsigned int)backlightChangeRequestExplanationIdentifierFromString:(id)arg1;

- (void).cxx_destruct;
- (void)_populatePayload;
- (unsigned long long)abortReason;
- (id)abortReasonString;
- (void)dealloc;
- (id)description;
- (bool)hasEnsureFlipbookCurrent;
- (id)initWithCurrentState:(id)arg1 targetState:(id)arg2 performingEvents:(id)arg3 abortedEvents:(id)arg4 pendingEnvironmentUpdate:(id)arg5 pendingUpdatePresentation:(id)arg6 pendingUpdateToSpecifier:(id)arg7 pendingUpdateDisplayMode:(id)arg8 ensureFlipbookCurrentOperation:(id)arg9 queuedEventsToPerform:(id)arg10 pendingPrewarmedEvent:(id)arg11 environmentStateMachine:(id)arg12 sleepRequested:(bool)arg13 sleepImminent:(bool)arg14 timeInSleepImminent:(double)arg15;
- (const void*)payload;
- (unsigned int)payloadSize;
- (void)setSleepImminentAbortReason;
- (bool)wantsPanic;

@end
