
@interface SBActivityAmbientCompactOverlayViewController : SBActivityViewController {
    <SBActivityAmbientCompactOverlayViewControllerDelegate> * _compactOverlayDelegate;
    PLPlatterView * _platterView;
}

@property (nonatomic) <SBActivityAmbientCompactOverlayViewControllerDelegate> *compactOverlayDelegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) PLPlatterView *platterView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureTapGesture;
- (void)_handleTapGesture;
- (void)_layoutSubviews;
- (void)activityHostViewController:(id)arg1 requestsLaunchWithAction:(id)arg2;
- (id)compactOverlayDelegate;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)cornerRadius;
- (id)platterView;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCompactOverlayDelegate:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
