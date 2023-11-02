
@protocol _INPBNumericSettingValue <NSObject>

@required

- (int)StringAsUnit:(NSString *)arg1;
- (bool)hasUnit;
- (bool)hasValue;
- (void)setHasUnit:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setUnit:(int)arg1;
- (void)setValue:(double)arg1;
- (int)unit;
- (NSString *)unitAsString:(int)arg1;
- (double)value;

@end
