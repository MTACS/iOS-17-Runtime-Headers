
@interface GEORoutingSettingsCyclingPrefs : PBCodable <NSCopying> {
    bool  _autoRecordWorkout;
    bool  _avoidBusyRoads;
    bool  _avoidHills;
    bool  _avoidStairs;
    bool  _eBike;
    struct { 
        unsigned int has_autoRecordWorkout : 1; 
        unsigned int has_avoidBusyRoads : 1; 
        unsigned int has_avoidHills : 1; 
        unsigned int has_avoidStairs : 1; 
        unsigned int has_eBike : 1; 
    }  _flags;
}

@property (nonatomic) bool autoRecordWorkout;
@property (nonatomic) bool avoidBusyRoads;
@property (nonatomic) bool avoidHills;
@property (nonatomic) bool avoidStairs;
@property (nonatomic) bool eBike;
@property (nonatomic) bool hasAutoRecordWorkout;
@property (nonatomic) bool hasAvoidBusyRoads;
@property (nonatomic) bool hasAvoidHills;
@property (nonatomic) bool hasAvoidStairs;
@property (nonatomic) bool hasEBike;

+ (bool)isValid:(id)arg1;

- (bool)autoRecordWorkout;
- (bool)avoidBusyRoads;
- (bool)avoidHills;
- (bool)avoidStairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)eBike;
- (bool)hasAutoRecordWorkout;
- (bool)hasAvoidBusyRoads;
- (bool)hasAvoidHills;
- (bool)hasAvoidStairs;
- (bool)hasEBike;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutoRecordWorkout:(bool)arg1;
- (void)setAvoidBusyRoads:(bool)arg1;
- (void)setAvoidHills:(bool)arg1;
- (void)setAvoidStairs:(bool)arg1;
- (void)setEBike:(bool)arg1;
- (void)setHasAutoRecordWorkout:(bool)arg1;
- (void)setHasAvoidBusyRoads:(bool)arg1;
- (void)setHasAvoidHills:(bool)arg1;
- (void)setHasAvoidStairs:(bool)arg1;
- (void)setHasEBike:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
