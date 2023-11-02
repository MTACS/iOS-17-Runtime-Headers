
@interface CKDModifySubscriptionsURLRequest : CKDURLRequest {
    NSMutableDictionary * _subscriptionIDByRequestID;
    NSArray * _subscriptionIDsToDelete;
    id /* block */  _subscriptionModifiedBlock;
    NSArray * _subscriptionsToSave;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSMutableDictionary *subscriptionIDByRequestID;
@property (nonatomic, retain) NSArray *subscriptionIDsToDelete;
@property (nonatomic, copy) id /* block */ subscriptionModifiedBlock;
@property (nonatomic, retain) NSArray *subscriptionsToSave;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToDelete:(id)arg3;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresCKAnonymousUserIDs;
- (void)setSubscriptionIDByRequestID:(id)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionModifiedBlock:(id /* block */)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)subscriptionIDByRequestID;
- (id)subscriptionIDsToDelete;
- (id /* block */)subscriptionModifiedBlock;
- (id)subscriptionsToSave;
- (id)zoneID;

@end
