
@protocol SBIconLabelView

@required

- (SBIconView *)iconView;
- (UIImage *)image;
- (SBIconLabelImageParameters *)imageParameters;
- (id)initWithSettings:(_UILegibilitySettings *)arg1;
- (void)setIconView:(SBIconView *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)updateIconLabelWithSettings:(_UILegibilitySettings *)arg1 imageParameters:(SBIconLabelImageParameters *)arg2;

@end
