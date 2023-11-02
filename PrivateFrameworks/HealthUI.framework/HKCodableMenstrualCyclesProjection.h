
@interface HKCodableMenstrualCyclesProjection : PBCodable <NSCopying> {
    HKCodableDayIndexRange * _allDays;
    long long  _daysOffsetFromCalendarMethod;
    double  _endMean;
    double  _endStandardDeviation;
    struct APPLE_HKCodableMenstrualCyclesProjection_1 { 
        unsigned int daysOffsetFromCalendarMethod : 1; 
        unsigned int endMean : 1; 
        unsigned int endStandardDeviation : 1; 
        unsigned int predictionPrimarySource : 1; 
        unsigned int startMean : 1; 
        unsigned int startStandardDeviation : 1; 
        unsigned int isPartiallyLogged : 1; 
    }  _has;
    bool  _isPartiallyLogged;
    long long  _predictionPrimarySource;
    double  _startMean;
    double  _startStandardDeviation;
}

@property (nonatomic, retain) HKCodableDayIndexRange *allDays;
@property (nonatomic) long long daysOffsetFromCalendarMethod;
@property (nonatomic) double endMean;
@property (nonatomic) double endStandardDeviation;
@property (nonatomic, readonly) bool hasAllDays;
@property (nonatomic) bool hasDaysOffsetFromCalendarMethod;
@property (nonatomic) bool hasEndMean;
@property (nonatomic) bool hasEndStandardDeviation;
@property (nonatomic) bool hasIsPartiallyLogged;
@property (nonatomic) bool hasPredictionPrimarySource;
@property (nonatomic) bool hasStartMean;
@property (nonatomic) bool hasStartStandardDeviation;
@property (nonatomic) bool isPartiallyLogged;
@property (nonatomic) long long predictionPrimarySource;
@property (nonatomic) double startMean;
@property (nonatomic) double startStandardDeviation;

- (void).cxx_destruct;
- (id)allDays;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)daysOffsetFromCalendarMethod;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endMean;
- (double)endStandardDeviation;
- (bool)hasAllDays;
- (bool)hasDaysOffsetFromCalendarMethod;
- (bool)hasEndMean;
- (bool)hasEndStandardDeviation;
- (bool)hasIsPartiallyLogged;
- (bool)hasPredictionPrimarySource;
- (bool)hasStartMean;
- (bool)hasStartStandardDeviation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPartiallyLogged;
- (void)mergeFrom:(id)arg1;
- (long long)predictionPrimarySource;
- (bool)readFrom:(id)arg1;
- (void)setAllDays:(id)arg1;
- (void)setDaysOffsetFromCalendarMethod:(long long)arg1;
- (void)setEndMean:(double)arg1;
- (void)setEndStandardDeviation:(double)arg1;
- (void)setHasDaysOffsetFromCalendarMethod:(bool)arg1;
- (void)setHasEndMean:(bool)arg1;
- (void)setHasEndStandardDeviation:(bool)arg1;
- (void)setHasIsPartiallyLogged:(bool)arg1;
- (void)setHasPredictionPrimarySource:(bool)arg1;
- (void)setHasStartMean:(bool)arg1;
- (void)setHasStartStandardDeviation:(bool)arg1;
- (void)setIsPartiallyLogged:(bool)arg1;
- (void)setPredictionPrimarySource:(long long)arg1;
- (void)setStartMean:(double)arg1;
- (void)setStartStandardDeviation:(double)arg1;
- (double)startMean;
- (double)startStandardDeviation;
- (void)writeTo:(id)arg1;

@end
