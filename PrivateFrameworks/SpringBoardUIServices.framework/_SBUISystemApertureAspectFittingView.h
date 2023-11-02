
@interface _SBUISystemApertureAspectFittingView : UIView <SBUISystemApertureContentIntrinsicSizeScaling> {
    <SBUISystemApertureContentViewContaining> * _contentContainer;
    UIView * _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _explicitIntrinsicSize;
    bool  _shouldAutomaticallyScaleUpIntrinsicSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } explicitIntrinsicSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAutomaticallyScaleUpIntrinsicSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })explicitIntrinsicSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setExplicitIntrinsicSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldAutomaticallyScaleUpIntrinsicSize:(bool)arg1;
- (bool)shouldAutomaticallyScaleUpIntrinsicSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
