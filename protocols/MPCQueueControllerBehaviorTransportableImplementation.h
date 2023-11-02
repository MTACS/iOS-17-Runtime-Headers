
@protocol MPCQueueControllerBehaviorTransportableImplementation <MPCQueueControllerBehaviorImplementation>

@required

+ (<MPCQueueControllerBehaviorTransportableExtension> *)makeExtensionWithInvalidatable:(id <MPCQueueControllerSessionTypesInvalidatable>)arg1;

- (bool)isExportableSessionType:(NSString *)arg1 forContentItemID:(NSString *)arg2 extension:(id <MPCQueueControllerBehaviorTransportableExtension>)arg3 reason:(id*)arg4;

@end
