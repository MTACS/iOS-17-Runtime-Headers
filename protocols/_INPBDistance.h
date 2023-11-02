
@protocol _INPBDistance <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBDistanceValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBDistanceValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
