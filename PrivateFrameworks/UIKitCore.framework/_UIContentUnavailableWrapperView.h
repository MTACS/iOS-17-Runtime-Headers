
@interface _UIContentUnavailableWrapperView : UIView {
    UIView * _backgroundView;
    UIScrollView * _contentScrollView;
    UIView * _contentView;
    bool  _isConfiguringContentScrollView;
    NSMutableDictionary * _parentScrollViews;
    UIViewController * _viewController;
    <_UIContentViewInternal> * _viewForConfiguration;
}

@property (nonatomic, copy) <UIContentConfiguration> *configuration;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_canApplyConfigurationToExistingContentView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_concreteDefaultLayoutMargins;
- (id)_contentScrollViewForView:(id)arg1;
- (void)_updateBackgroundView;
- (void)_updateBackgroundViewHandlersForPreviousContentView:(id)arg1 newContentView:(id)arg2;
- (void)_updateContentView:(id)arg1;
- (id)configuration;
- (id)contentView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithViewController:(id)arg1;
- (void)reconfigureContentScrollView;
- (void)removeFromSuperview;
- (void)setConfiguration:(id)arg1;
- (id)viewController;

@end
