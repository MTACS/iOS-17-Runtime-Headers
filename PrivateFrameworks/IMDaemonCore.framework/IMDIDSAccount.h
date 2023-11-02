
@interface IMDIDSAccount : IMDAccount {
    IDSAccount * _idsAccount;
}

@property (nonatomic, readonly, retain) IDSAccount *idsAccount;

- (void).cxx_destruct;
- (id)accountDefaults;
- (bool)canMakeDowngradeRoutingChecks;
- (id)description;
- (id)idsAccount;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4;
- (bool)multiplePhoneNumbersTiedToAccount;
- (void)writeAccountDefaults:(id)arg1;

@end
