
@interface HDCodableMedicationScheduleIntervalData : PBCodable <NSCopying> {
    long long  _cycleIndex;
    long long  _cycleIntervalDays;
    long long  _dayOfWeek;
    double  _dose;
    struct { 
        unsigned int cycleIndex : 1; 
        unsigned int cycleIntervalDays : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int dose : 1; 
    }  _has;
    HDCodableDateComponents * _startTimeComponents;
}

@property (nonatomic) long long cycleIndex;
@property (nonatomic) long long cycleIntervalDays;
@property (nonatomic) long long dayOfWeek;
@property (nonatomic) double dose;
@property (nonatomic) bool hasCycleIndex;
@property (nonatomic) bool hasCycleIntervalDays;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasDose;
@property (nonatomic, readonly) bool hasStartTimeComponents;
@property (nonatomic, retain) HDCodableDateComponents *startTimeComponents;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cycleIndex;
- (long long)cycleIntervalDays;
- (long long)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (double)dose;
- (bool)hasCycleIndex;
- (bool)hasCycleIntervalDays;
- (bool)hasDayOfWeek;
- (bool)hasDose;
- (bool)hasStartTimeComponents;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCycleIndex:(long long)arg1;
- (void)setCycleIntervalDays:(long long)arg1;
- (void)setDayOfWeek:(long long)arg1;
- (void)setDose:(double)arg1;
- (void)setHasCycleIndex:(bool)arg1;
- (void)setHasCycleIntervalDays:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasDose:(bool)arg1;
- (void)setStartTimeComponents:(id)arg1;
- (id)startTimeComponents;
- (void)writeTo:(id)arg1;

@end
