
@interface HUPCCenterFillContentController : HUPCFullCenterContentViewController {
    UIView * _centerFillContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    unsigned long long  _contentMode;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UIView * _contentViewContainer;
    NSLayoutConstraint * _contentViewContainerHeightConstraint;
    NSLayoutConstraint * _contentViewContainerWidthConstraint;
    NSLayoutConstraint * _contentViewLeadingConstraint;
    NSLayoutConstraint * _contentViewTopConstraint;
    NSLayoutConstraint * _contentViewTrailingConstraint;
}

@property (nonatomic, readonly) UIView *centerFillContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, readonly) UIView *contentViewContainer;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewContainerHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewContainerWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewLeadingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewTopConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *contentViewTrailingConstraint;

- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (void)_updateContentViewContainerConstraints;
- (void)_updateContentViewInsetConstraints;
- (void)_viewDidUpdateContent;
- (id)centerFillContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (unsigned long long)contentMode;
- (id)contentViewBottomConstraint;
- (id)contentViewContainer;
- (id)contentViewContainerHeightConstraint;
- (id)contentViewContainerWidthConstraint;
- (id)contentViewLeadingConstraint;
- (id)contentViewTopConstraint;
- (id)contentViewTrailingConstraint;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 contentView:(id)arg3;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentMode:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
