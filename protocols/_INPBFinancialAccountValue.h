
@protocol _INPBFinancialAccountValue <NSObject>

@required

- (int)StringAsAccountType:(NSString *)arg1;
- (_INPBDataString *)accountNickname;
- (NSString *)accountNumber;
- (int)accountType;
- (NSString *)accountTypeAsString:(int)arg1;
- (_INPBBalanceAmountValue *)balance;
- (bool)hasAccountNickname;
- (bool)hasAccountNumber;
- (bool)hasAccountType;
- (bool)hasBalance;
- (bool)hasOrganizationName;
- (bool)hasSecondaryBalance;
- (bool)hasValueMetadata;
- (_INPBDataString *)organizationName;
- (_INPBBalanceAmountValue *)secondaryBalance;
- (void)setAccountNickname:(_INPBDataString *)arg1;
- (void)setAccountNumber:(NSString *)arg1;
- (void)setAccountType:(int)arg1;
- (void)setBalance:(_INPBBalanceAmountValue *)arg1;
- (void)setHasAccountType:(bool)arg1;
- (void)setOrganizationName:(_INPBDataString *)arg1;
- (void)setSecondaryBalance:(_INPBBalanceAmountValue *)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
