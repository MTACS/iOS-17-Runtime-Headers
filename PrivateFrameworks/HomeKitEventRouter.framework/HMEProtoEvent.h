
@interface HMEProtoEvent : PBCodable <NSCopying> {
    NSData * _eventData;
    HMEProtoEventMetadata * _eventMetadata;
}

@property (nonatomic, retain) NSData *eventData;
@property (nonatomic, retain) HMEProtoEventMetadata *eventMetadata;
@property (nonatomic, readonly) bool hasEventData;
@property (nonatomic, readonly) bool hasEventMetadata;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventData;
- (id)eventMetadata;
- (bool)hasEventData;
- (bool)hasEventMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventData:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
