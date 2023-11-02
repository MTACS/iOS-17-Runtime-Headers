
@interface PLChangeHandlingContainer : NSObject {
    PLCoreDataChangeMerger * _changeMerger;
    PLChangeNode * _changeNode;
    <PLChangePublisher> * _changePublisher;
    NSURL * _libraryURL;
    PLPersistentHistoryChangeDistributor * _persistentHistoryChangeDistributor;
}

@property (nonatomic, readonly, copy) NSDictionary *allDidSaveObjectIDsUserInfo;
@property (nonatomic, readonly) bool isMergingCoalescedSaveNotification;
@property (readonly, copy) NSURL *libraryURL;

- (void).cxx_destruct;
- (id)allDidSaveObjectIDsUserInfo;
- (void)beginObservingChanges;
- (void)connectManagedObjectContext:(id)arg1;
- (void)dealloc;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)distributeChangesSinceLastCheckpoint;
- (void)endObservingChanges;
- (void)handleUnknownMergeEvent;
- (id)initWithLibraryBundle:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 persistentStoreCoordinator:(id)arg4;
- (bool)isMergingCoalescedSaveNotification;
- (id)libraryURL;
- (void)pauseLaunchEventNotifications;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(id /* block */)arg3;
- (void)registerToReceiveCoreDataChanges:(id)arg1;
- (void)start;
- (void)stop;
- (void)unpauseLaunchEventNotifications;

@end
