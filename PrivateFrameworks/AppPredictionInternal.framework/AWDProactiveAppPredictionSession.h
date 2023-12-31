
@interface AWDProactiveAppPredictionSession : PBCodable <NSCopying> {
    NSString * _aBGroup;
    NSString * _aPREngagementType;
    NSString * _aPRFeedbackSource;
    NSString * _aPRSiriExperience;
    NSMutableArray * _appSequences;
    int  _consumerSubType;
    NSString * _consumerType;
    int  _coreMotionCurrentMotionLaunches;
    int  _coreMotionLaunches;
    int  _currentLOIType;
    int  _dayOfWeek;
    int  _engagedApp;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int consumerSubType : 1; 
        unsigned int coreMotionCurrentMotionLaunches : 1; 
        unsigned int coreMotionLaunches : 1; 
        unsigned int currentLOIType : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int engagedApp : 1; 
        unsigned int locationDistanceFromGym : 1; 
        unsigned int locationDistanceFromHome : 1; 
        unsigned int locationDistanceFromSchool : 1; 
        unsigned int locationDistanceFromWork : 1; 
        unsigned int outcome : 1; 
        unsigned int predictionCacheAge : 1; 
        unsigned int sessionLogVersion : 1; 
        unsigned int timeOfDayInterval : 1; 
        unsigned int totalAirplaneModeLaunches : 1; 
        unsigned int totalCurrentDayOfWeekLaunches : 1; 
        unsigned int totalDayOfWeekLaunches : 1; 
        unsigned int totalLaunchSequences : 1; 
        unsigned int totalLaunches : 1; 
        unsigned int totalSSIDLaunches : 1; 
        unsigned int totalSpotlightLaunches : 1; 
        unsigned int totalSpotlightTimeOfDayLaunches : 1; 
        unsigned int totalTimeOfDayLaunches : 1; 
        unsigned int totalTrendingLaunches : 1; 
        unsigned int totalWifiLaunches : 1; 
        unsigned int inAirplaneMode : 1; 
        unsigned int isInternalBuild : 1; 
    }  _has;
    bool  _inAirplaneMode;
    NSString * _intentType;
    bool  _isInternalBuild;
    int  _locationDistanceFromGym;
    int  _locationDistanceFromHome;
    int  _locationDistanceFromSchool;
    int  _locationDistanceFromWork;
    int  _outcome;
    int  _predictionCacheAge;
    NSString * _sessionId;
    int  _sessionLogVersion;
    int  _timeOfDayInterval;
    unsigned long long  _timestamp;
    int  _totalAirplaneModeLaunches;
    int  _totalCurrentDayOfWeekLaunches;
    int  _totalDayOfWeekLaunches;
    int  _totalLaunchSequences;
    int  _totalLaunches;
    int  _totalSSIDLaunches;
    int  _totalSpotlightLaunches;
    int  _totalSpotlightTimeOfDayLaunches;
    int  _totalTimeOfDayLaunches;
    int  _totalTrendingLaunches;
    int  _totalWifiLaunches;
}

