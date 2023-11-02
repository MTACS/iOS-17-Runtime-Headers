
@interface FIUIWorkoutSplit : NSObject {
    NSDateInterval * _dateInterval;
    double  _distanceInMeters;
    double  _duration;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)description;
- (double)distanceInMeters;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistance:(double)arg1 duration:(double)arg2;
- (id)initWithDistance:(double)arg1 duration:(double)arg2 dateInterval:(id)arg3;
- (void)setDateInterval:(id)arg1;
- (void)setDistanceInMeters:(double)arg1;
- (void)setDuration:(double)arg1;

@end
