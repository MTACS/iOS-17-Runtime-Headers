
@interface _INPBChangeAlarmStatusIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBChangeAlarmStatusIntentResponse> {
    struct { }  _has;
    NSArray * _modifiedAlarms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *modifiedAlarms;
@property (nonatomic, readonly) unsigned long long modifiedAlarmsCount;
@property (readonly) Class superclass;

+ (Class)modifiedAlarmsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addModifiedAlarms:(id)arg1;
- (void)clearModifiedAlarms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modifiedAlarms;
- (id)modifiedAlarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)modifiedAlarmsCount;
- (bool)readFrom:(id)arg1;
- (void)setModifiedAlarms:(id)arg1;
- (void)writeTo:(id)arg1;

@end
