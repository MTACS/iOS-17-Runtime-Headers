
@protocol FlowScheduledRefreshDelegate <NSObject>

@optional

- (void)didPollFlowsAt:(double)arg1 periodic:(bool)arg2;
- (int)didPollFlowsCallbackOrder;
- (void)willPollFlows;

@end
