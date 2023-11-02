
@protocol _INPBSearchForAccountsIntentResponse <NSObject>

@required

+ (Class)accountsType;

- (NSArray *)accounts;
- (_INPBFinancialAccountValue *)accountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsCount;
- (void)addAccounts:(_INPBFinancialAccountValue *)arg1;
- (void)clearAccounts;
- (void)setAccounts:(NSArray *)arg1;

@end
