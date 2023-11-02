
@interface CKFetchRecordVersionsOperation : CKDatabaseOperation <CKFetchRecordVersionsOperationCallbacks> {
    NSArray * _desiredKeys;
    id /* block */  _fetchRecordVersionsCompletionBlock;
    id /* block */  _fetchRecordVersionsProgressBlock;
    bool  _isDeleted;
    NSString * _minimumVersionETag;
    NSMutableDictionary * _recordErrors;
    NSArray * _recordIDs;
    bool  _shouldFetchAssetContent;
}

@property (nonatomic, readonly) <CKFetchRecordVersionsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchRecordVersionsCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchRecordVersionsProgressBlock;
@property (nonatomic) bool isDeleted;
@property (nonatomic, copy) NSString *minimumVersionETag;
@property (nonatomic, readonly) CKFetchRecordVersionsOperationInfo *operationInfo;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic) bool shouldFetchAssetContent;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)desiredKeys;
- (id /* block */)fetchRecordVersionsCompletionBlock;
- (id /* block */)fetchRecordVersionsProgressBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleFetchForRecordID:(id)arg1 isDeleted:(bool)arg2 versions:(id)arg3 error:(id)arg4;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordIDs:(id)arg1;
- (bool)isDeleted;
- (id)minimumVersionETag;
- (id)recordErrors;
- (id)recordIDs;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchRecordVersionsCompletionBlock:(id /* block */)arg1;
- (void)setFetchRecordVersionsProgressBlock:(id /* block */)arg1;
- (void)setIsDeleted:(bool)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (bool)shouldFetchAssetContent;

@end
