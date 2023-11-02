
@protocol PXStoryMemoryMomentClusteringDistanceCalculator <NSObject>

@required

- (void)clusteringDistanceForAssets:(void *)arg1 fromIndex:(void *)arg2 toIndex:(void *)arg3 resultHandler:(void *)arg4; // needs 4 arg types, found 12: <PXDisplayAssetFetchResult> *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, double, double, void*
- (double)faceWeight;
- (double)locationWeight;
- (double)timeWeight;

@end
