
@interface _PLServerTransaction : _PLClientTransaction {
    NSObject<OS_dispatch_queue> * _changeScopeQueue;
    NSCountedSet * _enqueuedChangeScopes;
}

- (void).cxx_destruct;
- (void)_enqueueChangeScopes:(id)arg1;
- (void)abortTransaction;
- (void)addChangeScopes:(id)arg1;
- (id)changeScopes;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)dealloc;
- (id)generateChangeScopesDescription;
- (id)initWithPathManager:(id)arg1 identifier:(const char *)arg2;
- (bool)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;

@end
