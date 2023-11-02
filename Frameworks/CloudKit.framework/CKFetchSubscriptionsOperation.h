
@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks> {
    id /* block */  _fetchSubscriptionCompletionBlock;
    id /* block */  _fetchSubscriptionCompletionBlock_wrapper;
    bool  _isFetchAllSubscriptionsOperation;
    id /* block */  _perSubscriptionCompletionBlock;
    id /* block */  _perSubscriptionCompletionBlock_wrapper;
    NSMutableDictionary * _subscriptionErrors;
    NSArray * _subscriptionIDs;
    NSArray * _subscriptions;
    NSMutableDictionary * _subscriptionsBySubscriptionID;
}

@property (nonatomic, readonly) <CKFetchSubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ fetchSubscriptionCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchSubscriptionCompletionBlock_wrapper;
@property (nonatomic) bool isFetchAllSubscriptionsOperation;
@property (nonatomic, readonly) CKFetchSubscriptionsOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perSubscriptionCompletionBlock;
@property (nonatomic, copy) id /* block */ perSubscriptionCompletionBlock_wrapper;
@property (nonatomic, copy) NSArray *subscriptionIDs;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;
+ (id)fetchAllSubscriptionsOperation;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)fetchSubscriptionCompletionBlock;
- (id /* block */)fetchSubscriptionCompletionBlock_wrapper;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleSubscriptionFetchForSubscriptionID:(id)arg1 subscription:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithSubscriptionIDs:(id)arg1;
- (bool)isFetchAllSubscriptionsOperation;
- (id /* block */)perSubscriptionCompletionBlock;
- (id /* block */)perSubscriptionCompletionBlock_wrapper;
- (void)setFetchSubscriptionCompletionBlock:(id /* block */)arg1;
- (void)setFetchSubscriptionCompletionBlockIVar:(id /* block */)arg1;
- (void)setFetchSubscriptionCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)setPerSubscriptionCompletionBlock:(id /* block */)arg1;
- (void)setPerSubscriptionCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (id)subscriptionIDs;

@end
