
@protocol _INPBDateTimeRange <NSObject>

@required

+ (Class)valueType;

- (void)addValue:(_INPBDateTimeRangeValue *)arg1;
- (void)clearValues;
- (void)setValues:(NSArray *)arg1;
- (_INPBDateTimeRangeValue *)valueAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (unsigned long long)valuesCount;

@end
