
@interface CLPTraceCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _events;
    struct { 
        unsigned int type : 1; 
    }  _has;
    CLPMeta * _meta;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic) int type;

+ (Class)eventsType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setEvents:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMeta:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
