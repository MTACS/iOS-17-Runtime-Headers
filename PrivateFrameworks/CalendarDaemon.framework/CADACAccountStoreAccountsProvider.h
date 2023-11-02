
@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider> {
    ACAccountStore * _accountStore;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;

- (void).cxx_destruct;
- (id)accountStore;
- (id)accountWithIdentifier:(id)arg1;
- (id)accounts;
- (id)initWithAccountStore:(id)arg1;

@end
