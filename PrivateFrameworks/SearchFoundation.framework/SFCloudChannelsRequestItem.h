
@interface SFCloudChannelsRequestItem : NSObject <NSCopying, NSSecureCoding, SFCloudChannelsRequestItem> {
    NSString * _channelIdentifier;
    NSString * _pushTopic;
    NSString * _subscribedEntityIdentifier;
}

@property (nonatomic, copy) NSString *channelIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *pushTopic;
@property (nonatomic, copy) NSString *subscribedEntityIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pushTopic;
- (void)setChannelIdentifier:(id)arg1;
- (void)setPushTopic:(id)arg1;
- (void)setSubscribedEntityIdentifier:(id)arg1;
- (id)subscribedEntityIdentifier;

@end
