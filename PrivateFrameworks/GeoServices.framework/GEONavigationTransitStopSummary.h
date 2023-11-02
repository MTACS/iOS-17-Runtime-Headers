
@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {
    GEOLatLng * _coordinate;
    struct { 
        unsigned int has_stopID : 1; 
    }  _flags;
    unsigned long long  _stopID;
}

@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic) bool hasStopID;
@property (nonatomic) unsigned long long stopID;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStopID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTransitStop:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasStopID:(bool)arg1;
- (void)setStopID:(unsigned long long)arg1;
- (unsigned long long)stopID;
- (void)writeTo:(id)arg1;

@end
