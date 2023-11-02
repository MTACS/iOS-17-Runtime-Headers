
@protocol TRIAssetPurging <NSObject>

@required

- (unsigned long long)purgeAssetsForPurgeabilityLevel:(int)arg1 requestedPurgeAmount:(long long)arg2;
- (unsigned long long)purgeableAssetSizeForPurgeabilityLevel:(int)arg1;

@end