@property (nonatomic, retain) NSString *aBGroup;
@property (nonatomic, retain) NSString *aPREngagementType;
@property (nonatomic, retain) NSString *aPRFeedbackSource;
@property (nonatomic, retain) NSString *aPRSiriExperience;
@property (nonatomic, retain) NSMutableArray *appSequences;
@property (nonatomic) int consumerSubType;
@property (nonatomic, retain) NSString *consumerType;
@property (nonatomic) int coreMotionCurrentMotionLaunches;
@property (nonatomic) int coreMotionLaunches;
@property (nonatomic) int currentLOIType;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) int engagedApp;
@property (nonatomic, readonly) bool hasABGroup;
@property (nonatomic, readonly) bool hasAPREngagementType;
@property (nonatomic, readonly) bool hasAPRFeedbackSource;
@property (nonatomic, readonly) bool hasAPRSiriExperience;
@property (nonatomic) bool hasConsumerSubType;
@property (nonatomic, readonly) bool hasConsumerType;
@property (nonatomic) bool hasCoreMotionCurrentMotionLaunches;
@property (nonatomic) bool hasCoreMotionLaunches;
@property (nonatomic) bool hasCurrentLOIType;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasEngagedApp;
@property (nonatomic) bool hasInAirplaneMode;
@property (nonatomic, readonly) bool hasIntentType;
@property (nonatomic) bool hasIsInternalBuild;
@property (nonatomic) bool hasLocationDistanceFromGym;
@property (nonatomic) bool hasLocationDistanceFromHome;
@property (nonatomic) bool hasLocationDistanceFromSchool;
@property (nonatomic) bool hasLocationDistanceFromWork;
@property (nonatomic) bool hasOutcome;
@property (nonatomic) bool hasPredictionCacheAge;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasSessionLogVersion;
@property (nonatomic) bool hasTimeOfDayInterval;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalAirplaneModeLaunches;
@property (nonatomic) bool hasTotalCurrentDayOfWeekLaunches;
@property (nonatomic) bool hasTotalDayOfWeekLaunches;
@property (nonatomic) bool hasTotalLaunchSequences;
@property (nonatomic) bool hasTotalLaunches;
@property (nonatomic) bool hasTotalSSIDLaunches;
@property (nonatomic) bool hasTotalSpotlightLaunches;
@property (nonatomic) bool hasTotalSpotlightTimeOfDayLaunches;
@property (nonatomic) bool hasTotalTimeOfDayLaunches;
@property (nonatomic) bool hasTotalTrendingLaunches;
@property (nonatomic) bool hasTotalWifiLaunches;
@property (nonatomic) bool inAirplaneMode;
@property (nonatomic, retain) NSString *intentType;
@property (nonatomic) bool isInternalBuild;
@property (nonatomic) int locationDistanceFromGym;
@property (nonatomic) int locationDistanceFromHome;
@property (nonatomic) int locationDistanceFromSchool;
@property (nonatomic) int locationDistanceFromWork;
@property (nonatomic) int outcome;
@property (nonatomic) int predictionCacheAge;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) int sessionLogVersion;
@property (nonatomic) int timeOfDayInterval;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int totalAirplaneModeLaunches;
@property (nonatomic) int totalCurrentDayOfWeekLaunches;
@property (nonatomic) int totalDayOfWeekLaunches;
@property (nonatomic) int totalLaunchSequences;
@property (nonatomic) int totalLaunches;
@property (nonatomic) int totalSSIDLaunches;
@property (nonatomic) int totalSpotlightLaunches;
@property (nonatomic) int totalSpotlightTimeOfDayLaunches;
@property (nonatomic) int totalTimeOfDayLaunches;
@property (nonatomic) int totalTrendingLaunches;
@property (nonatomic) int totalWifiLaunches;

+ (Class)appSequenceType;

