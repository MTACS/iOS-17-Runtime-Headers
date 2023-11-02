
@protocol SBFIdleTimerBehaviorProviding <NSObject>

@required

- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;

@optional

- (double)customIdleExpirationTimeout;
- (double)customIdleWarningTimeout;

@end
