
@interface SBUILegibilityShadowView : SBUILegibilityContainerView

@property (nonatomic) double strength;
@property (nonatomic, readonly) UIImage *strengthenedImage;

- (id)_contentColor;
- (bool)_updateFilters;
- (void)setImage:(id)arg1 strengthenedImage:(id)arg2 strength:(double)arg3;

@end
