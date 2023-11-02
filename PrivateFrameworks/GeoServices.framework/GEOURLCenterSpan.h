
@interface GEOURLCenterSpan : PBCodable <NSCopying> {
    struct { 
        unsigned int has_latitudeDelta : 1; 
        unsigned int has_latitude : 1; 
        unsigned int has_longitudeDelta : 1; 
        unsigned int has_longitude : 1; 
    }  _flags;
    double  _latitude;
    double  _latitudeDelta;
    double  _longitude;
    double  _longitudeDelta;
}

@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLatitudeDelta;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasLongitudeDelta;
@property (nonatomic) double latitude;
@property (nonatomic) double latitudeDelta;
@property (nonatomic) double longitude;
@property (nonatomic) double longitudeDelta;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatitude;
- (bool)hasLatitudeDelta;
- (bool)hasLongitude;
- (bool)hasLongitudeDelta;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)latitude;
- (double)latitudeDelta;
- (double)longitude;
- (double)longitudeDelta;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLatitudeDelta:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasLongitudeDelta:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLatitudeDelta:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setLongitudeDelta:(double)arg1;
- (void)writeTo:(id)arg1;

@end
