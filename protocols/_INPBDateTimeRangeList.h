
@protocol _INPBDateTimeRangeList <NSObject>

@required

+ (Class)dateRangeType;

- (void)addDateRange:(_INPBDateTimeRange *)arg1;
- (void)clearDateRanges;
- (_INPBCondition *)condition;
- (_INPBDateTimeRange *)dateRangeAtIndex:(unsigned long long)arg1;
- (NSArray *)dateRanges;
- (unsigned long long)dateRangesCount;
- (bool)hasCondition;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setDateRanges:(NSArray *)arg1;

@end
