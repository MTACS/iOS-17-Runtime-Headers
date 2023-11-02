
@protocol PXLivePhotoTrimScrubberFilmStripView <NSObject>

@required

- (AVAsset *)asset;
- (void)setAsset:(AVAsset *)arg1 videoComposition:(AVVideoComposition *)arg2;
- (void)setLivePhotoTrimScrubberThumbnail:(UIImage *)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (AVVideoComposition *)videoComposition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@optional

- (bool)preserveThumbnailsDuringReload;
- (void)setPreserveThumbnailsDuringReload:(bool)arg1;
- (void)setThumbnailUpdatingDelegate:(id)arg1;
- (void)setUseContentAspectRatio:(bool)arg1;
- (id)thumbnailUpdatingDelegate;
- (bool)useContentAspectRatio;

@end
