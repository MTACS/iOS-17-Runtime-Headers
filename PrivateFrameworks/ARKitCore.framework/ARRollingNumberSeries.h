
@interface ARRollingNumberSeries : NSObject {
    double  _average;
    unsigned long long  _count;
    unsigned long long  _currentIndex;
    double * _series;
    double  _sum;
    double  _sumVariance;
    double  _variance;
    unsigned long long  _windowSize;
}

@property (nonatomic, readonly) double average;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double sum;
@property (nonatomic, readonly) double variance;
@property (nonatomic, readonly) unsigned long long windowSize;

- (void)appendNumber:(double)arg1;
- (double)average;
- (void)clear;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithWindowSize:(unsigned long long)arg1;
- (double)max;
- (double)min;
- (double)sum;
- (double)variance;
- (unsigned long long)windowSize;

@end
