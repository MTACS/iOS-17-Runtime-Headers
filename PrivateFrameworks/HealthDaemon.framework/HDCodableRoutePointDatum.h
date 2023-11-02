
@interface HDCodableRoutePointDatum : PBCodable <NSCopying> {
    double  _altitude;
    struct { 
        unsigned int altitude : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int odometer : 1; 
        unsigned int timestamp : 1; 
        unsigned int signalEnvironmentType : 1; 
    }  _has;
    double  _latitude;
    double  _longitude;
    double  _odometer;
    int  _signalEnvironmentType;
    double  _timestamp;
}

@property (nonatomic) double altitude;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasOdometer;
@property (nonatomic) bool hasSignalEnvironmentType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double odometer;
@property (nonatomic) int signalEnvironmentType;
@property (nonatomic) double timestamp;

- (double)altitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasOdometer;
- (bool)hasSignalEnvironmentType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (double)odometer;
- (bool)readFrom:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasOdometer:(bool)arg1;
- (void)setHasSignalEnvironmentType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setOdometer:(double)arg1;
- (void)setSignalEnvironmentType:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (int)signalEnvironmentType;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
