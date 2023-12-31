
@interface VSIdentityProviderResponse : NSObject {
    VSAccount * _account;
    VSAccountMetadata * _accountMetadata;
    bool  _didCreateAccount;
    VSOptional * _logoLoadOperation;
}

@property (nonatomic, retain) VSAccount *account;
@property (nonatomic, copy) VSAccountMetadata *accountMetadata;
@property (nonatomic) bool didCreateAccount;
@property (nonatomic, retain) VSOptional *logoLoadOperation;

- (void).cxx_destruct;
- (id)account;
- (id)accountMetadata;
- (id)description;
- (bool)didCreateAccount;
- (id)init;
- (id)logoLoadOperation;
- (void)setAccount:(id)arg1;
- (void)setAccountMetadata:(id)arg1;
- (void)setDidCreateAccount:(bool)arg1;
- (void)setLogoLoadOperation:(id)arg1;

@end
