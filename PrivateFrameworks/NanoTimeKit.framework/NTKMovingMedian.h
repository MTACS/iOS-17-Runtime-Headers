
@interface NTKMovingMedian : NSObject <NTKMovingStatistic> {
    double  _currentValue;
    unsigned long long  _sampleSize;
    NSMutableArray * _values;
}

@property (nonatomic) double currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long sampleSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *values;

- (void).cxx_destruct;
- (void)addNewValue:(double)arg1;
- (double)currentValue;
- (id)initWithSampleSize:(unsigned long long)arg1;
- (unsigned long long)sampleSize;
- (void)setCurrentValue:(double)arg1;
- (void)setSampleSize:(unsigned long long)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
