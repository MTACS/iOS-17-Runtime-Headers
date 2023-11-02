
@interface SBIdleTimerBehavior : NSObject <BSDescriptionProviding, BSDescriptionStreamable, SBFIdleTimerBehaviorProviding> {
    double  _customIdleExpirationTimeout;
    double  _customIdleWarningTimeout;
    long long  _idleTimerDuration;
    long long  _idleTimerMode;
    long long  _idleWarnMode;
}

@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (readonly) Class superclass;

+ (id)autoLockBehavior;
+ (id)behaviorForBehaviorProvider:(id)arg1;
+ (id)behaviorWithDuration:(long long)arg1 mode:(long long)arg2 warnMode:(long long)arg3;
+ (id)defaultBehavior;
+ (id)disabledBehavior;
+ (id)lockScreenBehavior;

- (void)_appendInnerDescriptionToFormatter:(id)arg1;
- (id)_initWithBehaviorProvider:(id)arg1;
- (id)_initWithDuration:(long long)arg1 mode:(long long)arg2 warnMode:(long long)arg3;
- (void)appendDescriptionToFormatter:(id)arg1;
- (double)customIdleExpirationTimeout;
- (double)customIdleWarningTimeout;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
