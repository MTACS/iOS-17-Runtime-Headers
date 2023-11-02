
@interface HKHistogramChartDataSourceBin : NSObject {
    NSMutableArray * _backingValues;
}

@property (nonatomic, readonly) NSNumber *averageValue;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly, copy) NSArray *sortedValues;
@property (nonatomic, readonly) NSNumber *sumValue;
@property (nonatomic, readonly, copy) NSArray *values;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (id)averageValue;
- (unsigned long long)count;
- (id)init;
- (id)initWithValues:(id)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (id)sortedValues;
- (id)sumValue;
- (id)values;

@end
