
@interface NMSAccountInfo : NSObject {
    ACAccountStore * _accountStore;
    ACAccount * _activeAccount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) ACAccount *activeAccount;

+ (id)activeStoreAccountInfo;

- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_updateActiveAccount;
- (id)activeAccount;
- (void)dealloc;
- (id)init;
- (void)preloadActiveAccount;

@end
