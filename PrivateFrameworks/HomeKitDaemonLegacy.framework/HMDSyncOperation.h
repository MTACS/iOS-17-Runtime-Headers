
@interface HMDSyncOperation : HMFObject {
    HMFTimer * _delayTimer;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _operationBlock;
    NSMutableArray * _operationCompletions;
    HMDSyncOperationOptions * _options;
}

@property (nonatomic, retain) HMFTimer *delayTimer;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ operationBlock;
@property (readonly) NSArray *operationCompletions;
@property (nonatomic, readonly) unsigned long long operationType;
@property (nonatomic, readonly) HMDSyncOperationOptions *options;
@property (nonatomic, readonly) NSString *zoneName;

+ (id)cancelOperationWithBlock:(id /* block */)arg1;
+ (id)cloudFetchSyncOperationWithCloudConflict:(bool)arg1 block:(id /* block */)arg2;
+ (id)cloudForcePushSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudOperation:(id)arg1 withBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)cloudPushSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(bool)arg2 block:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(id /* block */)arg2;
+ (id)postFetchOperationWithBlock:(id /* block */)arg1;
+ (id)queryDatabaseOperationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_initWithOptions:(id)arg1 syncBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)delayTimer;
- (id)description;
- (id)identifier;
- (id /* block */)operationBlock;
- (id)operationCompletions;
- (unsigned long long)operationType;
- (id)options;
- (void)removeAllOperationCompletions;
- (void)setDelayTimer:(id)arg1;
- (void)setOperationBlock:(id /* block */)arg1;
- (void)updateOperationCompletionsWithArray:(id)arg1;
- (id)zoneName;

@end
