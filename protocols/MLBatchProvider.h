
@protocol MLBatchProvider

@required

- (long long)count;
- (<MLFeatureProvider> *)featuresAtIndex:(long long)arg1;

@end
