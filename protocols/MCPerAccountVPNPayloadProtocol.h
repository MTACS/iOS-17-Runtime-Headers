
@protocol MCPerAccountVPNPayloadProtocol

@required

- (NSString *)VPNUUID;

@optional

- (NSArray *)calendarAccountIdentifiers;
- (NSArray *)contactsAccountIdentifiers;
- (NSArray *)mailAccountIdentifiers;

@end
