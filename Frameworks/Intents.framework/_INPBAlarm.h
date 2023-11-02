
@interface _INPBAlarm : PBCodable <NSCopying, NSSecureCoding, _INPBAlarm> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _alarmRepeatScheduleOptions;
    _INPBDateTime * _dateTime;
    bool  _enabled;
    bool  _firing;
    struct { 
        unsigned int enabled : 1; 
        unsigned int firing : 1; 
    }  _has;
    NSString * _identifier;
    _INPBDataString * _label;
    _INPBSleepAlarmAttribute * _sleepAlarmAttribute;
}

@property (nonatomic, readonly) int*alarmRepeatScheduleOptions;
@property (nonatomic, readonly) unsigned long long alarmRepeatScheduleOptionsCount;
@property (nonatomic, retain) _INPBDateTime *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic) bool firing;
@property (nonatomic, readonly) bool hasDateTime;
@property (nonatomic) bool hasEnabled;
@property (nonatomic) bool hasFiring;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasSleepAlarmAttribute;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBDataString *label;
@property (nonatomic, retain) _INPBSleepAlarmAttribute *sleepAlarmAttribute;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAlarmRepeatScheduleOptions:(id)arg1;
- (void)addAlarmRepeatScheduleOptions:(int)arg1;
- (int*)alarmRepeatScheduleOptions;
- (id)alarmRepeatScheduleOptionsAsString:(int)arg1;
- (int)alarmRepeatScheduleOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmRepeatScheduleOptionsCount;
- (void)clearAlarmRepeatScheduleOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (bool)firing;
- (bool)hasDateTime;
- (bool)hasEnabled;
- (bool)hasFiring;
- (bool)hasIdentifier;
- (bool)hasLabel;
- (bool)hasSleepAlarmAttribute;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setAlarmRepeatScheduleOptions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDateTime:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFiring:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasFiring:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSleepAlarmAttribute:(id)arg1;
- (id)sleepAlarmAttribute;
- (void)writeTo:(id)arg1;

@end
