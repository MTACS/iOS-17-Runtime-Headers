
@protocol _INPBLong <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBLongValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBLongValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
