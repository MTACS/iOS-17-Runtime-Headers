
@protocol PXStoryDisplayAssetResource <PXStoryResource>

@required

- (<PXDisplayAsset> *)px_storyResourceDisplayAsset;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })px_storyResourceFetchBestPlaybackRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_storyResourceFetchBestPlaybackRect;
- (double)px_storyResourceFetchCurationScore;
- (long long)px_storyResourceFetchFaceCount;
- (NSData *)px_storyResourceFetchNormalizationData;
- (NSSet *)px_storyResourceFetchSceneClassifications;
- (PFVideoAdjustments *)px_storyResourceFetchVideoAdjustments;

@end
