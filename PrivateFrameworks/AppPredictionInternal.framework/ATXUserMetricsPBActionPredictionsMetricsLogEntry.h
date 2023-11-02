
@interface ATXUserMetricsPBActionPredictionsMetricsLogEntry : PBCodable <NSCopying> {
    NSString * _cacheId;
    int  _dayOfWeek;
    unsigned int  _engagedActions;
    NSString * _engagedBundleId;
    NSMutableArray * _experiments;
    struct { 
        unsigned int dayOfWeek : 1; 
        unsigned int engagedActions : 1; 
        unsigned int hourOfDay : 1; 
        unsigned int rankOfFirstEngagement : 1; 
        unsigned int shownActions : 1; 
        unsigned int ui : 1; 
    }  _has;
    unsigned int  _hourOfDay;
    unsigned int  _rankOfFirstEngagement;
    unsigned int  _shownActions;
    int  _ui;
    NSString * _userIdentifier;
}

@property (nonatomic, retain) NSString *cacheId;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) unsigned int engagedActions;
@property (nonatomic, retain) NSString *engagedBundleId;
@property (nonatomic, retain) NSMutableArray *experiments;
@property (nonatomic, readonly) bool hasCacheId;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasEngagedActions;
@property (nonatomic, readonly) bool hasEngagedBundleId;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic) bool hasRankOfFirstEngagement;
@property (nonatomic) bool hasShownActions;
@property (nonatomic) bool hasUi;
@property (nonatomic, readonly) bool hasUserIdentifier;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) unsigned int rankOfFirstEngagement;
@property (nonatomic) unsigned int shownActions;
@property (nonatomic) int ui;
@property (nonatomic, retain) NSString *userIdentifier;

+ (Class)experimentsType;

- (void).cxx_destruct;
- (int)StringAsDayOfWeek:(id)arg1;
- (int)StringAsUi:(id)arg1;
- (void)addExperiments:(id)arg1;
- (id)cacheId;
- (void)clearExperiments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dayOfWeek;
- (id)dayOfWeekAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)engagedActions;
- (id)engagedBundleId;
- (id)experiments;
- (id)experimentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentsCount;
- (bool)hasCacheId;
- (bool)hasDayOfWeek;
- (bool)hasEngagedActions;
- (bool)hasEngagedBundleId;
- (bool)hasHourOfDay;
- (bool)hasRankOfFirstEngagement;
- (bool)hasShownActions;
- (bool)hasUi;
- (bool)hasUserIdentifier;
- (unsigned long long)hash;
- (unsigned int)hourOfDay;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)rankOfFirstEngagement;
- (bool)readFrom:(id)arg1;
- (void)setCacheId:(id)arg1;
- (void)setDayOfWeek:(int)arg1;
- (void)setEngagedActions:(unsigned int)arg1;
- (void)setEngagedBundleId:(id)arg1;
- (void)setExperiments:(id)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasEngagedActions:(bool)arg1;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasRankOfFirstEngagement:(bool)arg1;
- (void)setHasShownActions:(bool)arg1;
- (void)setHasUi:(bool)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (void)setRankOfFirstEngagement:(unsigned int)arg1;
- (void)setShownActions:(unsigned int)arg1;
- (void)setUi:(int)arg1;
- (void)setUserIdentifier:(id)arg1;
- (unsigned int)shownActions;
- (int)ui;
- (id)uiAsString:(int)arg1;
- (id)userIdentifier;
- (void)writeTo:(id)arg1;

@end
