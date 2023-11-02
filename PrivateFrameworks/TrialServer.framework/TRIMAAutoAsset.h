
@interface TRIMAAutoAsset : NSObject <TRIAutoAsset> {
    MAAutoAsset * _autoAsset;
    TRIFullMAAssetId * assetId;
    MAAutoAssetSelector * assetSelector;
}

@property (nonatomic, retain) TRIFullMAAssetId *assetId;
@property (nonatomic, retain) MAAutoAssetSelector *assetSelector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetId;
- (id)assetSelector;
- (id)currentLocksSync:(id*)arg1;
- (id)description;
- (id)determineIfAvailableSync:(id)arg1 withTimeout:(long long)arg2 discoveredAttributes:(id*)arg3 error:(id*)arg4;
- (id)endLockUsageSync:(id)arg1;
- (id)initWithAssetId:(id)arg1 decryptionKey:(id)arg2 error:(id*)arg3;
- (void)lockContent:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 completion:(id /* block */)arg4;
- (void)lockContent:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 reportingProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)lockContentSync:(id)arg1 withUsagePolicy:(id)arg2 withTimeout:(long long)arg3 lockedAssetSelector:(id*)arg4 newerInProgress:(id*)arg5 error:(id*)arg6;
- (void)setAssetId:(id)arg1;
- (void)setAssetSelector:(id)arg1;

@end
