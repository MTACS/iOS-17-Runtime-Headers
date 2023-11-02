
@interface _UIDatePickerDateRange : NSObject {
    NSDate * _endDate;
    struct { 
        unsigned int ignoresRange : 1; 
    }  _flags;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (bool)_containsDate:(id)arg1 withAccuracy:(unsigned long long)arg2 inCalendar:(id)arg3;
- (bool)containsDate:(id)arg1;
- (bool)containsDay:(id)arg1;
- (bool)containsMonth:(id)arg1;
- (id)copyWithEndDate:(id)arg1;
- (id)copyWithStartDate:(id)arg1;
- (id)dateInRangeForDate:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)startDate;

@end
