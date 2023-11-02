
@protocol _INPBLocation <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBLocationValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBLocationValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
