
@interface HDValueHistogramCollectionCalculator : NSObject {
    HKUnit * _canonicalUnit;
    NSDateInterval * _currentInterval;
    NSMutableArray * _currentIntervalCountsByValueRange;
    NSNumber * _currentIntervalIndex;
    NSMutableDictionary * _finalizedHistogramsByDateIntervalIndex;
    _HKDateIntervalCollection * _intervalCollection;
    NSArray * _quantityRanges;
    HKQuantityType * _quantityType;
    NSArray * _valueRangesInCanonicalUnit;
}

@property (nonatomic, readonly, copy) _HKDateIntervalCollection *intervalCollection;
@property (nonatomic, readonly, copy) NSArray *quantityRanges;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (void)addSampleValue:(double)arg1 startTime:(double)arg2;
- (id)initWithQuantityType:(id)arg1 quantityRanges:(id)arg2 intervalCollection:(id)arg3;
- (id)intervalCollection;
- (id)quantityRanges;
- (id)quantityType;
- (id)result;

@end
