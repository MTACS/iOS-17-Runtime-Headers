
@interface ACHDateComponentInterval : NSObject {
    NSDateComponents * _endDateComponents;
    NSDateComponents * _startDateComponents;
}

@property (nonatomic, readonly) NSDateComponents *endDateComponents;
@property (nonatomic, readonly) NSDateComponents *startDateComponents;

- (void).cxx_destruct;
- (id)chunked:(long long)arg1 calendar:(id)arg2;
- (bool)containsDateComponents:(id)arg1 inCalendar:(id)arg2;
- (unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1;
- (id)description;
- (id)endDateComponents;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (id)startDateComponents;

@end
