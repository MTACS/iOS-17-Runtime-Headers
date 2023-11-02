
@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {
    int  _activeNavMode;
    struct { 
        unsigned int has_activeNavMode : 1; 
        unsigned int has_isAirQualityShown : 1; 
        unsigned int has_isLookAroundEntryIconShown : 1; 
        unsigned int has_isVenueExperienceShown : 1; 
        unsigned int has_isWeatherShown : 1; 
    }  _flags;
    bool  _isAirQualityShown;
    bool  _isLookAroundEntryIconShown;
    bool  _isVenueExperienceShown;
    bool  _isWeatherShown;
}

@property (nonatomic) int activeNavMode;
@property (nonatomic) bool hasActiveNavMode;
@property (nonatomic) bool hasIsAirQualityShown;
@property (nonatomic) bool hasIsLookAroundEntryIconShown;
@property (nonatomic) bool hasIsVenueExperienceShown;
@property (nonatomic) bool hasIsWeatherShown;
@property (nonatomic) bool isAirQualityShown;
@property (nonatomic) bool isLookAroundEntryIconShown;
@property (nonatomic) bool isVenueExperienceShown;
@property (nonatomic) bool isWeatherShown;

+ (bool)isValid:(id)arg1;

- (int)StringAsActiveNavMode:(id)arg1;
- (int)activeNavMode;
- (id)activeNavModeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveNavMode;
- (bool)hasIsAirQualityShown;
- (bool)hasIsLookAroundEntryIconShown;
- (bool)hasIsVenueExperienceShown;
- (bool)hasIsWeatherShown;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAirQualityShown;
- (bool)isEqual:(id)arg1;
- (bool)isLookAroundEntryIconShown;
- (bool)isVenueExperienceShown;
- (bool)isWeatherShown;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveNavMode:(int)arg1;
- (void)setHasActiveNavMode:(bool)arg1;
- (void)setHasIsAirQualityShown:(bool)arg1;
- (void)setHasIsLookAroundEntryIconShown:(bool)arg1;
- (void)setHasIsVenueExperienceShown:(bool)arg1;
- (void)setHasIsWeatherShown:(bool)arg1;
- (void)setIsAirQualityShown:(bool)arg1;
- (void)setIsLookAroundEntryIconShown:(bool)arg1;
- (void)setIsVenueExperienceShown:(bool)arg1;
- (void)setIsWeatherShown:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
