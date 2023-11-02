
@interface PLCoreDuetEventInterval : NSObject {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (retain) NSDate *endDate;
@property (retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (bool)intersects:(id)arg1;
- (id)joinWithInterval:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
