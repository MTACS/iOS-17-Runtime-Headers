
@interface HMXPCEventRouterProtoEventsMessage : PBCodable <NSCopying> {
    NSMutableArray * _cachedEvents;
    NSMutableArray * _events;
}

@property (nonatomic, retain) NSMutableArray *cachedEvents;
@property (nonatomic, retain) NSMutableArray *events;

+ (Class)cachedEventsType;
+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addCachedEvents:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)cachedEvents;
- (id)cachedEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cachedEventsCount;
- (void)clearCachedEvents;
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
- (void)setCachedEvents:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
