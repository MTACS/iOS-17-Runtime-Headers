
@interface MLLazyUnionBatchProvider : NSObject <MLBatchProvider> {
    <MLBatchProvider> * _first;
    <MLBatchProvider> * _second;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, retain) <MLBatchProvider> *first;
@property (nonatomic, retain) <MLBatchProvider> *second;

- (void).cxx_destruct;
- (long long)count;
- (id)featuresAtIndex:(long long)arg1;
- (id)first;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 error:(id*)arg3;
- (id)second;
- (void)setFirst:(id)arg1;
- (void)setSecond:(id)arg1;

@end
