
@protocol MPCQueueControllerBehaviorTransportableExtension <NSObject>

@required

- (NSArray *)allKnownSessionTypes;
- (bool)isSupportedSessionType:(NSString *)arg1 reason:(id*)arg2;
- (<MPCQueueControllerSessionTypesInvalidatable> *)sessionTypesInvalidatable;

@end
