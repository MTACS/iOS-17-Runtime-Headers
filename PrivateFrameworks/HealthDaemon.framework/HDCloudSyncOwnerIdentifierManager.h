
@interface HDCloudSyncOwnerIdentifierManager : NSObject {
    HDCloudSyncManager * _cloudSyncManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_cachedOwnerIdentifiersByContainerIdentifier;
    NSMutableDictionary * _lock_containersByIdentifier;
    NSMutableDictionary * _lock_deviceIDsByContainerIdentifier;
    long long  _lock_fetchEpoch;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

- (void).cxx_destruct;
- (void)cacheOwnerIdentifiersForContainers:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedOwnerIdentifierForContainer:(id)arg1;
- (void)discardCachedIdentifiers;
- (void)fetchOwnerIdentifierForContainer:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCloudSyncManager:(id)arg1;
- (void)rollOwnerDifferentiatorAfterCloudSyncDisableWithCompletion:(id /* block */)arg1;
- (void)rollOwnerDifferentiatorForReason:(id)arg1 completion:(id /* block */)arg2;

@end
