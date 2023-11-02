
@interface SBIdleBehavior : NSObject <SBFIdleTimerBehaviorProviding> {
    long long  _duration;
    long long  _warnMode;
}

@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long warnMode;

- (long long)duration;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)initWithDuration:(long long)arg1 warnMode:(long long)arg2;
- (long long)warnMode;

@end
