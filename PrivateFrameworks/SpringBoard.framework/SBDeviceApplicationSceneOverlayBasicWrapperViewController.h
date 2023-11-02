
@interface SBDeviceApplicationSceneOverlayBasicWrapperViewController : UIViewController <SBDeviceApplicationSceneOverlayViewController> {
    UIViewController * _contentViewController;
    SBDeviceApplicationSceneOverlayBasicWrapperView * _contentWrapperView;
    bool  _needsCounterRotation;
    bool  _rendersWhileLocked;
}

@property (nonatomic, readonly) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithContentViewController:(id)arg1 rendersWhileLocked:(bool)arg2 needsCounterRotation:(bool)arg3;
- (void)loadView;
- (id)overlayView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
