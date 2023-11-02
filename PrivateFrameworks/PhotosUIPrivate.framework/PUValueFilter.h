
@interface PUValueFilter : NSObject {
    double  _currentValue;
}

@property (nonatomic) double currentValue;

- (double)currentValue;
- (id)init;
- (id)initWithValue:(double)arg1;
- (double)outputValue;
- (void)setCurrentValue:(double)arg1;
- (void)setInputValue:(double)arg1;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
