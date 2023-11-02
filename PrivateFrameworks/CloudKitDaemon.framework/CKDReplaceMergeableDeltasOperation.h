
@interface CKDReplaceMergeableDeltasOperation : CKDDatabaseOperation {
    id /* block */  _perReplacementCompletionBlock;
    NSArray * _replaceDeltasRequests;
}

@property (nonatomic, retain) <CKReplaceMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ perReplacementCompletionBlock;
@property (nonatomic, retain) NSArray *replaceDeltasRequests;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_encryptMergeableDeltas;
- (void)_replaceMergeableDeltas;
- (id)activityCreate;
- (void)handleReplaceDeltasRequest:(id)arg1 result:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (id /* block */)perReplacementCompletionBlock;
- (id)replaceDeltasRequests;
- (void)setPerReplacementCompletionBlock:(id /* block */)arg1;
- (void)setReplaceDeltasRequests:(id)arg1;

@end
