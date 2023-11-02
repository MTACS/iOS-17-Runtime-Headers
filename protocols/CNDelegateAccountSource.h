
@protocol CNDelegateAccountSource <NSObject>

@required

- (NSArray *)delegateAccounts;
- (CNCoreDelegateInfo *)primaryAccount;

@end
