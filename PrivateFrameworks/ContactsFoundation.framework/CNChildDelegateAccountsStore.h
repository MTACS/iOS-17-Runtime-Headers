
@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSink, CNDelegateAccountSource> {
    ACAccountStore * _accountStore;
    ACAccount * _parentAccount;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACAccount *parentAccount;
@property (readonly) Class superclass;

+ (void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3;
+ (id)os_log;

- (void).cxx_destruct;
- (id)accountStore;
- (id)addChildWithDelegateInfo:(id)arg1;
- (id)delegateAccounts;
- (id)description;
- (id)initWithParentAccount:(id)arg1 accountStore:(id)arg2;
- (id)parentAccount;
- (id)primaryAccount;
- (id)removeAccount:(id)arg1;
- (id)updateAccount:(id)arg1;
- (bool)updateAccounts:(id)arg1 error:(id*)arg2;

@end
