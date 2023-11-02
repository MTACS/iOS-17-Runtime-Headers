
@interface GEOPDCameraFrame : PBCodable <NSCopying> {
    double  _altitude;
    struct { 
        unsigned int has_altitude : 1; 
        unsigned int has_latitude : 1; 
        unsigned int has_longitude : 1; 
        unsigned int has_pitch : 1; 
        unsigned int has_roll : 1; 
        unsigned int has_yaw : 1; 
    }  _flags;
    double  _latitude;
    double  _longitude;
    double  _pitch;
    double  _roll;
    double  _yaw;
}

@property (nonatomic) double altitude;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasPitch;
@property (nonatomic) bool hasRoll;
@property (nonatomic) bool hasYaw;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) double yaw;

+ (bool)isValid:(id)arg1;

- (double)altitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasPitch;
- (bool)hasRoll;
- (bool)hasYaw;
- (unsigned long long)hash;
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
- (double)roll;
- (void)setAltitude:(double)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasPitch:(bool)arg1;
- (void)setHasRoll:(bool)arg1;
- (void)setHasYaw:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setPitch:(double)arg1;
- (void)setRoll:(double)arg1;
- (void)setYaw:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)yaw;

@end
