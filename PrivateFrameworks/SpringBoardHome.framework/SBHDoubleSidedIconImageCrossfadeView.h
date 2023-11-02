
@interface SBHDoubleSidedIconImageCrossfadeView : SBIconImageCrossfadeView {
    double  _cornerRadius;
    double  _scaleX;
    double  _scaleY;
}

+ (Class)_containerViewClass;
+ (Class)layerClass;

- (void)_applyCornerRadius:(double)arg1;
- (void)_applyCornerRadiusToBackgroundView;
- (void)_applyCornerRadiusToCrossfadeView;
- (void)_applyCornerRadiusToIconImageView;
- (void)_applyCornerRadiusToViews;
- (void)_applyCrossfadeScaleX:(double)arg1 scaleY:(double)arg2;
- (void)_setCornerRadiusEnabled:(bool)arg1;
- (void)cleanup;
- (void)layoutSubviews;
- (void)prepareGeometry;

@end
