
@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {
    NSString * _direction;
    struct { 
        unsigned int has_lineId : 1; 
        unsigned int read_direction : 1; 
        unsigned int read_headsign : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _headsign;
    unsigned long long  _lineId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *direction;
@property (nonatomic, readonly) bool hasDirection;
@property (nonatomic, readonly) bool hasHeadsign;
@property (nonatomic) bool hasLineId;
@property (nonatomic, retain) NSString *headsign;
@property (nonatomic) unsigned long long lineId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)direction;
- (bool)hasDirection;
- (bool)hasHeadsign;
- (bool)hasLineId;
- (unsigned long long)hash;
- (id)headsign;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)lineId;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setHasLineId:(bool)arg1;
- (void)setHeadsign:(id)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
