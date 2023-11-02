
@protocol MPCQueueControllerBehaviorExternalSyncImplementation <MPCQueueControllerBehaviorImplementation>

@required

- (void)connectToExternalSyncHost:(id <MPCQueueControllerExternalSyncBehaviorHost>)arg1;
- (void)didJumpToTargetContentItemID:(NSString *)arg1;
- (void)disconnectFromExternalSyncHost:(id <MPCQueueControllerExternalSyncBehaviorHost>)arg1;
- (<MPCQueueControllerExternalSyncBehaviorHost> *)externalSyncHost;

@end
