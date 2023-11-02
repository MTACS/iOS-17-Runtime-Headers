
@protocol MFDASyncActionsConsumer <MFRequestQueueResponseConsumer>

@required

- (void)commitSyncActions;
- (void)drainMailbox;
- (void)receiveSyncActions:(NSArray *)arg1;

@end
