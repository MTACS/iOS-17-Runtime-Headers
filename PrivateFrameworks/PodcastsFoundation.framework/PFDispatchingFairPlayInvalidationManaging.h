
@interface PFDispatchingFairPlayInvalidationManaging : NSObject <PFFairPlayInvalidationManaging> {
    void responseQueue;
    void wrappedInstance;
}

+ (id)invalidationManager:(id)arg1 receivingCallbacksOnQueue:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)invalidateFairPlayKeyFor:(long long)arg1 completion:(id /* block */)arg2;
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(bool)arg1 completion:(id /* block */)arg2;
- (void)markKeyForInvalidationAt:(id)arg1 shouldRemove:(bool)arg2;
- (void)removalAllFairPlayKeysWithCompletion:(id /* block */)arg1;
- (id)removeKeyFor:(id)arg1;

@end
