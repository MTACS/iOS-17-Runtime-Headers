
@interface SignpostAggregationAccumulator : NSObject {
    bool  _includeRawIntervals;
    NSMutableDictionary * _mutableSignatureToAccumulatorEntry;
}

@property (nonatomic, readonly) bool includeRawIntervals;
@property (nonatomic, readonly) NSMutableDictionary *mutableSignatureToAccumulatorEntry;
@property (nonatomic, readonly) NSDictionary *signatureToAccumulatorEntry;

- (void).cxx_destruct;
- (void)handleInterval:(id)arg1;
- (bool)includeRawIntervals;
- (id)init;
- (id)initWithIncludeRawIntervals:(bool)arg1;
- (id)mutableSignatureToAccumulatorEntry;
- (id)signatureToAccumulatorEntry;

@end
