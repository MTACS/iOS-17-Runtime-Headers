
@interface _INPBUpdateAlarmIntent : PBCodable <NSCopying, NSSecureCoding, _INPBUpdateAlarmIntent> {
    _INPBAlarm * _alarm;
    _INPBAlarmSearch * _alarmSearch;
    struct { 
        unsigned int operation : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _operation;
    _INPBDataString * _proposedLabel;
    _INPBDateTimeRange * _proposedTime;
}

@property (nonatomic, retain) _INPBAlarm *alarm;
@property (nonatomic, retain) _INPBAlarmSearch *alarmSearch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlarm;
@property (nonatomic, readonly) bool hasAlarmSearch;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasOperation;
@property (nonatomic, readonly) bool hasProposedLabel;
@property (nonatomic, readonly) bool hasProposedTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int operation;
@property (nonatomic, retain) _INPBDataString *proposedLabel;
@property (nonatomic, retain) _INPBDateTimeRange *proposedTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsOperation:(id)arg1;
- (id)alarm;
- (id)alarmSearch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlarm;
- (bool)hasAlarmSearch;
- (bool)hasIntentMetadata;
- (bool)hasOperation;
- (bool)hasProposedLabel;
- (bool)hasProposedTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)operation;
- (id)operationAsString:(int)arg1;
- (id)proposedLabel;
- (id)proposedTime;
- (bool)readFrom:(id)arg1;
- (void)setAlarm:(id)arg1;
- (void)setAlarmSearch:(id)arg1;
- (void)setHasOperation:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setOperation:(int)arg1;
- (void)setProposedLabel:(id)arg1;
- (void)setProposedTime:(id)arg1;
- (void)writeTo:(id)arg1;

@end
