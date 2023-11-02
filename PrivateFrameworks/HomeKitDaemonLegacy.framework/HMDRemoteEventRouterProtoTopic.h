
@interface HMDRemoteEventRouterProtoTopic : PBCodable <NSCopying> {
    NSString * _eventUUID;
    NSString * _topic;
}

@property (nonatomic, retain) NSString *eventUUID;
@property (nonatomic, readonly) bool hasEventUUID;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic, retain) NSString *topic;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventUUID;
- (bool)hasEventUUID;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventUUID:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
