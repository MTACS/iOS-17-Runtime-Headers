
@interface WBSRetryableCKFetchSubscriptionsOperation : WBSRetryableCKDatabaseOperation {
    id /* block */  _fetchSubscriptionCompletionBlock;
    id /* block */  _perSubscriptionCompletionBlock;
    NSArray * _subscriptionIDs;
}

@property (nonatomic, copy) id /* block */ fetchSubscriptionCompletionBlock;
@property (nonatomic, copy) id /* block */ perSubscriptionCompletionBlock;
@property (nonatomic, copy) NSArray *subscriptionIDs;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)fetchSubscriptionCompletionBlock;
- (id /* block */)perSubscriptionCompletionBlock;
- (void)setFetchSubscriptionCompletionBlock:(id /* block */)arg1;
- (void)setPerSubscriptionCompletionBlock:(id /* block */)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (id)subscriptionIDs;

@end
