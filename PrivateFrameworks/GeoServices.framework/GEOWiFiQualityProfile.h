
@interface GEOWiFiQualityProfile : PBCodable <NSCopying> {
    struct { 
        unsigned int read_hours : 1; 
        unsigned int read_qualities : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOWiFiQualityHours * _hours;
    NSMutableArray * _qualities;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasHours;
@property (nonatomic, retain) GEOWiFiQualityHours *hours;
@property (nonatomic, retain) NSMutableArray *qualities;

+ (bool)isValid:(id)arg1;
+ (Class)qualitiesType;

- (void).cxx_destruct;
- (void)addQualities:(id)arg1;
- (void)clearQualities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHours;
- (unsigned long long)hash;
- (id)hours;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)qualities;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualitiesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHours:(id)arg1;
- (void)setQualities:(id)arg1;
- (void)writeTo:(id)arg1;

@end
