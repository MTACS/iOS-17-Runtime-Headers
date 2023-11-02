
@interface HMDRemoteEventRouterProtoFetchEventsResponse : PBCodable <NSCopying> {
    NSMutableArray * _changedEvents;
}

@property (nonatomic, retain) NSMutableArray *changedEvents;

+ (Class)changedEventsType;

- (void).cxx_destruct;
- (void)addChangedEvents:(id)arg1;
- (id)changedEvents;
- (id)changedEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)changedEventsCount;
- (void)clearChangedEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangedEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
