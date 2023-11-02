
@protocol SBIdleTimerCoordinating <NSObject>

@required

- (<SBIdleTimer> *)idleTimerProvider:(id <SBIdleTimerProviding>)arg1 didProposeBehavior:(id <SBFIdleTimerBehaviorProviding>)arg2 forReason:(NSString *)arg3;

@end
