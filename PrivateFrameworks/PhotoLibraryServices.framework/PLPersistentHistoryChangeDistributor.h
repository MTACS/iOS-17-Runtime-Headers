
@interface PLPersistentHistoryChangeDistributor : NSObject {
    PLCoreDataChangeMerger * _changeMerger;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSPersistentHistoryToken * _lastToken;
    PLChangeHandlingNotificationObserver * _notificationObserver;
    unsigned long long  _observerCount;
    NSString * _observerCountLastTokenDescription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerCountLock;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

- (void).cxx_destruct;
- (void)_advanceTokenToCurrent;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)arg1 xpcTransaction:(id)arg2;
- (void)_inq_setLastToken:(id)arg1;
- (void)_inq_startObservingRemoteNotifications;
- (void)beginObservingChanges;
- (void)dealloc;
- (void)distributeNewTransactionsSinceLastToken;
- (void)distributeTransactions:(id)arg1 withXPCTransaction:(id)arg2;
- (void)endObservingChanges;
- (id)fetchTransactionsSinceLastToken;
- (void)forceUserInterfaceReload;
- (void)handleRemoteNotificationOfType:(long long)arg1 withTransaction:(id)arg2;
- (id)initWithPersistentStoreCoordinator:(id)arg1 bundle:(id)arg2 changeMerger:(id)arg3;
- (void)invalidate;
- (id)localEventFromTransactions:(id)arg1;
- (id)makeManagedObjectContext;
- (void)startObservingRemoteNotifications;
- (void)stopObservingRemoteNotifications;

@end
