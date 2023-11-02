
@interface _INPBNumericSettingValue : PBCodable <NSCopying, NSSecureCoding, _INPBNumericSettingValue> {
    struct { 
        unsigned int unit : 1; 
        unsigned int value : 1; 
    }  _has;
    int  _unit;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasUnit;
@property (nonatomic) bool hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int unit;
@property (nonatomic) double value;

+ (bool)supportsSecureCoding;

- (int)StringAsUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUnit;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasUnit:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setUnit:(int)arg1;
- (void)setValue:(double)arg1;
- (int)unit;
- (id)unitAsString:(int)arg1;
- (double)value;
- (void)writeTo:(id)arg1;

@end
