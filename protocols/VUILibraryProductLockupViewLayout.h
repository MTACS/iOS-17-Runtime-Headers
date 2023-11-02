
@protocol VUILibraryProductLockupViewLayout <NSObject>

@required

- (double)buttonModuleTopMarginForWindowWidth:(double)arg1;
- (double)contentDescriptionBottomMarginForWindowWidth:(double)arg1;
- (UIFont *)contentDescriptionFontForSizeClass:(long long)arg1;
- (int)contentDescriptionNumberOfLinesForTraitCollection:(UITraitCollection *)arg1;
- (double)contentDescriptionTopMarginForWindowWidth:(double)arg1;
- (double)coverArtBottomPadding;
- (double)coverArtImageRightMarginForWindowWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })coverArtImageSize;
- (VUITextLayout *)descriptionTextLayoutForTraitCollection:(UITraitCollection *)arg1 isExpanded:(bool)arg2;
- (long long)downloadButtonPosition;
- (long long)layoutTypeForWindowWidth:(double)arg1;
- (double)metadataTopMargin;
- (VUITextLayout *)playLabelTextLayout;
- (VUITextLayout *)subtitleTextLayoutForWindowWidth:(double)arg1;
- (double)subtitleTopMarginForWindowWidth:(double)arg1;
- (double)titleTopMargin;

@end
