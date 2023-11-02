
@interface CKModifyRecordAccessOperation : CKDatabaseOperation <CKModifyRecordAccessOperationCallbacks> {
    NSMutableArray * _grantedRecordIDs;
    id /* block */  _recordAccessCompletionBlock;
    id /* block */  _recordAccessGrantedBlock;
    id /* block */  _recordAccessRevokedBlock;
    NSMutableDictionary * _recordErrors;
    NSArray * _recordIDsToGrant;
    NSArray * _recordIDsToRevoke;
    NSMutableArray * _revokedRecordIDs;
}

@property (nonatomic, readonly) <CKModifyRecordAccessOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableArray *grantedRecordIDs;
@property (nonatomic, readonly) CKModifyRecordAccessOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ recordAccessCompletionBlock;
@property (nonatomic, copy) id /* block */ recordAccessGrantedBlock;
@property (nonatomic, copy) id /* block */ recordAccessRevokedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, retain) NSArray *recordIDsToGrant;
@property (nonatomic, retain) NSArray *recordIDsToRevoke;
@property (nonatomic, retain) NSMutableArray *revokedRecordIDs;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)grantedRecordIDs;
- (void)handleRecordAccessInitiationForRecordID:(id)arg1 accessToken:(id)arg2 referenceIdentifier:(id)arg3 error:(id)arg4;
- (void)handleRecordAccessRevocationForRecordID:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithRecordIDsToGrantAccess:(id)arg1 recordIDsToRevokeAccess:(id)arg2;
- (id /* block */)recordAccessCompletionBlock;
- (id /* block */)recordAccessGrantedBlock;
- (id /* block */)recordAccessRevokedBlock;
- (id)recordErrors;
- (id)recordIDsToGrant;
- (id)recordIDsToRevoke;
- (id)revokedRecordIDs;
- (void)setGrantedRecordIDs:(id)arg1;
- (void)setRecordAccessCompletionBlock:(id /* block */)arg1;
- (void)setRecordAccessGrantedBlock:(id /* block */)arg1;
- (void)setRecordAccessRevokedBlock:(id /* block */)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDsToGrant:(id)arg1;
- (void)setRecordIDsToRevoke:(id)arg1;
- (void)setRevokedRecordIDs:(id)arg1;

@end
