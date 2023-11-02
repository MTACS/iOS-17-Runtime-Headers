
@protocol _GKStateMachineDelegate <NSObject>

@optional

- (NSString *)missingTransitionFromState:(NSString *)arg1 toState:(NSString *)arg2;
- (void)stateDidChange;
- (void)stateWillChange;

@end
