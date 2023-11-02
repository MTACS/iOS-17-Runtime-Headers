
@interface HMAudioAnalysisEventBulletinEventProtoValueEvent : PBCodable <NSCopying> {
    NSMutableArray * _events;
}

@property (nonatomic, retain) NSMutableArray *events;

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
