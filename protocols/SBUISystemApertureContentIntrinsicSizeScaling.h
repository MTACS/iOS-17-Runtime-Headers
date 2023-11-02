
@protocol SBUISystemApertureContentIntrinsicSizeScaling <NSObject>

@required

- (struct CGSize { double x1; double x2; })explicitIntrinsicSize;
- (void)setExplicitIntrinsicSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldAutomaticallyScaleUpIntrinsicSize:(bool)arg1;
- (bool)shouldAutomaticallyScaleUpIntrinsicSize;

@end
