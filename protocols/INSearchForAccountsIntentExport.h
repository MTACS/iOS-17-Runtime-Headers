
@protocol INSearchForAccountsIntentExport <NSObject, JSExport>

@required

- (INSpeakableString *)accountNickname;
- (long long)accountType;
- (id)init;
- (INSpeakableString *)organizationName;
- (long long)requestedBalanceType;
- (void)setAccountNickname:(INSpeakableString *)arg1;
- (void)setAccountType:(long long)arg1;
- (void)setOrganizationName:(INSpeakableString *)arg1;
- (void)setRequestedBalanceType:(long long)arg1;

@end
