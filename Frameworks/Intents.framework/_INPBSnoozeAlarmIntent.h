
@interface _INPBSnoozeAlarmIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSnoozeAlarmIntent> {
    NSArray * _alarms;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
}

@property (nonatomic, copy) NSArray *alarms;
@property (nonatomic, readonly) unsigned long long alarmsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;

+ (Class)alarmsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAlarms:(id)arg1;
- (id)alarms;
- (id)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
