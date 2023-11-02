
@interface AVTStickerRecentsOverlayViewLayout : NSObject {
    double  _horizontalEdgePadding;
    double  _imageHeight;
    double  _imageToTitlePadding;
    double  _imageToTopPadding;
    double  _subtitleToButtonPadding;
    double  _titleToSubtitlePadding;
}

@property (nonatomic, readonly) double horizontalEdgePadding;
@property (nonatomic, readonly) double imageHeight;
@property (nonatomic, readonly) double imageToTitlePadding;
@property (nonatomic, readonly) double imageToTopPadding;
@property (nonatomic, readonly) double subtitleToButtonPadding;
@property (nonatomic, readonly) double titleToSubtitlePadding;

+ (id)buttonsLandscapeLayout;
+ (id)buttonsPortraitLayout;
+ (id)standardLandscapeLayout;
+ (id)standardPortraitLayout;

- (double)horizontalEdgePadding;
- (double)imageHeight;
- (double)imageToTitlePadding;
- (double)imageToTopPadding;
- (id)initWithImageToTopPadding:(double)arg1 imageToTitlePadding:(double)arg2 titleToSubtitlePadding:(double)arg3 subtitleToButtonPadding:(double)arg4 imageHeight:(double)arg5 horizontalEdgePadding:(double)arg6;
- (double)subtitleToButtonPadding;
- (double)titleToSubtitlePadding;

@end
