
@protocol _INPBSearchForAccountsIntent <NSObject>

@required

- (int)StringAsAccountType:(NSString *)arg1;
- (int)StringAsRequestedBalanceType:(NSString *)arg1;
- (_INPBDataString *)accountNickname;
- (int)accountType;
- (NSString *)accountTypeAsString:(int)arg1;
- (bool)hasAccountNickname;
- (bool)hasAccountType;
- (bool)hasIntentMetadata;
- (bool)hasOrganizationName;
- (bool)hasRequestedBalanceType;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDataString *)organizationName;
- (int)requestedBalanceType;
- (NSString *)requestedBalanceTypeAsString:(int)arg1;
- (void)setAccountNickname:(_INPBDataString *)arg1;
- (void)setAccountType:(int)arg1;
- (void)setHasAccountType:(bool)arg1;
- (void)setHasRequestedBalanceType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setOrganizationName:(_INPBDataString *)arg1;
- (void)setRequestedBalanceType:(int)arg1;

@end
