
@protocol _INPBTemperature <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBTemperatureValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBTemperatureValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
