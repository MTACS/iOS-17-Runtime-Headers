
@protocol _INPBDouble <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBDoubleValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBDoubleValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
