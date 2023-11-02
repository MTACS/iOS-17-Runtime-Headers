
@interface HKCodableHandwashingEvent : PBCodable <NSCopying> {
    long long  _averageDailyCount;
    HKCodableQuantity * _averageDuration;
    long long  _count;
    double  _endDate;
    struct APPLE_HKCodableHandwashingEvent_1 { 
        unsigned int averageDailyCount : 1; 
        unsigned int count : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int meetsGoal : 1; 
    }  _has;
    bool  _meetsGoal;
    double  _startDate;
}

@property (nonatomic) long long averageDailyCount;
@property (nonatomic, retain) HKCodableQuantity *averageDuration;
@property (nonatomic) long long count;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasAverageDailyCount;
@property (nonatomic, readonly) bool hasAverageDuration;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasMeetsGoal;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool meetsGoal;
@property (nonatomic) double startDate;

- (void).cxx_destruct;
- (long long)averageDailyCount;
- (id)averageDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasAverageDailyCount;
- (bool)hasAverageDuration;
- (bool)hasCount;
- (bool)hasEndDate;
- (bool)hasMeetsGoal;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)meetsGoal;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAverageDailyCount:(long long)arg1;
- (void)setAverageDuration:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasAverageDailyCount:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasMeetsGoal:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setMeetsGoal:(bool)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
