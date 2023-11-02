
@interface GEOURLCamera : PBCodable <NSCopying> {
    double  _altitude;
    struct { 
        unsigned int has_altitude : 1; 
        unsigned int has_heading : 1; 
        unsigned int has_latitude : 1; 
        unsigned int has_longitude : 1; 
        unsigned int has_pitch : 1; 
    }  _flags;
    double  _heading;
    double  _latitude;
    double  _longitude;
    double  _pitch;
}

@property (nonatomic) double altitude;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasHeading;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasPitch;
@property (nonatomic) double heading;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double pitch;

+ (bool)isValid:(id)arg1;

- (double)altitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasHeading;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasPitch;
- (unsigned long long)hash;
- (double)heading;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (double)pitch;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasHeading:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasPitch:(bool)arg1;
- (void)setHeading:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setPitch:(double)arg1;
- (void)writeTo:(id)arg1;

@end
