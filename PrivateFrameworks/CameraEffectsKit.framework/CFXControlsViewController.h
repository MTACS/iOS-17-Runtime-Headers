
@interface CFXControlsViewController : UIViewController {
    UIView * _controlsContainerView;
    NSLayoutConstraint * _controlsContainerViewHeightConstraint;
    NSLayoutConstraint * _controlsContainerViewLeadingConstraint;
    NSLayoutConstraint * _controlsContainerViewTopConstraint;
    NSLayoutConstraint * _controlsContainerViewTrailingConstraint;
    NSLayoutConstraint * _controlsContainerViewWidthConstraint;
    CFXEffectBrowserContentPresenterViewController * _effectBrowserContentPresenterViewController;
    UIView * _effectsBrowser;
    UIView * _effectsPickerDrawer;
    bool  _usesInternalCaptureSession;
}

@property (nonatomic) UIView *controlsContainerView;
@property (nonatomic, retain) NSLayoutConstraint *controlsContainerViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *controlsContainerViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *controlsContainerViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *controlsContainerViewTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *controlsContainerViewWidthConstraint;
@property (nonatomic, retain) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController;
@property (nonatomic, retain) UIView *effectsBrowser;
@property (nonatomic, retain) UIView *effectsPickerDrawer;
@property (nonatomic) bool usesInternalCaptureSession;

- (void).cxx_destruct;
- (id)controlsContainerView;
- (id)controlsContainerViewHeightConstraint;
- (id)controlsContainerViewLeadingConstraint;
- (id)controlsContainerViewTopConstraint;
- (id)controlsContainerViewTrailingConstraint;
- (id)controlsContainerViewWidthConstraint;
- (id)effectBrowserContentPresenterViewController;
- (id)effectsBrowser;
- (struct CGPoint { double x1; double x2; })effectsPickerCenter;
- (id)effectsPickerDrawer;
- (id)effectsPickerSnapshot;
- (void)setControlsContainerView:(id)arg1;
- (void)setControlsContainerViewHeightConstraint:(id)arg1;
- (void)setControlsContainerViewLeadingConstraint:(id)arg1;
- (void)setControlsContainerViewTopConstraint:(id)arg1;
- (void)setControlsContainerViewTrailingConstraint:(id)arg1;
- (void)setControlsContainerViewWidthConstraint:(id)arg1;
- (void)setEffectBrowserContentPresenterViewController:(id)arg1;
- (void)setEffectsBrowser:(id)arg1;
- (void)setEffectsPickerDrawer:(id)arg1;
- (void)setUsesInternalCaptureSession:(bool)arg1;
- (bool)usesInternalCaptureSession;
- (void)viewDidLoad;

@end
