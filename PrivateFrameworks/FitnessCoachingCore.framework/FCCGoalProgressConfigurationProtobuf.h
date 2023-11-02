
@interface FCCGoalProgressConfigurationProtobuf : PBCodable <NSCopying> {
    FCCAlmostThereConfigurationProtobuf * _almostThereConfiguration;
    FCCAtypicalDayConfigurationProtobuf * _atypicalDayConfiguration;
    FCCCompletionOffTrackConfigurationProtobuf * _completionOffTrackConfiguration;
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
        unsigned int userEndOfDayDate : 1; 
        unsigned int userStartOfDayDate : 1; 
        unsigned int minimumNumberOfActiveDays : 1; 
    }  _has;
    int  _minimumNumberOfActiveDays;
    double  _userEndOfDayDate;
    double  _userStartOfDayDate;
}

@property (nonatomic, retain) FCCAlmostThereConfigurationProtobuf *almostThereConfiguration;
@property (nonatomic, retain) FCCAtypicalDayConfigurationProtobuf *atypicalDayConfiguration;
@property (nonatomic, retain) FCCCompletionOffTrackConfigurationProtobuf *completionOffTrackConfiguration;
@property (nonatomic) double expirationDate;
@property (nonatomic, readonly) bool hasAlmostThereConfiguration;
@property (nonatomic, readonly) bool hasAtypicalDayConfiguration;
@property (nonatomic, readonly) bool hasCompletionOffTrackConfiguration;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic) bool hasMinimumNumberOfActiveDays;
@property (nonatomic) bool hasUserEndOfDayDate;
@property (nonatomic) bool hasUserStartOfDayDate;
@property (nonatomic) int minimumNumberOfActiveDays;
@property (nonatomic) double userEndOfDayDate;
@property (nonatomic) double userStartOfDayDate;

- (void).cxx_destruct;
- (id)almostThereConfiguration;
- (id)atypicalDayConfiguration;
- (id)completionOffTrackConfiguration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasAlmostThereConfiguration;
- (bool)hasAtypicalDayConfiguration;
- (bool)hasCompletionOffTrackConfiguration;
- (bool)hasExpirationDate;
- (bool)hasMinimumNumberOfActiveDays;
- (bool)hasUserEndOfDayDate;
- (bool)hasUserStartOfDayDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)minimumNumberOfActiveDays;
- (bool)readFrom:(id)arg1;
- (void)setAlmostThereConfiguration:(id)arg1;
- (void)setAtypicalDayConfiguration:(id)arg1;
- (void)setCompletionOffTrackConfiguration:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setHasMinimumNumberOfActiveDays:(bool)arg1;
- (void)setHasUserEndOfDayDate:(bool)arg1;
- (void)setHasUserStartOfDayDate:(bool)arg1;
- (void)setMinimumNumberOfActiveDays:(int)arg1;
- (void)setUserEndOfDayDate:(double)arg1;
- (void)setUserStartOfDayDate:(double)arg1;
- (double)userEndOfDayDate;
- (double)userStartOfDayDate;
- (void)writeTo:(id)arg1;

@end
