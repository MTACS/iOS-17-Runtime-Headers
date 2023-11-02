
@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater> {
    ACAccountStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithAccountStore:(id)arg1;
- (void)removeAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
