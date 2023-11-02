
@protocol EMBlockedSenderWriter <NSObject>

@required

- (void)blockContact:(CNContact *)arg1;
- (void)blockEmailAddress:(NSString *)arg1;
- (void)blockEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)blockTokenAddress:(id <EMBlockedSenderTokenAddress>)arg1;
- (void)unblockContact:(CNContact *)arg1;
- (void)unblockEmailAddress:(NSString *)arg1;
- (void)unblockEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)unblockTokenAddress:(id <EMBlockedSenderTokenAddress>)arg1;

@end
