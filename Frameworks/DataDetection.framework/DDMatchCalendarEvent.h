
@interface DDMatchCalendarEvent : DDMatch {
    bool  _allDay;
    NSDate * _endDate;
    NSTimeZone * _endTimeZone;
    NSDate * _startDate;
    NSTimeZone * _startTimeZone;
}

@property (getter=isAllDay, nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSTimeZone *endTimeZone;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSTimeZone *startTimeZone;

- (void).cxx_destruct;
- (id)endDate;
- (id)endTimeZone;
- (id)initWithDDScannerResult:(id)arg1;
- (bool)isAllDay;
- (id)startDate;
- (id)startTimeZone;

@end
