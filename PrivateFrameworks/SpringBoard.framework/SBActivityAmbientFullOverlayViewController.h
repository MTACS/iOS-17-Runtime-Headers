
@interface SBActivityAmbientFullOverlayViewController : SBActivityViewController {
    UIView * _backgroundTintView;
    PLGrabberView * _grabberView;
    PLPlatterView * _platterView;
}

@property (nonatomic, readonly) UIView *backgroundTintView;
@property (nonatomic, readonly) PLPlatterView *platterView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_grabberViewFrame;
- (bool)_hasBackgroundTintColor;
- (bool)_isWidgetBasedActivity;
- (bool)_itemIsFirstPartyActivity:(id)arg1;
- (void)_layoutSubviews;
- (void)_updateBackgroundTintViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(id)arg1;
- (id)backgroundTintView;
- (id)platterView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
