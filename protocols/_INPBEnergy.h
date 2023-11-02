
@protocol _INPBEnergy <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBEnergyValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBEnergyValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
