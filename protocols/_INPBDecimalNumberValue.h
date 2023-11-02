
@protocol _INPBDecimalNumberValue <NSObject>

@required

- (int)exponent;
- (bool)hasExponent;
- (bool)hasIsNegative;
- (bool)hasMantissa;
- (bool)hasValueMetadata;
- (bool)isNegative;
- (unsigned long long)mantissa;
- (void)setExponent:(int)arg1;
- (void)setHasExponent:(bool)arg1;
- (void)setHasIsNegative:(bool)arg1;
- (void)setHasMantissa:(bool)arg1;
- (void)setIsNegative:(bool)arg1;
- (void)setMantissa:(unsigned long long)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
