
@interface ATXPBBlendingSessionDeviceContext : PBCodable <NSCopying> {
    int  _currentLOIType;
    bool  _dateInWeekend;
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int secondsBeforeBlendingUpdate : 1; 
        unsigned int currentLOIType : 1; 
        unsigned int dayOfWeek : 1; 
        unsigned int timeOfDay : 1; 
        unsigned int dateInWeekend : 1; 
        unsigned int lastUnlockMoreThan1HourAgo : 1; 
        unsigned int lastUnlockMoreThan30MinutesAgo : 1; 
    }  _has;
    bool  _lastUnlockMoreThan1HourAgo;
    bool  _lastUnlockMoreThan30MinutesAgo;
    double  _secondsBeforeBlendingUpdate;
    unsigned int  _timeOfDay;
}

@property (nonatomic) int currentLOIType;
@property (nonatomic) bool dateInWeekend;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) bool hasCurrentLOIType;
@property (nonatomic) bool hasDateInWeekend;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasLastUnlockMoreThan1HourAgo;
@property (nonatomic) bool hasLastUnlockMoreThan30MinutesAgo;
@property (nonatomic) bool hasSecondsBeforeBlendingUpdate;
@property (nonatomic) bool hasTimeOfDay;
@property (nonatomic) bool lastUnlockMoreThan1HourAgo;
@property (nonatomic) bool lastUnlockMoreThan30MinutesAgo;
@property (nonatomic) double secondsBeforeBlendingUpdate;
@property (nonatomic) unsigned int timeOfDay;

- (int)StringAsCurrentLOIType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)currentLOIType;
- (id)currentLOITypeAsString:(int)arg1;
- (bool)dateInWeekend;
- (unsigned int)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentLOIType;
- (bool)hasDateInWeekend;
- (bool)hasDayOfWeek;
- (bool)hasLastUnlockMoreThan1HourAgo;
- (bool)hasLastUnlockMoreThan30MinutesAgo;
- (bool)hasSecondsBeforeBlendingUpdate;
- (bool)hasTimeOfDay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)lastUnlockMoreThan1HourAgo;
- (bool)lastUnlockMoreThan30MinutesAgo;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)secondsBeforeBlendingUpdate;
- (void)setCurrentLOIType:(int)arg1;
- (void)setDateInWeekend:(bool)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setHasCurrentLOIType:(bool)arg1;
- (void)setHasDateInWeekend:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasLastUnlockMoreThan1HourAgo:(bool)arg1;
- (void)setHasLastUnlockMoreThan30MinutesAgo:(bool)arg1;
- (void)setHasSecondsBeforeBlendingUpdate:(bool)arg1;
- (void)setHasTimeOfDay:(bool)arg1;
- (void)setLastUnlockMoreThan1HourAgo:(bool)arg1;
- (void)setLastUnlockMoreThan30MinutesAgo:(bool)arg1;
- (void)setSecondsBeforeBlendingUpdate:(double)arg1;
- (void)setTimeOfDay:(unsigned int)arg1;
- (unsigned int)timeOfDay;
- (void)writeTo:(id)arg1;

@end
