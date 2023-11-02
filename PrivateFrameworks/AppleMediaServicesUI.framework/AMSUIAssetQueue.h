
@interface AMSUIAssetQueue : NSObject {
    NSMutableDictionary * _pendingOperations;
    NSCountedSet * _priorityCounts;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    NSOperationQueue * _underlyingQueue;
}

@property (nonatomic) long long maxConcurrentOperationCount;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableDictionary *pendingOperations;
@property (nonatomic, retain) NSCountedSet *priorityCounts;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } stateLock;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, retain) NSOperationQueue *underlyingQueue;

- (void).cxx_destruct;
- (void)_addObserverForOperation:(id)arg1;
- (void)_decrementCountAt:(long long)arg1;
- (void)_didBeginFetchingAssets;
- (void)_didFetchAllAssetsAtPriority:(long long)arg1;
- (void)_didFetchAssetWithKey:(id)arg1 producingImage:(id)arg2 orError:(id)arg3;
- (void)_didFinishFetchingAllAssets;
- (void)_incrementCountAt:(long long)arg1;
- (void)_operationDidCancel:(id)arg1;
- (void)_operationDidChangePriority:(id)arg1;
- (void)_prepareToAddOperation:(id)arg1 withKey:(id)arg2;
- (void)_removeObserverForOperation:(id)arg1;
- (void)addOperation:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)isSuspended;
- (long long)maxConcurrentOperationCount;
- (id)name;
- (id)operationWithKey:(id)arg1;
- (id)pendingOperations;
- (id)priorityCounts;
- (long long)qualityOfService;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPendingOperations:(id)arg1;
- (void)setPriorityCounts:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setStateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSuspended:(bool)arg1;
- (void)setUnderlyingQueue:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })stateLock;
- (id)underlyingQueue;

@end
