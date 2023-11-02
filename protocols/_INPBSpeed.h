
@protocol _INPBSpeed <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBSpeedValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBSpeedValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
