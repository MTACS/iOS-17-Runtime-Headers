
@interface _INPBCreateAlarmIntent : PBCodable <NSCopying, NSSecureCoding, _INPBCreateAlarmIntent> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _alarmRepeatScheduleOptions;
    struct { 
        unsigned int relativeOffsetInMinutes : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _label;
    int  _relativeOffsetInMinutes;
    _INPBDateTimeRange * _time;
}

@property (nonatomic, readonly) int*alarmRepeatScheduleOptions;
@property (nonatomic, readonly) unsigned long long alarmRepeatScheduleOptionsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasRelativeOffsetInMinutes;
@property (nonatomic, readonly) bool hasTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDataString *label;
@property (nonatomic) int relativeOffsetInMinutes;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDateTimeRange *time;

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
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasLabel;
- (bool)hasRelativeOffsetInMinutes;
- (bool)hasTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (int)relativeOffsetInMinutes;
- (void)setAlarmRepeatScheduleOptions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasRelativeOffsetInMinutes:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRelativeOffsetInMinutes:(int)arg1;
- (void)setTime:(id)arg1;
- (id)time;
- (void)writeTo:(id)arg1;

@end
