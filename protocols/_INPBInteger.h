
@protocol _INPBInteger <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBIntegerValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBIntegerValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
