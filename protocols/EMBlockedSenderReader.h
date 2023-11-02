
@protocol EMBlockedSenderReader <NSObject>

@required

- (bool)areAnyEmailAddressesBlocked:(NSArray *)arg1;
- (NSSet *)blockedSenderEmailAddresses;
- (bool)isContactBlocked:(CNContact *)arg1;
- (bool)isEmailAddressBlocked:(NSString *)arg1;
- (bool)isTokenAddressIsBlocked:(id <EMBlockedSenderTokenAddress>)arg1;

@end
