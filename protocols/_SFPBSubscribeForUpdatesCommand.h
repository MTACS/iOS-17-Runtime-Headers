
@protocol _SFPBSubscribeForUpdatesCommand <NSObject>

@required

- (_SFPBCloudChannelsRequestItem *)cloudChannelsRequestItem;
- (_SFPBDomainSubscriptionRequestItem *)domainSubscriptionRequestItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCloudChannelsRequestItem:(_SFPBCloudChannelsRequestItem *)arg1;
- (void)setDomainSubscriptionRequestItem:(_SFPBDomainSubscriptionRequestItem *)arg1;

@end
