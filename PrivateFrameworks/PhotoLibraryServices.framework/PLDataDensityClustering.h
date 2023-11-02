
@interface PLDataDensityClustering : PLDataClustering {
    double  _maximumDistance;
    unsigned long long  _minimumNumberOfObjects;
}

@property (nonatomic) double maximumDistance;
@property (nonatomic) unsigned long long minimumNumberOfObjects;

- (id)init;
- (double)maximumDistance;
- (unsigned long long)minimumNumberOfObjects;
- (void)setMaximumDistance:(double)arg1;
- (void)setMinimumNumberOfObjects:(unsigned long long)arg1;

@end
