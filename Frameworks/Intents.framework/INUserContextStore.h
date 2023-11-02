
@interface INUserContextStore : NSObject {
    CKKnowledgeStore * _knowledgeStore;
}

+ (id)findDataInValue:(id)arg1;
+ (id)keyForBundleIdentifier:(id)arg1 andType:(long long)arg2;
+ (id)keyPrefixForType:(long long)arg1;
+ (id)sharedStore;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithKnowledgeStore:(id)arg1;
- (void)removeUserContextOfClass:(Class)arg1 forBundleIdentifier:(id)arg2;
- (void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)storeUserContextViaHelper:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)userContextOfClass:(Class)arg1 forBundleIdentifiers:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)userContextOfClass:(Class)arg1 withCompletion:(id /* block */)arg2;

@end
