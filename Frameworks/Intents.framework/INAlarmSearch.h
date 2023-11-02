
@interface INAlarmSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _alarmReferenceType;
    long long  _alarmSearchStatus;
    NSString * _identifier;
    NSNumber * _includeSleepAlarm;
    NSNumber * _isMeridianInferred;
    INSpeakableString * _label;
    long long  _period;
    INDateComponentsRange * _time;
}

@property (nonatomic, readonly) long long alarmReferenceType;
@property (nonatomic, readonly) long long alarmSearchStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSNumber *includeSleepAlarm;
@property (nonatomic, readonly, copy) NSNumber *isMeridianInferred;
@property (nonatomic, readonly, copy) INSpeakableString *label;
@property (nonatomic, readonly) long long period;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INDateComponentsRange *time;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)alarmReferenceType;
- (long long)alarmSearchStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)includeSleepAlarm;
- (id)initWithAlarmReferenceType:(long long)arg1 identifier:(id)arg2 time:(id)arg3 label:(id)arg4 alarmSearchStatus:(long long)arg5 includeSleepAlarm:(id)arg6 period:(long long)arg7 isMeridianInferred:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isMeridianInferred;
- (id)label;
- (long long)period;
- (id)time;

@end
