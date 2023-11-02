
@interface CKModifySubscriptionsOperation : CKDatabaseOperation <CKModifySubscriptionsOperationCallbacks> {
    NSMutableArray * _deletedSubscriptionIDs;
    id /* block */  _modifySubscriptionsCompletionBlock;
    id /* block */  _modifySubscriptionsCompletionBlock_wrapper;
    id /* block */  _perSubscriptionDeleteBlock;
    id /* block */  _perSubscriptionDeleteBlock_wrapper;
    id /* block */  _perSubscriptionSaveBlock;
    id /* block */  _perSubscriptionSaveBlock_wrapper;
    NSMutableArray * _savedSubscriptions;
    NSMutableDictionary * _subscriptionErrors;
    NSArray * _subscriptionIDsToDelete;
    NSMutableDictionary * _subscriptionsBySubscriptionIDs;
    NSArray * _subscriptionsToSave;
}

@property (nonatomic, readonly) <CKModifySubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ modifySubscriptionsCompletionBlock;
@property (nonatomic, copy) id /* block */ modifySubscriptionsCompletionBlock_wrapper;
@property (nonatomic, readonly) CKModifySubscriptionsOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perSubscriptionDeleteBlock;
@property (nonatomic, copy) id /* block */ perSubscriptionDeleteBlock_wrapper;
@property (nonatomic, copy) id /* block */ perSubscriptionSaveBlock;
@property (nonatomic, copy) id /* block */ perSubscriptionSaveBlock_wrapper;
@property (nonatomic, copy) NSArray *subscriptionIDsToDelete;
@property (nonatomic, copy) NSArray *subscriptionsToSave;

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
- (void)handleSubscriptionDeleteForSubscriptionID:(id)arg1 error:(id)arg2;
- (void)handleSubscriptionSaveForSubscriptionID:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (id /* block */)modifySubscriptionsCompletionBlock;
- (id /* block */)modifySubscriptionsCompletionBlock_wrapper;
- (id /* block */)perSubscriptionDeleteBlock;
- (id /* block */)perSubscriptionDeleteBlock_wrapper;
- (id /* block */)perSubscriptionSaveBlock;
- (id /* block */)perSubscriptionSaveBlock_wrapper;
- (void)setModifySubscriptionsCompletionBlock:(id /* block */)arg1;
- (void)setModifySubscriptionsCompletionBlockIVar:(id /* block */)arg1;
- (void)setModifySubscriptionsCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setPerSubscriptionDeleteBlock:(id /* block */)arg1;
- (void)setPerSubscriptionDeleteBlock_wrapper:(id /* block */)arg1;
- (void)setPerSubscriptionSaveBlock:(id /* block */)arg1;
- (void)setPerSubscriptionSaveBlock_wrapper:(id /* block */)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionIDsToDelete;
- (id)subscriptionsToSave;

@end
