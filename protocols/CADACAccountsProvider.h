
@protocol CADACAccountsProvider

@required

- (ACAccount *)accountWithIdentifier:(NSString *)arg1;
- (NSArray *)accounts;

@end
