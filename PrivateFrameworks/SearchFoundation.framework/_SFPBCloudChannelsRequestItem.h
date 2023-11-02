
@interface _SFPBCloudChannelsRequestItem : PBCodable <NSSecureCoding, _SFPBCloudChannelsRequestItem> {
    NSString * _channelIdentifier;
    NSString * _pushTopic;
    NSString * _subscribedEntityIdentifier;
}

@property (nonatomic, copy) NSString *channelIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *pushTopic;
@property (nonatomic, copy) NSString *subscribedEntityIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pushTopic;
- (bool)readFrom:(id)arg1;
- (void)setChannelIdentifier:(id)arg1;
- (void)setPushTopic:(id)arg1;
- (void)setSubscribedEntityIdentifier:(id)arg1;
- (id)subscribedEntityIdentifier;
- (void)writeTo:(id)arg1;

@end
