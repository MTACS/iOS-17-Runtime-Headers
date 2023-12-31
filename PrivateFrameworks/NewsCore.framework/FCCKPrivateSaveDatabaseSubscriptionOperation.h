
@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation {
    CKNotificationInfo * _notificationInfo;
    id /* block */  _saveDatabaseSubscriptionCompletionBlock;
    NSString * _subscriptionID;
}

@property (nonatomic, copy) CKNotificationInfo *notificationInfo;
@property (nonatomic, copy) id /* block */ saveDatabaseSubscriptionCompletionBlock;
@property (nonatomic, copy) NSString *subscriptionID;

- (void).cxx_destruct;
- (id)notificationInfo;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)saveDatabaseSubscriptionCompletionBlock;
- (void)setNotificationInfo:(id)arg1;
- (void)setSaveDatabaseSubscriptionCompletionBlock:(id /* block */)arg1;
- (void)setSubscriptionID:(id)arg1;
- (id)subscriptionID;
- (bool)validateOperation;

@end
