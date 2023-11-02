
@interface CFXEffectMessagesStickerUtilities : NSObject

+ (struct CGSize { double x1; double x2; })JFX_recommendedStickerPreviewSizeInPixelsForStickerSize:(long long)arg1;
+ (id)animatedPreviewFileNameForOverlayID:(id)arg1;
+ (id)animatedPreviewsDirectory;
+ (void)cacheAnimatedStickerPreviewsForOverlayTypeId:(id)arg1 atStickerSize:(long long)arg2 previewDuration:(double)arg3 previewFrameRate:(unsigned long long)arg4 previewCompletedBlock:(id /* block */)arg5;
+ (long long)numberOfStickersForEffectTypeId:(id)arg1;
+ (id)overlayIDFromAnimatedPreviewFileName:(id)arg1;
+ (id)stickerPropertiesForIndex:(long long)arg1 forEffectTypeId:(id)arg2;

@end
