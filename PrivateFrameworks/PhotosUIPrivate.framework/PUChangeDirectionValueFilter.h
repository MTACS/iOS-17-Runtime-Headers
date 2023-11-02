
@interface PUChangeDirectionValueFilter : PUValueFilter {
    double  _minimumChangeValue;
    double  _threshold;
}

@property (nonatomic) double minimumChangeValue;

- (double)minimumChangeValue;
- (void)setMinimumChangeValue:(double)arg1;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
