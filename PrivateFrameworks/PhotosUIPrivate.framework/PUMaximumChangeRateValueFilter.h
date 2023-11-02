
@interface PUMaximumChangeRateValueFilter : PUDynamicValueFilter {
    double  _maximumChangeRate;
}

@property (nonatomic) double maximumChangeRate;

- (double)maximumChangeRate;
- (void)setMaximumChangeRate:(double)arg1;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;

@end
