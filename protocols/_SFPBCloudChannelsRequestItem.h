
@protocol _SFPBCloudChannelsRequestItem <NSObject>

@required

- (NSString *)channelIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)pushTopic;
- (void)setChannelIdentifier:(NSString *)arg1;
- (void)setPushTopic:(NSString *)arg1;
- (void)setSubscribedEntityIdentifier:(NSString *)arg1;
- (NSString *)subscribedEntityIdentifier;

@end
