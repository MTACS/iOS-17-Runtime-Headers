
@interface ASKStorefrontChangeProvider : NSObject {
    ACAccountStore * _accountStore;
    ACAccount * _activeAccount;
    id /* block */  _block;
    ACAccount * _localAccount;
    NSObject<OS_dispatch_queue> * _notifyQueue;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, retain) ACAccount *activeAccount;
@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, retain) ACAccount *localAccount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notifyQueue;

- (void).cxx_destruct;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (id)activeAccount;
- (id /* block */)block;
- (void)dealloc;
- (bool)hasManagedStateChangedFromAccount:(id)arg1 toAccount:(id)arg2;
- (bool)hasStorefrontChangedFromAccount:(id)arg1 toAccount:(id)arg2;
- (id)initWithBlock:(id /* block */)arg1;
- (id)localAccount;
- (id)notifyQueue;
- (void)setActiveAccount:(id)arg1;
- (void)setLocalAccount:(id)arg1;

@end
