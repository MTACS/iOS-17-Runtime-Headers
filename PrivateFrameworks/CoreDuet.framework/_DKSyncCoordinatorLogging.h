
@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
- (void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;

@end
