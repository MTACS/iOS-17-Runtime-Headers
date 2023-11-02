
@interface WBSPasswordBreachQueuedPasswordBagManager : NSObject {
    WBSPasswordBreachContext * _context;
    <WBSPasswordBreachCredentialSource> * _credentialSource;
    long long  _fillState;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _queuedPasswordsByUUID;
    WBSPasswordBreachResults * _results;
}

@property (nonatomic, readonly, copy) NSDictionary *allNonbreachedPasswords;
@property (nonatomic, readonly) long long fillState;

- (void).cxx_destruct;
- (id)_constructBagOnInternalQueueWithCredentials:(id)arg1 ensureFakePasswordGeneration:(bool)arg2;
- (id)_constructNewBagOnInternalQueueEnsuringFakePasswordGeneration:(bool)arg1;
- (id)_dictionaryRepresentation;
- (id)_passwordBagFromDictionaryRepresentation:(id)arg1;
- (id)_unbreachedCredentials;
- (id)allNonbreachedPasswords;
- (id)description;
- (long long)fillState;
- (void)getPasswordsForNextBatchWithCompletionHandler:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 results:(id)arg2 passwordSource:(id)arg3;
- (void)reportPasswordCheckBatchResults:(id)arg1;
- (void)saveBagToStore;

@end
