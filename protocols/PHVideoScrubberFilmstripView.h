
@protocol PHVideoScrubberFilmstripView <NSObject>

@required

- (AVAsset *)asset;
- (UIImage *)placeholderImage;
- (void)setAsset:(AVAsset *)arg1;
- (void)setPlaceholderImage:(UIImage *)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@optional

- (void)setAsset:(AVAsset *)arg1 videoComposition:(AVVideoComposition *)arg2;

@end
