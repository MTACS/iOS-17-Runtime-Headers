
@interface PKAppleAccountManager : NSObject {
    ACAccountStore * _accountStore;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) PKAppleAccountInformation *appleAccountInformation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_aidaAccount;
- (id)_primaryAppleAccount;
- (id)accountStore;
- (id)appleAccountInformation;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)arg1;

@end
