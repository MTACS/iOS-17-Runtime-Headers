
@protocol EDReceivingAccount <EDAccount>

@required

- (NSURL *)accountURL;
- (bool)containsMailboxWithURL:(NSURL *)arg1;
- (<EDDeliveryAccount> *)deliveryAccount;
- (NSArray *)emailAddresses;
- (bool)isLocalAccount;
- (bool)isManaged;
- (<ECMailbox> *)mailboxForType:(long long)arg1;
- (<ECMailbox> *)rootMailbox;
- (void)setDeliveryAccount:(id <EDDeliveryAccount>)arg1;
- (bool)shouldArchiveByDefault;
- (NSString *)smtpIdentifier;
- (bool)sourceIsManaged;

@end
