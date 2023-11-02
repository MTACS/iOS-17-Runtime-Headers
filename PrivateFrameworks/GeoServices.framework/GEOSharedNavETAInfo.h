
@interface GEOSharedNavETAInfo : PBCodable <NSCopying> {
    double  _etaTimestamp;
    struct { 
        unsigned int has_etaTimestamp : 1; 
        unsigned int has_latitude : 1; 
        unsigned int has_longitude : 1; 
        unsigned int has_remainingDistance : 1; 
        unsigned int has_remainingTime : 1; 
        unsigned int has_waypointIndex : 1; 
    }  _flags;
    double  _latitude;
    double  _longitude;
    double  _remainingDistance;
    double  _remainingTime;
    PBUnknownFields * _unknownFields;
    unsigned int  _waypointIndex;
}

@property (nonatomic) double etaTimestamp;
@property (nonatomic) bool hasEtaTimestamp;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasRemainingDistance;
@property (nonatomic) bool hasRemainingTime;
@property (nonatomic) bool hasWaypointIndex;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double remainingDistance;
@property (nonatomic) double remainingTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int waypointIndex;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)etaTimestamp;
- (bool)hasEtaTimestamp;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasRemainingDistance;
- (bool)hasRemainingTime;
- (bool)hasWaypointIndex;
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
- (double)remainingDistance;
- (double)remainingTime;
- (void)setEtaTimestamp:(double)arg1;
- (void)setHasEtaTimestamp:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasRemainingDistance:(bool)arg1;
- (void)setHasRemainingTime:(bool)arg1;
- (void)setHasWaypointIndex:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setRemainingDistance:(double)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setWaypointIndex:(unsigned int)arg1;
- (id)unknownFields;
- (unsigned int)waypointIndex;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)mspDescription;

@end
