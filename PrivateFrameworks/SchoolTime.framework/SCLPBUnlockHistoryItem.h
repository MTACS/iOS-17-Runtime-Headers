
@interface SCLPBUnlockHistoryItem : PBCodable <NSCopying> {
    NSString * _calendarIdentifier;
    double  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int startTimeIntervalSinceReferenceDate : 1; 
        unsigned int scheduleEndHour : 1; 
        unsigned int scheduleEndMinute : 1; 
        unsigned int scheduleStartHour : 1; 
        unsigned int scheduleStartMinute : 1; 
    }  _has;
    unsigned int  _scheduleEndHour;
    unsigned int  _scheduleEndMinute;
    unsigned int  _scheduleStartHour;
    unsigned int  _scheduleStartMinute;
    double  _startTimeIntervalSinceReferenceDate;
    NSString * _timeZoneName;
}

@property (nonatomic, retain) NSString *calendarIdentifier;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool hasCalendarIdentifier;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasScheduleEndHour;
@property (nonatomic) bool hasScheduleEndMinute;
@property (nonatomic) bool hasScheduleStartHour;
@property (nonatomic) bool hasScheduleStartMinute;
@property (nonatomic) bool hasStartTimeIntervalSinceReferenceDate;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic) unsigned int scheduleEndHour;
@property (nonatomic) unsigned int scheduleEndMinute;
@property (nonatomic) unsigned int scheduleStartHour;
@property (nonatomic) unsigned int scheduleStartMinute;
@property (nonatomic) double startTimeIntervalSinceReferenceDate;
@property (nonatomic, retain) NSString *timeZoneName;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasCalendarIdentifier;
- (bool)hasDuration;
- (bool)hasScheduleEndHour;
- (bool)hasScheduleEndMinute;
- (bool)hasScheduleStartHour;
- (bool)hasScheduleStartMinute;
- (bool)hasStartTimeIntervalSinceReferenceDate;
- (bool)hasTimeZoneName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)scheduleEndHour;
- (unsigned int)scheduleEndMinute;
- (unsigned int)scheduleStartHour;
- (unsigned int)scheduleStartMinute;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasScheduleEndHour:(bool)arg1;
- (void)setHasScheduleEndMinute:(bool)arg1;
- (void)setHasScheduleStartHour:(bool)arg1;
- (void)setHasScheduleStartMinute:(bool)arg1;
- (void)setHasStartTimeIntervalSinceReferenceDate:(bool)arg1;
- (void)setScheduleEndHour:(unsigned int)arg1;
- (void)setScheduleEndMinute:(unsigned int)arg1;
- (void)setScheduleStartHour:(unsigned int)arg1;
- (void)setScheduleStartMinute:(unsigned int)arg1;
- (void)setStartTimeIntervalSinceReferenceDate:(double)arg1;
- (void)setTimeZoneName:(id)arg1;
- (double)startTimeIntervalSinceReferenceDate;
- (id)timeZoneName;
- (void)writeTo:(id)arg1;

@end
