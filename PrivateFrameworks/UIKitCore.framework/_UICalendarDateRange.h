
@interface _UICalendarDateRange : NSObject {
    NSDateComponents * _endDate;
    NSDateComponents * _startDate;
}

@property (nonatomic, readonly) NSDateComponents *endDate;
@property (nonatomic, readonly) NSDateComponents *startDate;

- (void).cxx_destruct;
- (id)allDatesInRangeForCalendar:(id)arg1;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)startDate;

@end
