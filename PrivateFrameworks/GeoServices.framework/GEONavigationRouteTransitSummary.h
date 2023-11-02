
@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int read_possibleStops : 1; 
        unsigned int read_scheduledLinks : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _possibleStops;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _scheduledLinks;
}

@property (nonatomic, retain) NSMutableArray *possibleStops;
@property (nonatomic, retain) NSMutableArray *scheduledLinks;

+ (bool)isValid:(id)arg1;
+ (Class)possibleStopType;
+ (Class)scheduledLinkType;

- (void).cxx_destruct;
- (void)addPossibleStop:(id)arg1;
- (void)addScheduledLink:(id)arg1;
- (void)clearPossibleStops;
- (void)clearScheduledLinks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)possibleStopAtIndex:(unsigned long long)arg1;
- (id)possibleStops;
- (unsigned long long)possibleStopsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)scheduledLinkAtIndex:(unsigned long long)arg1;
- (id)scheduledLinks;
- (unsigned long long)scheduledLinksCount;
- (void)setPossibleStops:(id)arg1;
- (void)setScheduledLinks:(id)arg1;
- (void)updateRoute:(id)arg1;
- (void)writeTo:(id)arg1;

@end
