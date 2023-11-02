
@interface PXStoryRecipeClipMotionStyleProvider : NSObject {
    PFStoryAutoEditConfiguration * _configuration;
    PFStoryAutoEditFrequencyTable * _diptychFrequencyTable;
    PFStoryAutoEditFrequencyTable * _frequencyTable;
    <PFRandomNumberGenerator> * _randomNumberGenerator;
    PXStoryConfiguration * _storyConfiguration;
    PFStoryAutoEditFrequencyTable * _triptychFrequencyTable;
}

@property (nonatomic, readonly) PFStoryAutoEditConfiguration *configuration;
@property (nonatomic, readonly) PXStoryConfiguration *storyConfiguration;

- (void).cxx_destruct;
- (long long)_nextMotionStyleForDisplayAssetCount:(long long)arg1 excluding:(id)arg2;
- (id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)arg1 colorGradeCategory:(id)arg2 songPace:(long long)arg3 randomNumberGenerator:(id)arg4 storyConfiguration:(id)arg5;
- (struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })nextMotionInfoForDisplayAssetCount:(long long)arg1 displayAssets:(id)arg2;
- (struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })nextMotionInfoForDisplayAssetCount:(long long)arg1 displayAssets:(id)arg2 excluding:(id)arg3;
- (struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })nextMotionInfoForModuleExcludingMomentMotion:(long long)arg1 previousModuleMotion:(long long)arg2 displayAssets:(id)arg3;
- (void)provideMotionStylesForMomentClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withClipCatalog:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)storyConfiguration;
- (struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })updatedMotionForPortraitAspectAsset:(id)arg1 motionInfo:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg2;

@end
