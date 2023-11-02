
@protocol NTKMovingStatistic <NSObject>

@required

- (void)addNewValue:(double)arg1;
- (double)currentValue;
- (id)initWithSampleSize:(unsigned long long)arg1;
- (unsigned long long)sampleSize;
- (void)setCurrentValue:(double)arg1;
- (void)setSampleSize:(unsigned long long)arg1;

@end
