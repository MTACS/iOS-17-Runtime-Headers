
@protocol EMReceivingAccountBuilder <EMAccountBuilder>

@required

- (EMDeliveryAccount *)deliveryAccount;
- (NSArray *)emailAddresses;
- (bool)isLocalAccount;
- (void)setDeliveryAccount:(EMDeliveryAccount *)arg1;
- (void)setEmailAddresses:(NSArray *)arg1;
- (void)setIsLocalAccount:(bool)arg1;
- (void)setShouldArchiveByDefault:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setStatisticsKind:(NSString *)arg1;
- (bool)shouldArchiveByDefault;
- (bool)sourceIsManaged;
- (NSString *)statisticsKind;

@end
