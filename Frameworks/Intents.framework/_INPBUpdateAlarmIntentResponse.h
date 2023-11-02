
@interface _INPBUpdateAlarmIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBUpdateAlarmIntentResponse> {
    NSArray * _conflictAlarms;
    struct { }  _has;
    _INPBAlarm * _updatedAlarm;
}

@property (nonatomic, copy) NSArray *conflictAlarms;
@property (nonatomic, readonly) unsigned long long conflictAlarmsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUpdatedAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBAlarm *updatedAlarm;

+ (Class)conflictAlarmsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addConflictAlarms:(id)arg1;
- (void)clearConflictAlarms;
- (id)conflictAlarms;
- (id)conflictAlarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictAlarmsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUpdatedAlarm;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConflictAlarms:(id)arg1;
- (void)setUpdatedAlarm:(id)arg1;
- (id)updatedAlarm;
- (void)writeTo:(id)arg1;

@end
