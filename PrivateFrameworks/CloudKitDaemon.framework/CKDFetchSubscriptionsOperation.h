
@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {
    bool  _isFetchAllSubscriptionsOperation;
    id /* block */  _subscriptionFetchedProgressBlock;
    NSArray * _subscriptionIDs;
}

@property (nonatomic, retain) <CKFetchSubscriptionsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) bool isFetchAllSubscriptionsOperation;
@property (nonatomic, copy) id /* block */ subscriptionFetchedProgressBlock;
@property (nonatomic, retain) NSArray *subscriptionIDs;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (bool)isFetchAllSubscriptionsOperation;
- (void)main;
- (int)operationType;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)setSubscriptionFetchedProgressBlock:(id /* block */)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (id /* block */)subscriptionFetchedProgressBlock;
- (id)subscriptionIDs;

@end
