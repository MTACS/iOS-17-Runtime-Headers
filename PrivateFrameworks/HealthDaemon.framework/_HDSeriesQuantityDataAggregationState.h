
@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState {
    HDQuantityDatum * _lastDatum;
    long long  _length;
}

@property (nonatomic, readonly) HDQuantityDatum *lastDatum;
@property (nonatomic, readonly) long long length;

- (void).cxx_destruct;
- (id)lastDatum;
- (long long)length;

@end
