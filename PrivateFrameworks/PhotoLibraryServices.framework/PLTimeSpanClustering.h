
@interface PLTimeSpanClustering : PLDataClustering {
    unsigned long long  _averageNumberOfObjects;
    double  _minimumSpan;
}

@property (nonatomic) unsigned long long averageNumberOfObjects;
@property (nonatomic) double minimumSpan;

- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2;
- (unsigned long long)averageNumberOfObjects;
- (id)init;
- (double)minimumSpan;
- (id)performWithDataset:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)setAverageNumberOfObjects:(unsigned long long)arg1;
- (void)setMinimumSpan:(double)arg1;

@end
