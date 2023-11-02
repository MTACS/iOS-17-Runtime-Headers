
@interface HMITimeIntervalAverage : HMFObject {
    MovingAverage * _average;
}

- (void).cxx_destruct;
- (void)addValue:(double)arg1;
- (id)initWithMaxCapacity:(long long)arg1;
- (double)value;
- (double)valueForInterval:(double)arg1 defaultValue:(double)arg2;

@end
