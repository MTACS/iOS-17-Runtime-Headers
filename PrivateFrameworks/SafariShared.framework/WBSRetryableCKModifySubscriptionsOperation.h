
@interface WBSRetryableCKModifySubscriptionsOperation : WBSRetryableCKDatabaseOperation {
    id /* block */  _modifySubscriptionsCompletionBlock;
    id /* block */  _perSubscriptionDeleteBlock;
    id /* block */  _perSubscriptionSaveBlock;
    NSArray * _subscriptionIDsToDelete;
    NSArray * _subscriptionsToSave;
}

@property (nonatomic, copy) id /* block */ modifySubscriptionsCompletionBlock;
@property (nonatomic, copy) id /* block */ perSubscriptionDeleteBlock;
@property (nonatomic, copy) id /* block */ perSubscriptionSaveBlock;
@property (nonatomic, copy) NSArray *subscriptionIDsToDelete;
@property (nonatomic, copy) NSArray *subscriptionsToSave;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)modifySubscriptionsCompletionBlock;
- (id /* block */)perSubscriptionDeleteBlock;
- (id /* block */)perSubscriptionSaveBlock;
- (void)setModifySubscriptionsCompletionBlock:(id /* block */)arg1;
- (void)setPerSubscriptionDeleteBlock:(id /* block */)arg1;
- (void)setPerSubscriptionSaveBlock:(id /* block */)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionIDsToDelete;
- (id)subscriptionsToSave;

@end
