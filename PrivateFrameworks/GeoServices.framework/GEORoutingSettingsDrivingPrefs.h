
@interface GEORoutingSettingsDrivingPrefs : PBCodable <NSCopying> {
    bool  _avoidHighways;
    bool  _avoidTolls;
    struct { 
        unsigned int has_avoidHighways : 1; 
        unsigned int has_avoidTolls : 1; 
        unsigned int has_speedLimitEnabled : 1; 
        unsigned int has_trafficEnabled : 1; 
        unsigned int has_voiceNavEnabled : 1; 
    }  _flags;
    bool  _speedLimitEnabled;
    bool  _trafficEnabled;
    bool  _voiceNavEnabled;
}

@property (nonatomic) bool avoidHighways;
@property (nonatomic) bool avoidTolls;
@property (nonatomic) bool hasAvoidHighways;
@property (nonatomic) bool hasAvoidTolls;
@property (nonatomic) bool hasSpeedLimitEnabled;
@property (nonatomic) bool hasTrafficEnabled;
@property (nonatomic) bool hasVoiceNavEnabled;
@property (nonatomic) bool speedLimitEnabled;
@property (nonatomic) bool trafficEnabled;
@property (nonatomic) bool voiceNavEnabled;

+ (bool)isValid:(id)arg1;

- (bool)avoidHighways;
- (bool)avoidTolls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvoidHighways;
- (bool)hasAvoidTolls;
- (bool)hasSpeedLimitEnabled;
- (bool)hasTrafficEnabled;
- (bool)hasVoiceNavEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidHighways:(bool)arg1;
- (void)setAvoidTolls:(bool)arg1;
- (void)setHasAvoidHighways:(bool)arg1;
- (void)setHasAvoidTolls:(bool)arg1;
- (void)setHasSpeedLimitEnabled:(bool)arg1;
- (void)setHasTrafficEnabled:(bool)arg1;
- (void)setHasVoiceNavEnabled:(bool)arg1;
- (void)setSpeedLimitEnabled:(bool)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setVoiceNavEnabled:(bool)arg1;
- (bool)speedLimitEnabled;
- (bool)trafficEnabled;
- (bool)voiceNavEnabled;
- (void)writeTo:(id)arg1;

@end
