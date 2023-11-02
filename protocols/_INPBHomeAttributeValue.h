
@protocol _INPBHomeAttributeValue <NSObject>

@required

- (int)StringAsLimitValue:(NSString *)arg1;
- (int)StringAsUnit:(NSString *)arg1;
- (int)StringAsValueType:(NSString *)arg1;
- (bool)booleanValue;
- (double)doubleValue;
- (bool)hasBooleanValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasLimitValue;
- (bool)hasRangeValue;
- (bool)hasStringValue;
- (bool)hasUnit;
- (bool)hasValueType;
- (long long)integerValue;
- (int)limitValue;
- (NSString *)limitValueAsString:(int)arg1;
- (_INPBHomeAttributeRange *)rangeValue;
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
- (void)setRangeValue:(_INPBHomeAttributeRange *)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setUnit:(int)arg1;
- (void)setValueType:(int)arg1;
- (NSString *)stringValue;
- (int)unit;
- (NSString *)unitAsString:(int)arg1;
- (int)valueType;
- (NSString *)valueTypeAsString:(int)arg1;

@end
