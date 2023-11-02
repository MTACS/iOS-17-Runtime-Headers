
@interface _INPBAlarmSearch : PBCodable <NSCopying, NSSecureCoding, _INPBAlarmSearch> {
    int  _alarmReferenceType;
    int  _alarmSearchStatus;
    struct { 
        unsigned int alarmReferenceType : 1; 
        unsigned int alarmSearchStatus : 1; 
        unsigned int includeSleepAlarm : 1; 
        unsigned int isMeridianInferred : 1; 
        unsigned int period : 1; 
    }  _has;
    NSString * _identifier;
    bool  _includeSleepAlarm;
    bool  _isMeridianInferred;
    _INPBDataString * _label;
    int  _period;
    _INPBDateTimeRangeValue * _time;
}

@property (nonatomic) int alarmReferenceType;
@property (nonatomic) int alarmSearchStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAlarmReferenceType;
@property (nonatomic) bool hasAlarmSearchStatus;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIncludeSleepAlarm;
@property (nonatomic) bool hasIsMeridianInferred;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasPeriod;
@property (nonatomic, readonly) bool hasTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool includeSleepAlarm;
@property (nonatomic) bool isMeridianInferred;
@property (nonatomic, retain) _INPBDataString *label;
@property (nonatomic) int period;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDateTimeRangeValue *time;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAlarmReferenceType:(id)arg1;
- (int)StringAsAlarmSearchStatus:(id)arg1;
- (int)StringAsPeriod:(id)arg1;
- (int)alarmReferenceType;
- (id)alarmReferenceTypeAsString:(int)arg1;
- (int)alarmSearchStatus;
- (id)alarmSearchStatusAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlarmReferenceType;
- (bool)hasAlarmSearchStatus;
- (bool)hasIdentifier;
- (bool)hasIncludeSleepAlarm;
- (bool)hasIsMeridianInferred;
- (bool)hasLabel;
- (bool)hasPeriod;
- (bool)hasTime;
- (unsigned long long)hash;
- (id)identifier;
- (bool)includeSleepAlarm;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMeridianInferred;
- (id)label;
- (int)period;
- (id)periodAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarmReferenceType:(int)arg1;
- (void)setAlarmSearchStatus:(int)arg1;
- (void)setHasAlarmReferenceType:(bool)arg1;
- (void)setHasAlarmSearchStatus:(bool)arg1;
- (void)setHasIncludeSleepAlarm:(bool)arg1;
- (void)setHasIsMeridianInferred:(bool)arg1;
- (void)setHasPeriod:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIncludeSleepAlarm:(bool)arg1;
- (void)setIsMeridianInferred:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeriod:(int)arg1;
- (void)setTime:(id)arg1;
- (id)time;
- (void)writeTo:(id)arg1;

@end
