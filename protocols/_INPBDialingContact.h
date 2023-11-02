
@protocol _INPBDialingContact <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBDialingContactValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBDialingContactValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
