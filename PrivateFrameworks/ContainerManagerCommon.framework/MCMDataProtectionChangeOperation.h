
@interface MCMDataProtectionChangeOperation : NSObject {
    int  _changeType;
    id /* block */  _completionBlock;
    <MCMMetadata> * _dataContainerMetadata;
    NSUUID * _internalChangeID;
    int  _newDataProtectionClass;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _retried;
    bool  _retryIfLocked;
    id /* block */  _retryStartBlock;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic) int changeType;
@property (copy) id /* block */ completionBlock;
@property (nonatomic, retain) <MCMMetadata> *dataContainerMetadata;
@property (nonatomic, retain) NSUUID *internalChangeID;
@property (nonatomic) int newDataProtectionClass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool retried;
@property (nonatomic) bool retryIfLocked;
@property (copy) id /* block */ retryStartBlock;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

+ (id)_readAndValidateDataProtectionUpdateAtURL:(id)arg1 userIdentityCache:(id)arg2 error:(id*)arg3;
+ (id)dataProtectionChangeOperationAtURL:(id)arg1 queue:(id)arg2 error:(id*)arg3;
+ (id)dataProtectionChangeOperationWithContainerMetadata:(id)arg1 settingClass:(int)arg2 retryingIfLocked:(bool)arg3 changeType:(int)arg4 queue:(id)arg5;
+ (bool)deleteUpdateFileWithContainerIdentity:(id)arg1 error:(id*)arg2;
+ (id)urlForProtectionOperationWithContainerIdentity:(id)arg1;

- (void).cxx_destruct;
- (bool)_deleteUpdateFileWithError:(id*)arg1;
- (bool)_onQueue_deleteUpdateFileWithError:(id*)arg1;
- (bool)_onQueue_stillMostCurrentUpdate;
- (bool)_onQueue_writeToDiskWithError:(id*)arg1;
- (bool)_runChangeOperationNeedToRetry:(bool*)arg1 withError:(id*)arg2;
- (bool)_stillMostCurrentUpdate;
- (int)changeType;
- (id /* block */)completionBlock;
- (id)dataContainerMetadata;
- (id)initWithContainerMetadata:(id)arg1 newClass:(int)arg2 retryingIfLocked:(bool)arg3 changeType:(int)arg4 internalChangeID:(id)arg5 queue:(id)arg6 userIdentityCache:(id)arg7;
- (id)initWithContainerMetadata:(id)arg1 newClass:(int)arg2 retryingIfLocked:(bool)arg3 changeType:(int)arg4 queue:(id)arg5 userIdentityCache:(id)arg6;
- (id)internalChangeID;
- (int)newDataProtectionClass;
- (void)performChangeOperation;
- (id)queue;
- (bool)retried;
- (bool)retryIfLocked;
- (id /* block */)retryStartBlock;
- (void)setChangeType:(int)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDataContainerMetadata:(id)arg1;
- (void)setInternalChangeID:(id)arg1;
- (void)setNewDataProtectionClass:(int)arg1;
- (void)setRetried:(bool)arg1;
- (void)setRetryIfLocked:(bool)arg1;
- (void)setRetryStartBlock:(id /* block */)arg1;
- (id)userIdentityCache;
- (bool)writeToDiskWithError:(id*)arg1;

@end
