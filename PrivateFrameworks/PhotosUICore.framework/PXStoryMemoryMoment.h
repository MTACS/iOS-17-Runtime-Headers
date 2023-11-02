
@interface PXStoryMemoryMoment : NSObject {
    <PXStoryMemoryMomentClusteringDistanceCalculator> * _diagnosticDistanceCalculator;
    bool  _diagnosticsCalculated;
    <PXDisplayAssetFetchResult> * _displayAssets;
    double  _faceClusteringDistance;
    NSIndexSet * _indices;
    double  _locationClusteringDistance;
    double  _timeClusteringDistance;
    double  _totalWeightedClusteringDistance;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } assetIndexRange;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) <PXStoryMemoryMomentClusteringDistanceCalculator> *diagnosticDistanceCalculator;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *displayAssets;
@property (nonatomic, readonly) double faceClusteringDistance;
@property (nonatomic, readonly) <PXDisplayAsset> *firstAsset;
@property (nonatomic, readonly) unsigned long long firstGlobalIndex;
@property (nonatomic, readonly) <PXDisplayAsset> *lastAsset;
@property (nonatomic, readonly) unsigned long long lastGlobalIndex;
@property (nonatomic, readonly) double locationClusteringDistance;
@property (nonatomic, readonly) double timeClusteringDistance;
@property (nonatomic, readonly) double totalWeightedClusteringDistance;

- (void).cxx_destruct;
- (void)_calculateDiagnostics;
- (id)assetAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })assetIndexRange;
- (unsigned long long)count;
- (id)description;
- (id)diagnosticDistanceCalculator;
- (id)displayAssets;
- (void)enumerateAssetsUsingBlock:(id /* block */)arg1;
- (double)faceClusteringDistance;
- (id)firstAsset;
- (unsigned long long)firstGlobalIndex;
- (id)initWithDisplayAssets:(id)arg1 indexSet:(id)arg2;
- (id)initWithDisplayAssets:(id)arg1 indexSet:(id)arg2 diagnosticDistanceCalculator:(id)arg3;
- (id)initWithDisplayAssets:(id)arg1 indicesArray:(id)arg2 diagnosticDistanceCalculator:(id)arg3;
- (id)lastAsset;
- (unsigned long long)lastGlobalIndex;
- (double)locationClusteringDistance;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (double)timeClusteringDistance;
- (double)totalWeightedClusteringDistance;

@end
