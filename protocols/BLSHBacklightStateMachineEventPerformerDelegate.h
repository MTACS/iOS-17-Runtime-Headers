
@protocol BLSHBacklightStateMachineEventPerformerDelegate <NSObject>

@required

- (void)eventPerformer:(id <BLSHBacklightStateMachineEventPerforming>)arg1 didUpdateDisplayStateForState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (void)eventPerformer:(id <BLSHBacklightStateMachineEventPerforming>)arg1 didUpdateVisualContentsToBeginTransitionToState:(long long)arg2 forEvents:(NSArray *)arg3 abortedEvents:(NSArray *)arg4;
- (bool)isAlwaysOnSuppressed;

@end
