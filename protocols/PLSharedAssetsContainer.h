
@protocol PLSharedAssetsContainer <NSObject>

@required

- (int)assetsCount;
- (int)assetsCountPrivate;
- (int)assetsCountShared;
- (void)recalculateSharedAssetContainerCachedValues;
- (void)reportSharedAssetContainerIncrementalChange:(PLSharedAssetsContainerIncrementalChange *)arg1 forAllAssetsCountKey:(NSString *)arg2;
- (short)sharingComposition;

@optional

- (int)photoAssetsSuggestedByPhotosCount;
- (int)videoAssetsSuggestedByPhotosCount;

@end
