
@interface ASPeriodicUpdateManager : NSObject <ASActivitySharingManagerReadyObserver, ASCloudKitManagerChangesObserver> {
    ASCloudKitManager * _cloudKitManager;
    ASFriendListManager * _friendListManager;
    bool  _hasQueuedPush;
    bool  _hasRegisteredForUpdates;
    bool  _isPushInProgress;
    bool  _isWatch;
    NSObject<OS_dispatch_queue> * _providerQueue;
    NSHashTable * _providers;
    ASRelationshipManager * _relationshipManager;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRegisteredForUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadyToProcessChanges;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_performUpdateForActivity:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)activitySharingManagerReady:(id)arg1;
- (void)addProvider:(id)arg1;
- (void)beginPeriodicUpdates;
- (void)cloudKitManager:(id)arg1 didUpdateAccountStatus:(long long)arg2;
- (void)endPeriodicUpdates;
- (bool)hasRegisteredForUpdates;
- (id)init;
- (id)initWithIsWatch:(bool)arg1;
- (bool)isReadyToProcessChanges;
- (void)removeProvider:(id)arg1;
- (void)requestImmediateUpdateWithCompletion:(id /* block */)arg1;

@end
