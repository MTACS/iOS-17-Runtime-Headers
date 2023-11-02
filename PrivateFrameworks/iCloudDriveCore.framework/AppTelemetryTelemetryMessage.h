
@interface AppTelemetryTelemetryMessage : PBCodable <NSCopying> {
    NSMutableArray * _events;
    struct { 
        unsigned int token : 1; 
    }  _has;
    unsigned long long  _token;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) bool hasToken;
@property (nonatomic) unsigned long long token;

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
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasToken:(bool)arg1;
- (void)setToken:(unsigned long long)arg1;
- (unsigned long long)token;
- (void)writeTo:(id)arg1;

@end
