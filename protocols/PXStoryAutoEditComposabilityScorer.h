
@protocol PXStoryAutoEditComposabilityScorer <NSObject>

@required

- (<PXStoryComposabilityResults> *)computeComposabilityScoresForDisplayAssets:(id <PXDisplayAssetFetchResult>)arg1 error:(id*)arg2;

@optional

- (NSString *)diagnosticDescription;

@end
