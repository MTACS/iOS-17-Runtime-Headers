
@interface CRKClassKitAccountStateProvider : NSObject {
    long long  _accountState;
    ACAccountStore * _accountStore;
}

@property (nonatomic) long long accountState;
@property (nonatomic, readonly) ACAccountStore *accountStore;

- (void).cxx_destruct;
- (long long)accountState;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (void)beginObservingAccountChanges;
- (long long)currentAccountState;
- (void)dealloc;
- (void)endObservingAccountChanges;
- (id)init;
- (void)setAccountState:(long long)arg1;
- (void)updateAccountState;

@end
