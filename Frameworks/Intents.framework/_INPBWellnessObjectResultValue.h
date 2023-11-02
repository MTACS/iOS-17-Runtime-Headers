
@interface _INPBWellnessObjectResultValue : PBCodable <NSCopying, NSSecureCoding, _INPBWellnessObjectResultValue> {
    struct { 
        unsigned int resultType : 1; 
    }  _has;
    _INPBDateTimeRange * _recordDate;
    int  _resultType;
    _INPBString * _unit;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRecordDate;
@property (nonatomic) bool hasResultType;
@property (nonatomic, readonly) bool hasUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDateTimeRange *recordDate;
@property (nonatomic) int resultType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBString *unit;
@property (nonatomic, copy) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (bool)supportsSecureCoding;
+ (Class)valuesType;

- (void).cxx_destruct;
- (int)StringAsResultType:(id)arg1;
- (void)addValues:(id)arg1;
- (void)clearValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRecordDate;
- (bool)hasResultType;
- (bool)hasUnit;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordDate;
- (int)resultType;
- (id)resultTypeAsString:(int)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setRecordDate:(id)arg1;
- (void)setResultType:(int)arg1;
- (void)setUnit:(id)arg1;
- (void)setValues:(id)arg1;
- (id)unit;
- (id)values;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
