
@interface _HKSampleQueryResult : NSObject {
    NSDateInterval * _dateInterval;
    NSDate * _endDate;
    NSArray * _samples;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *samples;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 samples:(id)arg3;
- (id)samples;
- (id)startDate;

@end
