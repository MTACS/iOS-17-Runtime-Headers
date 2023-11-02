
@interface AMSBagFixedAccountProvider : NSObject <AMSBagAccountProvider> {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) bool bagLoadShouldUpdateAccountProperties;
@property (nonatomic, readonly) NSString *identity;

- (void).cxx_destruct;
- (id)account;
- (bool)associatedAccountIsEqualToAccount:(id)arg1 forMediaType:(id)arg2;
- (id)bagAccountForAccountMediaType:(id)arg1;
- (id)bagAccountPromiseForAccountMediaType:(id)arg1;
- (bool)bagLoadShouldUpdateAccountProperties;
- (id)bagStorefrontForAccountMediaType:(id)arg1;
- (id)bagStorefrontPromiseForAccountMediaType:(id)arg1;
- (id)identity;
- (id)initWithAccount:(id)arg1;

@end
