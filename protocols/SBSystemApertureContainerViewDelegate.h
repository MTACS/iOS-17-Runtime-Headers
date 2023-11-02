
@protocol SBSystemApertureContainerViewDelegate <NSObject>

@required

- (SBSystemApertureKeyLineColorValidator *)keyLineColorValidatorForSystemApertureContainerView:(SBSystemApertureContainerView *)arg1;
- (UIView *)parentViewForBackgroundForSystemApertureContainerView:(SBSystemApertureContainerView *)arg1;
- (UIView *)parentViewForSubBackgroundForSystemApertureContainerView:(SBSystemApertureContainerView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })systemApertureContainerView:(SBSystemApertureContainerView *)arg1 hitRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 debugColor:(out id*)arg3;
- (void)systemApertureContainerView:(SBSystemApertureContainerView *)arg1 sampledLuminanceLevelChangedTo:(long long)arg2;

@end
