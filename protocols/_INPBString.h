
@protocol _INPBString <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBStringValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBStringValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
