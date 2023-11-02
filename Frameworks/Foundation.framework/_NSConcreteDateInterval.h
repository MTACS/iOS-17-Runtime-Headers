
@interface _NSConcreteDateInterval : NSDateInterval {
    double  _duration;
    NSDate * _startDate;
}

- (void)dealloc;
- (double)duration;
- (id)endDate;
- (id)init;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)startDate;

@end
