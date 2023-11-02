
@interface WBSPasswordBreachChecker : NSObject {
    WBSPasswordBreachQueuedPasswordBagManager * _bagManager;
    WBSPasswordBreachContext * _context;
    WBSPasswordBreachRequestManager * _requestManager;
}

- (void).cxx_destruct;
- (void)_checkHighFrequencyBucketForPasswords:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_checkLowFrequencyBatchesWithBagManager:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_mergeResultsByUUID:(id)arg1 intoResultsByPersistentIdentifier:(id)arg2 usingQueuedPasswordsbyUUID:(id)arg3;
- (void)checkPasswordBatchesWithCompletionHandler:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 bagManager:(id)arg2;

@end
