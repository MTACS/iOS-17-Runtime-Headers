
@interface PSAccountsLinkSpecifier : PSSpecifier {
    PSAccountEnumerator * _accountEnumerator;
}

@property (nonatomic, retain) PSAccountEnumerator *accountEnumerator;

- (void).cxx_destruct;
- (id)_accountsCount:(id)arg1;
- (id)accountEnumerator;
- (id)initWithDetailClass:(Class)arg1;
- (void)setAccountEnumerator:(id)arg1;

@end
