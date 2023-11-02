
@interface TKTokenAccessRegistry : NSObject {
    <TKTokenAccessDB> * _accessDB;
    <TKTokenAccessUserPrompt> * _prompt;
}

- (void).cxx_destruct;
- (long long)_fetchAccessForRequest:(id)arg1;
- (bool)_isPersistenceEnabled;
- (bool)_platformAllowsAllRequests;
- (long long)_promptUserToEvaluateRequest:(id)arg1 error:(id*)arg2;
- (bool)_shouldAutomaticallyAllowRequest:(id)arg1;
- (void)_storeAccess:(long long)arg1 forRequest:(id)arg2;
- (bool)evaluateRequest:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAccessDB:(id)arg1 userPrompt:(id)arg2;
- (void)setAccessDB:(id)arg1;
- (void)setUserPrompt:(id)arg1;

@end
