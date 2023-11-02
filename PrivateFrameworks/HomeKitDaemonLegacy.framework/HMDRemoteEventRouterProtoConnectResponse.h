
@interface HMDRemoteEventRouterProtoConnectResponse : PBCodable <NSCopying> {
    NSMutableArray * _cachedEvents;
}

@property (nonatomic, retain) NSMutableArray *cachedEvents;

+ (Class)cachedEventsType;

- (void).cxx_destruct;
- (void)addCachedEvents:(id)arg1;
- (id)cachedEvents;
- (id)cachedEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cachedEventsCount;
- (void)clearCachedEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCachedEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
