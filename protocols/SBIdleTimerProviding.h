
@protocol SBIdleTimerProviding <NSObject>

@required

- (<SBFIdleTimerBehaviorProviding> *)coordinatorRequestedIdleTimerBehavior:(id <SBIdleTimerCoordinating>)arg1;

@end
