
@interface PUPhotoEditViewControllerSpec : PUViewControllerSpec

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previewViewInsetsLandscape;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previewViewInsetsPortrait;
@property (nonatomic, readonly) bool shouldAllowApertureButtonExpansion;
@property (nonatomic, readonly) bool shouldAnchorLightingAgainstToolbar;
@property (nonatomic, readonly) bool shouldDisplayCompactToolbar;
@property (nonatomic, readonly) bool shouldDisplayExtensionButtonInMainToolbar;
@property (nonatomic, readonly) bool shouldUseCompactToolbarSpacing;
@property (nonatomic, readonly) double toolbarLongSideMargin;
@property (nonatomic, readonly) double toolbarLongSideWideMargin;
@property (nonatomic, readonly) bool toolbarShadows_shouldShowToolbarUnderline;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previewViewInsetsLandscape;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previewViewInsetsPortrait;
- (bool)shouldAllowApertureButtonExpansion;
- (bool)shouldAnchorLightingAgainstToolbar;
- (bool)shouldDisplayCompactToolbar;
- (bool)shouldDisplayExtensionButtonInMainToolbar;
- (bool)shouldUseCompactToolbarSpacing;
- (double)toolbarLongSideMargin;
- (double)toolbarLongSideWideMargin;
- (bool)toolbarShadows_shouldShowToolbarUnderline;

@end
