
@interface GEONavigationGuidanceState : PBCodable <NSCopying> {
    struct { 
        unsigned int has_guidanceLevelIgnoringTimeCriterion : 1; 
        unsigned int has_guidanceLevel : 1; 
        unsigned int has_navigationState : 1; 
        unsigned int has_navigationType : 1; 
        unsigned int has_trackedTransportType : 1; 
        unsigned int has_shouldSuppressCellularDataAlerts : 1; 
    }  _flags;
    int  _guidanceLevel;
    int  _guidanceLevelIgnoringTimeCriterion;
    int  _navigationState;
    int  _navigationType;
    bool  _shouldSuppressCellularDataAlerts;
    int  _trackedTransportType;
}

@property (nonatomic) int guidanceLevel;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) bool hasGuidanceLevel;
@property (nonatomic) bool hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) bool hasNavigationState;
@property (nonatomic) bool hasNavigationType;
@property (nonatomic) bool hasShouldSuppressCellularDataAlerts;
@property (nonatomic) bool hasTrackedTransportType;
@property (nonatomic) int navigationState;
@property (nonatomic) int navigationType;
@property (nonatomic) bool shouldSuppressCellularDataAlerts;
@property (nonatomic) int trackedTransportType;

+ (bool)isValid:(id)arg1;

- (int)StringAsGuidanceLevel:(id)arg1;
- (int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1;
- (int)StringAsNavigationState:(id)arg1;
- (int)StringAsNavigationType:(id)arg1;
- (int)StringAsTrackedTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)guidanceLevel;
- (id)guidanceLevelAsString:(int)arg1;
- (int)guidanceLevelIgnoringTimeCriterion;
- (id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1;
- (bool)hasGuidanceLevel;
- (bool)hasGuidanceLevelIgnoringTimeCriterion;
- (bool)hasNavigationState;
- (bool)hasNavigationType;
- (bool)hasShouldSuppressCellularDataAlerts;
- (bool)hasTrackedTransportType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGuidanceLevel:(int)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTransportType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)navigationState;
- (id)navigationStateAsString:(int)arg1;
- (int)navigationType;
- (id)navigationTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGuidanceLevel:(int)arg1;
- (void)setGuidanceLevelIgnoringTimeCriterion:(int)arg1;
- (void)setHasGuidanceLevel:(bool)arg1;
- (void)setHasGuidanceLevelIgnoringTimeCriterion:(bool)arg1;
- (void)setHasNavigationState:(bool)arg1;
- (void)setHasNavigationType:(bool)arg1;
- (void)setHasShouldSuppressCellularDataAlerts:(bool)arg1;
- (void)setHasTrackedTransportType:(bool)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNavigationType:(int)arg1;
- (void)setShouldSuppressCellularDataAlerts:(bool)arg1;
- (void)setTrackedTransportType:(int)arg1;
- (bool)shouldSuppressCellularDataAlerts;
- (int)trackedTransportType;
- (id)trackedTransportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
