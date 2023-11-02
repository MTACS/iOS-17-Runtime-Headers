
@interface _INPBChangeAlarmStatusIntent : PBCodable <NSCopying, NSSecureCoding, _INPBChangeAlarmStatusIntent> {
    _INPBAlarmSearch * _alarmSearch;
    NSArray * _alarms;
    struct { 
        unsigned int operation : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _operation;
}

@property (nonatomic, retain) _INPBAlarmSearch *alarmSearch;
@property (nonatomic, copy) NSArray *alarms;
@property (nonatomic, readonly) unsigned long long alarmsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlarmSearch;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasOperation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int operation;
@property (readonly) Class superclass;

+ (Class)alarmsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsOperation:(id)arg1;
- (void)addAlarms:(id)arg1;
- (id)alarmSearch;
- (id)alarms;
- (id)alarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlarmSearch;
- (bool)hasIntentMetadata;
- (bool)hasOperation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)operation;
- (id)operationAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarmSearch:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setHasOperation:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setOperation:(int)arg1;
- (void)writeTo:(id)arg1;

@end
