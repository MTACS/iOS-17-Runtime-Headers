
@protocol _INPBBool <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBBoolValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBBoolValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
