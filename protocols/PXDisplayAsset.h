
@protocol PXDisplayAsset <PXDisplayThumbnailAsset>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })acceptableCropRect;
- (float)audioScore;
- (NSDate *)creationDate;
- (Class)defaultImageProviderClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceAreaRect;
- (long long)isContentEqualTo:(id <PXDisplayAsset>)arg1;
- (bool)isEligibleForAutoPlayback;
- (bool)isFavorite;
- (bool)isInCloud;
- (bool)isInSharedLibrary;
- (NSDate *)localCreationDate;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredCropRect;
- (bool)representsBurst;
- (NSString *)uuid;

@optional

- (double)aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatioV2:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (unsigned long long)burstSelectionTypes;
- (<PXAssetdestinationAssetCopyProperties> *)destinationAssetCopyProperties;
- (double)duration;
- (void)enumerateCropVariantsForTargetSize:(void *)arg1 preferFaceCrops:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 11: struct CGSize { double x1; double x2; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, double, bool*, void*
- (NSData *)fetchColorNormalizationData;
- (NSNumber *)hdrGain;
- (NSDate *)importDate;
- (bool)isAutoPlaybackEligibilityEstimated;
- (bool)isSpatialMedia;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoVideoDuration;
- (NSString *)localizedDetailedGeoDescriptionForRTL:(bool)arg1;
- (NSString *)localizedGeoDescription;
- (long long)originalFileSize;
- (long long)playbackStyle;
- (unsigned short)playbackVariation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1 withFocusRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedCropForTargetSize:(struct CGSize { double x1; double x2; })arg1 withOcclusionRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andOutputCropScore:(double*)arg3;
- (unsigned long long)thumbnailVersion;

@end
