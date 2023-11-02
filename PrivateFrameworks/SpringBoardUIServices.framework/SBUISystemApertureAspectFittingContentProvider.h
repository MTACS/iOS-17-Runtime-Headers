
@interface SBUISystemApertureAspectFittingContentProvider : SBUISystemApertureCustomContentProvider <SBUISystemApertureContentIntrinsicSizeScaling> {
    UIView * _customView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } explicitIntrinsicSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAutomaticallyScaleUpIntrinsicSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_providedView;
- (id)contentColor;
- (struct CGSize { double x1; double x2; })explicitIntrinsicSize;
- (id)initWithView:(id)arg1;
- (void)setContentColor:(id)arg1;
- (void)setContentContainer:(id)arg1;
- (void)setExplicitIntrinsicSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldAutomaticallyScaleUpIntrinsicSize:(bool)arg1;
- (bool)shouldAutomaticallyScaleUpIntrinsicSize;

@end