- (void).cxx_destruct;
- (int)StringAsConsumerSubType:(id)arg1;
- (int)StringAsCurrentLOIType:(id)arg1;
- (int)StringAsOutcome:(id)arg1;
- (id)aBGroup;
- (id)aPREngagementType;
- (id)aPRFeedbackSource;
- (id)aPRSiriExperience;
- (void)addAppSequence:(id)arg1;
- (id)appSequenceAtIndex:(unsigned long long)arg1;
- (id)appSequences;
- (unsigned long long)appSequencesCount;
- (void)clearAppSequences;
- (int)consumerSubType;
- (id)consumerSubTypeAsString:(int)arg1;
- (id)consumerType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)coreMotionCurrentMotionLaunches;
- (int)coreMotionLaunches;
- (int)currentLOIType;
- (id)currentLOITypeAsString:(int)arg1;
- (int)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engagedApp;
- (bool)hasABGroup;
- (bool)hasAPREngagementType;
- (bool)hasAPRFeedbackSource;
- (bool)hasAPRSiriExperience;
- (bool)hasConsumerSubType;
- (bool)hasConsumerType;
- (bool)hasCoreMotionCurrentMotionLaunches;
- (bool)hasCoreMotionLaunches;
- (bool)hasCurrentLOIType;
- (bool)hasDayOfWeek;
- (bool)hasEngagedApp;
- (bool)hasInAirplaneMode;
- (bool)hasIntentType;
- (bool)hasIsInternalBuild;
- (bool)hasLocationDistanceFromGym;
- (bool)hasLocationDistanceFromHome;
- (bool)hasLocationDistanceFromSchool;
- (bool)hasLocationDistanceFromWork;
- (bool)hasOutcome;
- (bool)hasPredictionCacheAge;
- (bool)hasSessionId;
- (bool)hasSessionLogVersion;
- (bool)hasTimeOfDayInterval;
- (bool)hasTimestamp;
- (bool)hasTotalAirplaneModeLaunches;
- (bool)hasTotalCurrentDayOfWeekLaunches;
- (bool)hasTotalDayOfWeekLaunches;
- (bool)hasTotalLaunchSequences;
- (bool)hasTotalLaunches;
- (bool)hasTotalSSIDLaunches;
- (bool)hasTotalSpotlightLaunches;
- (bool)hasTotalSpotlightTimeOfDayLaunches;
- (bool)hasTotalTimeOfDayLaunches;
- (bool)hasTotalTrendingLaunches;
- (bool)hasTotalWifiLaunches;
- (unsigned long long)hash;
- (bool)inAirplaneMode;
- (id)intentType;
- (bool)isEqual:(id)arg1;
- (bool)isInternalBuild;
- (int)locationDistanceFromGym;
- (int)locationDistanceFromHome;
- (int)locationDistanceFromSchool;
- (int)locationDistanceFromWork;
- (void)mergeFrom:(id)arg1;
- (int)outcome;
- (id)outcomeAsString:(int)arg1;
- (int)predictionCacheAge;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (int)sessionLogVersion;
- (void)setABGroup:(id)arg1;
- (void)setAPREngagementType:(id)arg1;
- (void)setAPRFeedbackSource:(id)arg1;
- (void)setAPRSiriExperience:(id)arg1;
- (void)setAppSequences:(id)arg1;
- (void)setConsumerSubType:(int)arg1;
- (void)setConsumerType:(id)arg1;
- (void)setCoreMotionCurrentMotionLaunches:(int)arg1;
- (void)setCoreMotionLaunches:(int)arg1;
- (void)setCurrentLOIType:(int)arg1;
- (void)setDayOfWeek:(int)arg1;
- (void)setEngagedApp:(int)arg1;
- (void)setHasConsumerSubType:(bool)arg1;
- (void)setHasCoreMotionCurrentMotionLaunches:(bool)arg1;
- (void)setHasCoreMotionLaunches:(bool)arg1;
- (void)setHasCurrentLOIType:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasEngagedApp:(bool)arg1;
- (void)setHasInAirplaneMode:(bool)arg1;
- (void)setHasIsInternalBuild:(bool)arg1;
- (void)setHasLocationDistanceFromGym:(bool)arg1;
- (void)setHasLocationDistanceFromHome:(bool)arg1;
- (void)setHasLocationDistanceFromSchool:(bool)arg1;
- (void)setHasLocationDistanceFromWork:(bool)arg1;
- (void)setHasOutcome:(bool)arg1;
- (void)setHasPredictionCacheAge:(bool)arg1;
- (void)setHasSessionLogVersion:(bool)arg1;
- (void)setHasTimeOfDayInterval:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalAirplaneModeLaunches:(bool)arg1;
- (void)setHasTotalCurrentDayOfWeekLaunches:(bool)arg1;
- (void)setHasTotalDayOfWeekLaunches:(bool)arg1;
- (void)setHasTotalLaunchSequences:(bool)arg1;
- (void)setHasTotalLaunches:(bool)arg1;
- (void)setHasTotalSSIDLaunches:(bool)arg1;
- (void)setHasTotalSpotlightLaunches:(bool)arg1;
- (void)setHasTotalSpotlightTimeOfDayLaunches:(bool)arg1;
- (void)setHasTotalTimeOfDayLaunches:(bool)arg1;
- (void)setHasTotalTrendingLaunches:(bool)arg1;
- (void)setHasTotalWifiLaunches:(bool)arg1;
- (void)setInAirplaneMode:(bool)arg1;
- (void)setIntentType:(id)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setLocationDistanceFromGym:(int)arg1;
- (void)setLocationDistanceFromHome:(int)arg1;
- (void)setLocationDistanceFromSchool:(int)arg1;
- (void)setLocationDistanceFromWork:(int)arg1;
- (void)setOutcome:(int)arg1;
- (void)setPredictionCacheAge:(int)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSessionLogVersion:(int)arg1;
- (void)setTimeOfDayInterval:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalAirplaneModeLaunches:(int)arg1;
- (void)setTotalCurrentDayOfWeekLaunches:(int)arg1;
- (void)setTotalDayOfWeekLaunches:(int)arg1;
- (void)setTotalLaunchSequences:(int)arg1;
- (void)setTotalLaunches:(int)arg1;
- (void)setTotalSSIDLaunches:(int)arg1;
- (void)setTotalSpotlightLaunches:(int)arg1;
- (void)setTotalSpotlightTimeOfDayLaunches:(int)arg1;
- (void)setTotalTimeOfDayLaunches:(int)arg1;
- (void)setTotalTrendingLaunches:(int)arg1;
- (void)setTotalWifiLaunches:(int)arg1;
- (int)timeOfDayInterval;
- (unsigned long long)timestamp;
- (int)totalAirplaneModeLaunches;
- (int)totalCurrentDayOfWeekLaunches;
- (int)totalDayOfWeekLaunches;
- (int)totalLaunchSequences;
- (int)totalLaunches;
- (int)totalSSIDLaunches;
- (int)totalSpotlightLaunches;
- (int)totalSpotlightTimeOfDayLaunches;
- (int)totalTimeOfDayLaunches;
- (int)totalTrendingLaunches;
- (int)totalWifiLaunches;
- (void)writeTo:(id)arg1;

@end
