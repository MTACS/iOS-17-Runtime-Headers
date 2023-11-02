
@interface WBSRetryableCKOperation : NSOperation <WBSDeallocationSentinelObserver> {
    NSMutableArray * _childOperationIDs;
    CKOperationConfiguration * _configuration;
    CKOperation * _currentOperation;
    id /* block */  _didExceedRetryTimeout;
    id /* block */  _didReceiveNonRetryableError;
    NSMutableSet * _explicitlySetProperties;
    CKOperationGroup * _group;
    NSObject<OS_dispatch_queue> * _handlingQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSObject<OS_os_log> * _log;
    id /* block */  _longLivedOperationWasPersistedBlock;
    NSString * _operationID;
    NSOperationQueue * _operationQueue;
    id  _owner;
    id /* block */  _ownerDidDeallocateBlock;
    WBSCloudKitOperationRetryManager * _retryManager;
    long long  _status;
}

@property (nonatomic, copy) CKOperationConfiguration *configuration;
@property (nonatomic, readonly) CKOperation *currentOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didExceedRetryTimeout;
@property (nonatomic, copy) id /* block */ didReceiveNonRetryableError;
@property (getter=isExecuting, readonly) bool executing;
@property (getter=isFinished, readonly) bool finished;
@property (nonatomic, retain) CKOperationGroup *group;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handlingQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, copy) id /* block */ longLivedOperationWasPersistedBlock;
@property (nonatomic, readonly) unsigned long long numberOfRetries;
@property (nonatomic, readonly, copy) NSString *operationID;
@property (nonatomic, readonly) id owner;
@property (nonatomic, copy) id /* block */ ownerDidDeallocateBlock;
@property (getter=_status, setter=_setStatus:, nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_didFinishOperation;
- (id)_makeOperation;
- (void)_scheduleNextOperation;
- (bool)_scheduleRetryIfNeededForError:(id)arg1;
- (const void*)_sentinelAssociatedObjectKey;
- (void)_setStatus:(long long)arg1;
- (void)_setUpOperation:(id)arg1;
- (long long)_status;
- (void)cancel;
- (id)configuration;
- (id)currentOperation;
- (void)dealloc;
- (id)description;
- (id /* block */)didExceedRetryTimeout;
- (id /* block */)didReceiveNonRetryableError;
- (id)group;
- (id)handlingQueue;
- (id)initWithOwner:(id)arg1 handlingQueue:(id)arg2;
- (bool)isExecuting;
- (bool)isFinished;
- (id)log;
- (id /* block */)longLivedOperationWasPersistedBlock;
- (unsigned long long)numberOfRetries;
- (id)operationID;
- (id)owner;
- (id /* block */)ownerDidDeallocateBlock;
- (long long)qualityOfService;
- (void)sentinelDidDeallocateWithContext:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDidExceedRetryTimeout:(id /* block */)arg1;
- (void)setDidReceiveNonRetryableError:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setLongLivedOperationWasPersistedBlock:(id /* block */)arg1;
- (void)setOwnerDidDeallocateBlock:(id /* block */)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (void)start;
- (double)timeout;

@end
