
@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving> {
    <SBIdleTimer> * _sourceTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIdleTimer> *sourceTimer;
@property (readonly) Class superclass;

+ (id)disabledIdleTimerProxy;

- (void).cxx_destruct;
- (void)_logExpirationTimeout:(double)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidResetForUserAttention:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (id)initWithIdleTimerSource:(id)arg1;
- (bool)isActivated;
- (bool)isDisabled;
- (void)reset;
- (void)setActivated:(bool)arg1;
- (void)setSourceTimer:(id)arg1;
- (id)sourceTimer;

@end
