
@protocol PXStoryMutableRecipeManager

@required

- (void)applyCustomUserAssets:(id <PXDisplayAssetFetchResult>)arg1;
- (void)applyKeyAsset:(id <PXDisplayAsset>)arg1;
- (void)applyManuallyCuratedAssets:(id <PXDisplayAssetFetchResult>)arg1;
- (void)applyManuallyRemovedAssets:(NSSet *)arg1;
- (void)applyTargetOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg1;
- (PXStoryConfiguration *)configuration;
- (void)didPersistRecipeAssetEdits:(PXStoryRecipeAssetEdits *)arg1;
- (void)ensureAutoEditDecisionListForSong:(id <PXAudioAsset>)arg1;
- (void)setConfiguration:(PXStoryConfiguration *)arg1;

@end
