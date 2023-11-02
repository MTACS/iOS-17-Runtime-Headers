
@interface CKDUploadMergeableDeltasOperation : CKDDatabaseOperation {
    NSArray * _deltas;
    NSMutableArray * _pendingDeltaUploads;
    NSMutableArray * _pendingReplacementRequests;
    id /* block */  _replaceDeltasRequestCompletionBlock;
    NSArray * _replacementRequests;
    id /* block */  _uploadDeltaCompletionBlock;
}

@property (nonatomic, retain) <CKUploadMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSArray *deltas;
@property (nonatomic, retain) NSMutableArray *pendingDeltaUploads;
@property (nonatomic, retain) NSMutableArray *pendingReplacementRequests;
@property (nonatomic, copy) id /* block */ replaceDeltasRequestCompletionBlock;
@property (nonatomic, copy) NSArray *replacementRequests;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) id /* block */ uploadDeltaCompletionBlock;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_encryptMergeableDeltas;
- (void)_uploadAndReplaceDeltas;
- (void)_uploadAndReplaceDeltas:(id /* block */)arg1;
- (id)activityCreate;
- (id)deltas;
- (void)handleDeltaUploaded:(id)arg1 result:(id)arg2;
- (void)handleReplaceDeltasRequest:(id)arg1 result:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (id)pendingDeltaUploads;
- (id)pendingReplacementRequests;
- (id /* block */)replaceDeltasRequestCompletionBlock;
- (id)replacementRequests;
- (void)setDeltas:(id)arg1;
- (void)setPendingDeltaUploads:(id)arg1;
- (void)setPendingReplacementRequests:(id)arg1;
- (void)setReplaceDeltasRequestCompletionBlock:(id /* block */)arg1;
- (void)setReplacementRequests:(id)arg1;
- (void)setUploadDeltaCompletionBlock:(id /* block */)arg1;
- (id /* block */)uploadDeltaCompletionBlock;

@end
