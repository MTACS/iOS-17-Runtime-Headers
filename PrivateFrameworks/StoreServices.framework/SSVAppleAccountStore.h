
@interface SSVAppleAccountStore : NSObject {
    ACAccountStore * _accountStore;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    ACAccount * _primaryAppleAccount;
}

@property (readonly) ACAccount *primaryAppleAccount;

+ (id)sharedAccountStore;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)init;
- (id)primaryAppleAccount;

@end
