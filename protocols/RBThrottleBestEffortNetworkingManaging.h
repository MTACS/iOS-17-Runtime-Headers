
@protocol RBThrottleBestEffortNetworkingManaging <NSObject>

@required

- (void)addProcess:(RBProcess *)arg1;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1;
- (bool)isThrottleBestEffortNetworkingEnabled;
- (void)removeProcess:(RBProcess *)arg1;

@end
