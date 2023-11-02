
@interface SBInteractiveScreenshotGestureHostRootViewController : SBFTouchPassThroughViewController <BSInvalidatable> {
    unsigned int  _hostingContextID;
    int  _hostingPid;
    _UILayerHostView * _layerHostView;
    UIScreen * _screen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_reloadLayerHostView;
- (id)initWithScreen:(id)arg1;
- (void)invalidate;
- (void)setHostingContextID:(unsigned int)arg1 pid:(int)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
