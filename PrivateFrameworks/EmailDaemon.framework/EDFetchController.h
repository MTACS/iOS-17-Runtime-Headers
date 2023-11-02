
@interface EDFetchController : NSObject <EFLoggable> {
    <EDAccountsProvider> * _accountsProvider;
}

@property (nonatomic, retain) <EDAccountsProvider> *accountsProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)accountsProvider;
- (id)initWithAccountsProvider:(id)arg1;
- (void)setAccountsProvider:(id)arg1;

@end
