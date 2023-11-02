
@interface GEOLogMsgStateMapsUserSettings : PBCodable <NSCopying> {
    bool  _airQualityShown;
    struct { 
        unsigned int has_locationCadence : 1; 
        unsigned int has_locationType : 1; 
        unsigned int has_airQualityShown : 1; 
        unsigned int has_learnFromAppEnabled : 1; 
        unsigned int has_notificationsEnabled : 1; 
        unsigned int has_siriSuggestionsEnabled : 1; 
        unsigned int has_weatherShown : 1; 
    }  _flags;
    bool  _learnFromAppEnabled;
    int  _locationCadence;
    int  _locationType;
    bool  _notificationsEnabled;
    bool  _siriSuggestionsEnabled;
    bool  _weatherShown;
}

@property (nonatomic) bool airQualityShown;
@property (nonatomic) bool hasAirQualityShown;
@property (nonatomic) bool hasLearnFromAppEnabled;
@property (nonatomic) bool hasLocationCadence;
@property (nonatomic) bool hasLocationType;
@property (nonatomic) bool hasNotificationsEnabled;
@property (nonatomic) bool hasSiriSuggestionsEnabled;
@property (nonatomic) bool hasWeatherShown;
@property (nonatomic) bool learnFromAppEnabled;
@property (nonatomic) int locationCadence;
@property (nonatomic) int locationType;
@property (nonatomic) bool notificationsEnabled;
@property (nonatomic) bool siriSuggestionsEnabled;
@property (nonatomic) bool weatherShown;

+ (bool)isValid:(id)arg1;

- (int)StringAsLocationCadence:(id)arg1;
- (int)StringAsLocationType:(id)arg1;
- (bool)airQualityShown;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAirQualityShown;
- (bool)hasLearnFromAppEnabled;
- (bool)hasLocationCadence;
- (bool)hasLocationType;
- (bool)hasNotificationsEnabled;
- (bool)hasSiriSuggestionsEnabled;
- (bool)hasWeatherShown;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)learnFromAppEnabled;
- (int)locationCadence;
- (id)locationCadenceAsString:(int)arg1;
- (int)locationType;
- (id)locationTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)notificationsEnabled;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAirQualityShown:(bool)arg1;
- (void)setHasAirQualityShown:(bool)arg1;
- (void)setHasLearnFromAppEnabled:(bool)arg1;
- (void)setHasLocationCadence:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasNotificationsEnabled:(bool)arg1;
- (void)setHasSiriSuggestionsEnabled:(bool)arg1;
- (void)setHasWeatherShown:(bool)arg1;
- (void)setLearnFromAppEnabled:(bool)arg1;
- (void)setLocationCadence:(int)arg1;
- (void)setLocationType:(int)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setSiriSuggestionsEnabled:(bool)arg1;
- (void)setWeatherShown:(bool)arg1;
- (bool)siriSuggestionsEnabled;
- (bool)weatherShown;
- (void)writeTo:(id)arg1;

@end
