
@interface FCCKPrivateDeleteAllZoneSubscriptionsOperation : FCCKPrivateDatabaseOperation {
    id /* block */  _deleteAllZoneSubscriptionsCompletionBlock;
}

@property (nonatomic, copy) id /* block */ deleteAllZoneSubscriptionsCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)deleteAllZoneSubscriptionsCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setDeleteAllZoneSubscriptionsCompletionBlock:(id /* block */)arg1;

@end
