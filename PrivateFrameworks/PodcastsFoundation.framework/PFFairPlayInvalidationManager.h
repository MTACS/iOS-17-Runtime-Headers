
@interface PFFairPlayInvalidationManager : NSObject <PFFairPlayInvalidationManaging> {
    void episodeFetcher;
    void internalQueue;
    void keyLoader;
    void sessionProvider;
    void storageProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)invalidateFairPlayKeyFor:(long long)arg1 completion:(id /* block */)arg2;
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(bool)arg1 completion:(id /* block */)arg2;
- (void)markKeyForInvalidationAt:(id)arg1 shouldRemove:(bool)arg2;
- (void)removalAllFairPlayKeysWithCompletion:(id /* block */)arg1;
- (id)removeKeyFor:(id)arg1;

@end
