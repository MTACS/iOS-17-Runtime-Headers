
@interface INAlarm : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    unsigned long long  _alarmRepeatScheduleOptions;
    NSDateComponents * _dateTime;
    NSNumber * _enabled;
    NSNumber * _firing;
    NSString * _identifier;
    INSpeakableString * _label;
    INSleepAlarmAttribute * _sleepAlarmAttribute;
}

@property (nonatomic, readonly) unsigned long long alarmRepeatScheduleOptions;
@property (nonatomic, readonly, copy) NSDateComponents *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enabled;
@property (nonatomic, readonly, copy) NSNumber *firing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) INSpeakableString *label;
@property (nonatomic, readonly, copy) INSleepAlarmAttribute *sleepAlarmAttribute;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (unsigned long long)alarmRepeatScheduleOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)firing;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateTime:(id)arg2 label:(id)arg3 enabled:(id)arg4 firing:(id)arg5 alarmRepeatScheduleOptions:(unsigned long long)arg6 sleepAlarmAttribute:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)sleepAlarmAttribute;

@end
