
@protocol _INPBContact <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBContactValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBContactValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
