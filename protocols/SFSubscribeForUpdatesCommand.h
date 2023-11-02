
@protocol SFSubscribeForUpdatesCommand <SFCommand>

@required

- (SFCloudChannelsRequestItem *)cloudChannelsRequestItem;
- (NSDictionary *)dictionaryRepresentation;
- (SFDomainSubscriptionRequestItem *)domainSubscriptionRequestItem;
- (NSData *)jsonData;
- (void)setCloudChannelsRequestItem:(SFCloudChannelsRequestItem *)arg1;
- (void)setDomainSubscriptionRequestItem:(SFDomainSubscriptionRequestItem *)arg1;

@end
