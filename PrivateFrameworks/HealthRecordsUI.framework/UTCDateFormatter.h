
@interface UTCDateFormatter : NSObject {
    HKDateCache * _dateCache;
    NSDateFormatter * _monthDayYearFormatter;
    NSDateFormatter * _shortMonthDayFormatter;
    NSDateFormatter * _shortMonthYearFormatter;
    NSDateFormatter * _todayFormatter;
}

@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) NSDateFormatter *monthDayYearFormatter;
@property (nonatomic, readonly) NSDateFormatter *shortMonthDayFormatter;
@property (nonatomic, readonly) NSDateFormatter *shortMonthYearFormatter;
@property (nonatomic, readonly) NSDateFormatter *todayFormatter;

- (void).cxx_destruct;
- (id)dateCache;
- (id)initWithDateCache:(id)arg1;
- (id)monthDayYearFormatter;
- (id)relativeStringFromDate:(id)arg1;
- (id)shortMonthDayFormatter;
- (id)shortMonthYearFormatter;
- (id)todayFormatter;

@end
