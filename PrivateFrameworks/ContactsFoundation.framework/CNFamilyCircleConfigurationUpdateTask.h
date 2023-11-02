
@interface CNFamilyCircleConfigurationUpdateTask : CNTask {
    <CNDelegateAccountSink> * _accountSink;
    <CNDelegateAccountSource> * _accountSource;
    ACAccountStore * _accountStore;
    NSArray * _delegateAccounts;
    CNResult * _result;
}

@property (nonatomic, readonly) <CNDelegateAccountSink> *accountSink;
@property (nonatomic, readonly) <CNDelegateAccountSource> *accountSource;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) NSArray *delegateAccounts;
@property (nonatomic, retain) CNResult *result;

+ (id)os_log;

- (void).cxx_destruct;
- (id)accountSink;
- (id)accountSource;
- (id)accountStore;
- (id)delegateAccounts;
- (id)description;
- (id)init;
- (id)initWithAccountSource:(id)arg1 accountSink:(id)arg2 accountStore:(id)arg3;
- (id)initWithName:(id)arg1;
- (void)loadDefaultSinkIfNecessary;
- (void)loadDefaultSourceIfNecessary;
- (void)loadDelegateAccountsFromSource;
- (id)result;
- (id)run:(id*)arg1;
- (void)setResult:(id)arg1;
- (void)updateDelegateAccounts;

@end
