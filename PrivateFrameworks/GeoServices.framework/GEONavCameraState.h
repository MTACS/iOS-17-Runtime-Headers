
@interface GEONavCameraState : PBCodable <NSCopying> {
    int  _distanceToManeuver;
    struct { 
        unsigned int has_distanceToManeuver : 1; 
        unsigned int has_speedBucket : 1; 
        unsigned int has_upcomingManeuverType : 1; 
        unsigned int has_isGroupedManeuver : 1; 
    }  _flags;
    bool  _isGroupedManeuver;
    int  _speedBucket;
    int  _upcomingManeuverType;
}

@property (nonatomic) int distanceToManeuver;
@property (nonatomic) bool hasDistanceToManeuver;
@property (nonatomic) bool hasIsGroupedManeuver;
@property (nonatomic) bool hasSpeedBucket;
@property (nonatomic) bool hasUpcomingManeuverType;
@property (nonatomic) bool isGroupedManeuver;
@property (nonatomic) int speedBucket;
@property (nonatomic) int upcomingManeuverType;

+ (bool)isValid:(id)arg1;

- (int)StringAsDistanceToManeuver:(id)arg1;
- (int)StringAsSpeedBucket:(id)arg1;
- (int)StringAsUpcomingManeuverType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distanceToManeuver;
- (id)distanceToManeuverAsString:(int)arg1;
- (bool)hasDistanceToManeuver;
- (bool)hasIsGroupedManeuver;
- (bool)hasSpeedBucket;
- (bool)hasUpcomingManeuverType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupedManeuver;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceToManeuver:(int)arg1;
- (void)setHasDistanceToManeuver:(bool)arg1;
- (void)setHasIsGroupedManeuver:(bool)arg1;
- (void)setHasSpeedBucket:(bool)arg1;
- (void)setHasUpcomingManeuverType:(bool)arg1;
- (void)setIsGroupedManeuver:(bool)arg1;
- (void)setSpeedBucket:(int)arg1;
- (void)setUpcomingManeuverType:(int)arg1;
- (int)speedBucket;
- (id)speedBucketAsString:(int)arg1;
- (int)upcomingManeuverType;
- (id)upcomingManeuverTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
