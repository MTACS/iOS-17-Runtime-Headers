
@interface _INPBHomeAttributeValue : PBCodable <NSCopying, NSSecureCoding, _INPBHomeAttributeValue> {
    bool  _booleanValue;
    double  _doubleValue;
    struct { 
        unsigned int booleanValue : 1; 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
        unsigned int limitValue : 1; 
        unsigned int unit : 1; 
        unsigned int valueType : 1; 
    }  _has;
    long long  _integerValue;
    int  _limitValue;
    _INPBHomeAttributeRange * _rangeValue;
    NSString * _stringValue;
    int  _unit;
    int  _valueType;
}

@property (nonatomic) bool booleanValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasBooleanValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic) bool hasLimitValue;
@property (nonatomic, readonly) bool hasRangeValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasUnit;
@property (nonatomic) bool hasValueType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long integerValue;
@property (nonatomic) int limitValue;
@property (nonatomic, retain) _INPBHomeAttributeRange *rangeValue;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic) int unit;
@property (nonatomic) int valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsLimitValue:(id)arg1;
- (int)StringAsUnit:(id)arg1;
- (int)StringAsValueType:(id)arg1;
- (bool)booleanValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBooleanValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasLimitValue;
- (bool)hasRangeValue;
- (bool)hasStringValue;
- (bool)hasUnit;
- (bool)hasValueType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (int)limitValue;
- (id)limitValueAsString:(int)arg1;
- (id)rangeValue;
- (bool)readFrom:(id)arg1;
- (void)setBooleanValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBooleanValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setHasLimitValue:(bool)arg1;
- (void)setHasUnit:(bool)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setLimitValue:(int)arg1;
- (void)setRangeValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUnit:(int)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (int)unit;
- (id)unitAsString:(int)arg1;
- (int)valueType;
- (id)valueTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
