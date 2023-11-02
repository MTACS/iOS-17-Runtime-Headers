
@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } cropActionButtonSize;
@property (nonatomic, readonly) UIColor *cropAspectButtonColor;
@property (nonatomic, readonly) UIColor *cropAspectButtonSelectedColor;
@property (nonatomic, readonly) double cropAspectFlipperWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cropAspectRatioButtonTitleInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cropAspectRatioScrollContentInset;
@property (nonatomic, readonly) double cropAspectRatioScrollHeight;
@property (nonatomic, readonly) double cropHandleViewLineMargin;
@property (nonatomic, readonly) double cropHandleViewLineThickness;
@property (nonatomic, readonly) PXLabelSpec *cropHeaderLabelSpec;
@property (nonatomic, readonly) double cropRectMargin;
@property (nonatomic, readonly) double leftInsetForiPad;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumCropHandleViewSize;
@property (nonatomic, readonly) double minimumCropInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumCropSize;
@property (nonatomic, readonly) double standardBottomBarWidth;
@property (nonatomic, readonly) double standardSideBarHeight;

- (struct CGSize { double x1; double x2; })cropActionButtonSize;
- (id)cropAspectButtonColor;
- (id)cropAspectButtonSelectedColor;
- (double)cropAspectFlipperWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cropAspectRatioButtonTitleInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cropAspectRatioScrollContentInset;
- (double)cropAspectRatioScrollHeight;
- (double)cropHandleViewLineMargin;
- (double)cropHandleViewLineThickness;
- (id)cropHeaderLabelSpec;
- (double)cropRectMargin;
- (double)leftInsetForiPad;
- (struct CGSize { double x1; double x2; })minimumCropHandleViewSize;
- (double)minimumCropInset;
- (struct CGSize { double x1; double x2; })minimumCropSize;
- (double)standardBottomBarHeight;
- (double)standardBottomBarWidth;
- (double)standardSideBarHeight;
- (double)standardSideBarWidth;

@end
