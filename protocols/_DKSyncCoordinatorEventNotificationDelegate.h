
@protocol _DKSyncCoordinatorEventNotificationDelegate

@optional

- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didAddRemoteEventsWithStreamNameCounts:(NSCountedSet *)arg2 events:(NSArray *)arg3;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didApplyRemoteAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didApplyRemoteDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didCreateAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didCreateDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)syncCoordinator:(id <_DKSyncCoordinator>)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;

@end
