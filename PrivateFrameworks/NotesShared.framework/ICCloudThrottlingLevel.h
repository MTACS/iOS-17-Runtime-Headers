
@interface ICCloudThrottlingLevel : NSObject {
    double  _batchInterval;
    double  _maximumBatchIntervalFactor;
    unsigned long long  _numberOfBatches;
}

@property (nonatomic, readonly) double batchInterval;
@property (nonatomic, readonly) double maximumBatchIntervalFactor;
@property (nonatomic, readonly) unsigned long long numberOfBatches;

- (double)batchInterval;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithBatchInterval:(double)arg1 maximumBatchIntervalFactor:(double)arg2 numberOfBatches:(unsigned long long)arg3;
- (double)maximumBatchIntervalFactor;
- (unsigned long long)numberOfBatches;

@end
