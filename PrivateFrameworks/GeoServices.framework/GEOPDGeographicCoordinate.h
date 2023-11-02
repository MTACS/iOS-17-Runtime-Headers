
@interface GEOPDGeographicCoordinate : PBCodable <NSCopying> {
    double  _altitude;
    struct { 
        unsigned int has_altitude : 1; 
        unsigned int has_latitude : 1; 
        unsigned int has_longitude : 1; 
    }  _flags;
    double  _latitude;
    double  _longitude;
}

@property (nonatomic) double altitude;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (bool)isValid:(id)arg1;

- (double)altitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)writeTo:(id)arg1;

@end
