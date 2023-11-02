
@interface SBDashBoardIdleTimerProvider : NSObject <BSDescriptionProviding, SBIdleTimerObserving> {
    <SBDashBoardIdleTimerProviderDelegate> * _delegate;
    NSMutableSet * _disabledIdleTimerAssertions;
    <SBIdleTimer> * _idleTimer;
    <SBFIdleTimerBehaviorProviding> * _idleTimerProvider;
    <BSInvalidatable> * _stateCaptureAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDashBoardIdleTimerProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIdleTimer> *idleTimer;
@property (getter=isIdleTimerEnabled, nonatomic, readonly) bool idleTimerEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg1;
- (void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg1;
- (void)_proposeIdleTimerBehavior:(id)arg1 forReason:(id)arg2;
- (void)addDisabledIdleTimerAssertionReason:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)effectiveIdleTimerBehavior;
- (id)idleTimer;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isDisabledAssertionActiveForReason:(id)arg1;
- (bool)isIdleTimerEnabled;
- (void)removeDisabledIdleTimerAssertionReason:(id)arg1;
- (void)resetIdleTimer;
- (void)setDelegate:(id)arg1;
- (void)setIdleTimer:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2;

@end
