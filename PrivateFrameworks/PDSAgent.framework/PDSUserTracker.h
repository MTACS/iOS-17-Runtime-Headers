
@interface PDSUserTracker : NSObject {
    id /* block */  _accountStoreBlock;
}

@property (nonatomic, copy) id /* block */ accountStoreBlock;

+ (id)standardAccountStore;

- (void).cxx_destruct;
- (id)_accountForUser:(id)arg1 withError:(id*)arg2;
- (id /* block */)accountStoreBlock;
- (id)init;
- (id)initWithAccountStoreBlock:(id /* block */)arg1;
- (void)refreshCredentialsForUser:(id)arg1 withError:(id*)arg2 completion:(id /* block */)arg3;
- (void)setAccountStoreBlock:(id /* block */)arg1;
- (id)tokenAndIdentifier:(id*)arg1 forUser:(id)arg2 withError:(id*)arg3;
- (bool)validUser:(id)arg1 withError:(id*)arg2;

@end
