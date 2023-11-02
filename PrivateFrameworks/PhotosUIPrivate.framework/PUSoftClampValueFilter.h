
@interface PUSoftClampValueFilter : PUClampValueFilter {
    double  _resistance;
}

@property (nonatomic) double resistance;

+ (id)scrollViewFilter;

- (double)resistance;
- (void)setResistance:(double)arg1;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
