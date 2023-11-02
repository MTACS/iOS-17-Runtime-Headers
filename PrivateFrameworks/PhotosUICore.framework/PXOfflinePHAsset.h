
@interface PXOfflinePHAsset : PXFileBackedAsset <PHPhotoLibraryAsset, PXStoryDisplayAssetResource> {
    PHAsset * _asset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) <PXDisplayAsset> *px_storyResourceDisplayAsset;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } px_storyResourceFetchBestPlaybackRange;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } px_storyResourceFetchBestPlaybackRect;
@property (nonatomic, readonly) double px_storyResourceFetchCurationScore;
@property (nonatomic, readonly) long long px_storyResourceFetchFaceCount;
@property (nonatomic, readonly) NSData *px_storyResourceFetchNormalizationData;
@property (nonatomic, readonly) NSSet *px_storyResourceFetchSceneClassifications;
@property (nonatomic, readonly) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (readonly) Class superclass;

+ (id)createOfflinePHAssetUsingOfflineAssets:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (id)asset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaRect;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithURL:(id)arg1 matchingPHAsset:(id)arg2;
- (id)initWithURL:(id)arg1 matchingPHAssetUUID:(id)arg2;
- (id)localizedGeoDescription;
- (id)photoLibrary;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (id)px_storyResourceDisplayAsset;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })px_storyResourceFetchBestPlaybackRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_storyResourceFetchBestPlaybackRect;
- (double)px_storyResourceFetchCurationScore;
- (long long)px_storyResourceFetchFaceCount;
- (id)px_storyResourceFetchNormalizationData;
- (id)px_storyResourceFetchSceneClassifications;
- (id)px_storyResourceFetchVideoAdjustments;
- (id)px_storyResourceIdentifier;
- (long long)px_storyResourceKind;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1 withFocusRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1 withFocusRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andOutputCropScore:(double*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1 withOcclusionRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andOutputCropScore:(double*)arg3;
- (id)uuid;

@end
