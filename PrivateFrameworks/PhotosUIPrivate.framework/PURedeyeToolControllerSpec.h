
@interface PURedeyeToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic, readonly) bool displaysTooltipAtTopInPortrait;
@property (nonatomic, readonly) double tooltipLandscapeMargin;
@property (nonatomic, readonly) double tooltipPortraitMargin;

- (bool)displaysTooltipAtTopInPortrait;
- (double)tooltipLandscapeMargin;
- (double)tooltipPortraitMargin;

@end
