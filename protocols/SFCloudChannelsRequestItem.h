
@protocol SFCloudChannelsRequestItem <NSObject>

@required

- (NSString *)channelIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)pushTopic;
- (void)setChannelIdentifier:(NSString *)arg1;
- (void)setPushTopic:(NSString *)arg1;
- (void)setSubscribedEntityIdentifier:(NSString *)arg1;
- (NSString *)subscribedEntityIdentifier;

@end
