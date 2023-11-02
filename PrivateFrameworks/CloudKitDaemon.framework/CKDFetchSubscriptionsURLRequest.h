
@interface CKDFetchSubscriptionsURLRequest : CKDURLRequest {
    id /* block */  _errorFetchingAllSubscriptionsBlock;
    id /* block */  _subscriptionFetchedBlock;
    NSMutableDictionary * _subscriptionIDByRequestID;
    NSArray * _subscriptionIDs;
    NSMutableArray * _subscriptions;
}

@property (nonatomic, copy) id /* block */ errorFetchingAllSubscriptionsBlock;
@property (nonatomic, copy) id /* block */ subscriptionFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *subscriptionIDByRequestID;
@property (nonatomic, retain) NSArray *subscriptionIDs;
@property (nonatomic, retain) NSMutableArray *subscriptions;

- (void).cxx_destruct;
- (id /* block */)errorFetchingAllSubscriptionsBlock;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 subscriptionIDs:(id)arg2;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setErrorFetchingAllSubscriptionsBlock:(id /* block */)arg1;
- (void)setSubscriptionFetchedBlock:(id /* block */)arg1;
- (void)setSubscriptionIDByRequestID:(id)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id /* block */)subscriptionFetchedBlock;
- (id)subscriptionIDByRequestID;
- (id)subscriptionIDs;
- (id)subscriptions;

@end
