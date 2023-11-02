
@interface SBBacklightIdleTimer : SBIdleTimerBase <BSDescriptionProviding, ITIdleTimerDelegate> {
    ITAttentionAwareIdleTimer * _attentionAwareTimer;
    SBIdleTimerDescriptor * _descriptor;
    unsigned long long  _expectation;
    bool  _requiresManualReset;
    double  _timeMultiplier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) SBIdleTimerDescriptor *descriptor;
@property (nonatomic) unsigned long long expectation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requiresManualReset;
@property (readonly) Class superclass;
@property (nonatomic) double timeMultiplier;

- (void).cxx_destruct;
- (double)_effectiveExpireTimeoutDuration;
- (double)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(double)arg1;
- (double)_effectiveTimeoutForBaseTimeout:(double)arg1;
- (double)_effectiveWarnTimeoutDuration;
- (id)_initWithAttentionAwareTimer:(id)arg1;
- (void)_reconfigureAttentionClientAndReset:(bool)arg1;
- (void)_resetExpectation;
- (void)_stopIfManual;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptor;
- (unsigned long long)expectation;
- (void)idleTimer:(id)arg1 attentionLostTimeoutDidExpire:(id)arg2;
- (void)idleTimerDidReset:(id)arg1 forUserAttention:(unsigned long long)arg2 at:(double)arg3;
- (id)init;
- (id)initWithConfigurationIdentifier:(id)arg1;
- (bool)isActivated;
- (bool)isDisabled;
- (bool)requiresManualReset;
- (void)reset;
- (void)setActivated:(bool)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setExpectation:(unsigned long long)arg1;
- (void)setRequiresManualReset:(bool)arg1;
- (void)setTimeMultiplier:(double)arg1;
- (id)stateCaptureDescriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)timeMultiplier;

@end
