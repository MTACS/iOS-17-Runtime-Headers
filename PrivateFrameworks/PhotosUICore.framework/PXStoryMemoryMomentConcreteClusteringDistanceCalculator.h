
@interface PXStoryMemoryMomentConcreteClusteringDistanceCalculator : NSObject <PXStoryMemoryMomentClusteringDistanceCalculator> {
    <PXDisplayAssetFetchResult> * _assets;
    double  _faceWeight;
    NSDictionary * _faceprintsByAssetUUID;
    double  _locationWeight;
    NSDictionary * _locationsByAssetUUID;
    double  _timeWeight;
    NSDictionary * _weights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double faceWeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double locationWeight;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeWeight;

- (void).cxx_destruct;
- (void)clusteringDistanceForAssets:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 resultHandler:(id /* block */)arg4;
- (id /* block */)densityClusteringDistanceBlockForAssets:(id)arg1;
- (double)faceWeight;
- (id)initWithWeights:(id)arg1 locationsByAssetUUID:(id)arg2 faceprintsByAssetUUID:(id)arg3;
- (double)locationWeight;
- (double)timeWeight;

@end
