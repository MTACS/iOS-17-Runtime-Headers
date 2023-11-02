
@protocol _INPBPower <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBPowerValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBPowerValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
