
@interface PGFingerprint : NSObject {
    NSArray * featureNames;
    MAFloatVector * floatArray;
}

@property (nonatomic, copy) NSArray *featureNames;
@property (nonatomic, copy) MAFloatVector *floatArray;

+ (id)_assetFingerprintWithFeatureExtractor:(id)arg1 forAsset:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4;
+ (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;
+ (id)assetCollectionFingerprintWithVersion:(long long)arg1 forAssetCollection:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5;
+ (id)assetCollectionFingerprintsDataframeWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 progressReporter:(id)arg5 error:(id*)arg6;
+ (id)assetCollectionFingerprintsWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5;
+ (id)assetFingerprintWithVersion:(long long)arg1 forAsset:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5;
+ (id)assetFingerprintsDataframeWithVersion:(long long)arg1 forAssets:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 progressReporter:(id)arg5 error:(id*)arg6;
+ (id)assetFingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5;
+ (id)memoryFeatureNodesFingerprintsDataFrameWithVersion:(long long)arg1 forFeatureNodes:(id)arg2 uniqueMemoryIdentifiers:(id)arg3 withGraph:(id)arg4 progressReporter:(id)arg5 error:(id*)arg6;
+ (id)momentNodeFingerprintsDataFrameWithVersion:(long long)arg1 forMomentNodes:(id)arg2 withGraph:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)featureNames;
- (id)floatArray;
- (id)initWithFloatArray:(id)arg1 withFeatureNames:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFingerprint:(id)arg1;
- (void)setFeatureNames:(id)arg1;
- (void)setFloatArray:(id)arg1;

@end
