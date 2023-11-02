
@interface HDCodableWorkoutActivity : PBCodable <NSCopying> {
    HDCodableWorkoutConfiguration * _configuration;
    double  _duration;
    double  _endDate;
    struct { 
        unsigned int duration : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
    }  _has;
    HDCodableMetadataDictionary * _metadata;
    double  _startDate;
    NSMutableArray * _statistics;
    NSString * _uuid;
}

@property (nonatomic, retain) HDCodableWorkoutConfiguration *configuration;
@property (nonatomic) double duration;
@property (nonatomic) double endDate;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndDate;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) HDCodableMetadataDictionary *metadata;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSMutableArray *statistics;
@property (nonatomic, retain) NSString *uuid;

+ (id)codableForWorkoutActivity:(id)arg1;
+ (id)codableStatisticsForActivity:(id)arg1;
+ (id)codablesForWorkoutActivities:(id)arg1;
+ (Class)statisticsType;

- (void).cxx_destruct;
- (void)addStatistics:(id)arg1;
- (void)clearStatistics;
- (id)configuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)endDate;
- (bool)hasConfiguration;
- (bool)hasDuration;
- (bool)hasEndDate;
- (bool)hasMetadata;
- (bool)hasStartDate;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setStatistics:(id)arg1;
- (void)setUuid:(id)arg1;
- (double)startDate;
- (id)statistics;
- (id)statisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)statisticsCount;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
