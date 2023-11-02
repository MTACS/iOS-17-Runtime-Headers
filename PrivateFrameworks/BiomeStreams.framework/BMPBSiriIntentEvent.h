
@interface BMPBSiriIntentEvent : PBCodable <NSCopying> {
    NSData * _eventData;
    NSString * _eventType;
    NSString * _intentId;
}

@property (nonatomic, retain) NSData *eventData;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, readonly) bool hasEventData;
@property (nonatomic, readonly) bool hasEventType;
@property (nonatomic, readonly) bool hasIntentId;
@property (nonatomic, retain) NSString *intentId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventData;
- (id)eventType;
- (bool)hasEventData;
- (bool)hasEventType;
- (bool)hasIntentId;
- (unsigned long long)hash;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventData:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setIntentId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
