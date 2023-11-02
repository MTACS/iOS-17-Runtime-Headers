
@interface ATXPBBlendingSessionLog : PBCodable <NSCopying> {
    NSMutableArray * _blendingUpdates;
    NSMutableArray * _ermEvents;
}

@property (nonatomic, retain) NSMutableArray *blendingUpdates;
@property (nonatomic, retain) NSMutableArray *ermEvents;

+ (Class)blendingUpdateType;
+ (Class)ermEventType;

- (void).cxx_destruct;
- (void)addBlendingUpdate:(id)arg1;
- (void)addErmEvent:(id)arg1;
- (id)blendingUpdateAtIndex:(unsigned long long)arg1;
- (id)blendingUpdates;
- (unsigned long long)blendingUpdatesCount;
- (void)clearBlendingUpdates;
- (void)clearErmEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)ermEventAtIndex:(unsigned long long)arg1;
- (id)ermEvents;
- (unsigned long long)ermEventsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBlendingUpdates:(id)arg1;
- (void)setErmEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
