
@interface _INPBDecimalNumberValue : PBCodable <NSCopying, NSSecureCoding, _INPBDecimalNumberValue> {
    int  _exponent;
    struct { 
        unsigned int exponent : 1; 
        unsigned int isNegative : 1; 
        unsigned int mantissa : 1; 
    }  _has;
    bool  _isNegative;
    unsigned long long  _mantissa;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int exponent;
@property (nonatomic) bool hasExponent;
@property (nonatomic) bool hasIsNegative;
@property (nonatomic) bool hasMantissa;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isNegative;
@property (nonatomic) unsigned long long mantissa;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)exponent;
- (bool)hasExponent;
- (bool)hasIsNegative;
- (bool)hasMantissa;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNegative;
- (unsigned long long)mantissa;
- (bool)readFrom:(id)arg1;
- (void)setExponent:(int)arg1;
- (void)setHasExponent:(bool)arg1;
- (void)setHasIsNegative:(bool)arg1;
- (void)setHasMantissa:(bool)arg1;
- (void)setIsNegative:(bool)arg1;
- (void)setMantissa:(unsigned long long)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
