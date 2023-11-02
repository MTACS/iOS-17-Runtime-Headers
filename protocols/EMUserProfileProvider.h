
@protocol EMUserProfileProvider <NSObject>

@required

- (NSSet *)accountsEmailAddresses;
- (NSSet *)allEmailAddresses;
- (CNContact *)contact;
- (NSSet *)contactEmailAddresses;
- (CNContact *)contactWithKeysToFetch:(NSArray *)arg1;
- (bool)isMyEmailAddressContainedInAddressList:(NSArray *)arg1;

@end
