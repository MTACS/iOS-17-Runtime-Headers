
@interface _UIDatePickerContainerViewController : UIViewController <_UIPassthroughScrollInteractionDelegate> {
    double  _keyboardAdjustmentOffset;
    id /* block */  _pendingKeyboardAdjustment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyboardAdjustmentOffset;
@property (nonatomic, copy) id /* block */ pendingKeyboardAdjustment;
@property (nonatomic, readonly) _UIDatePickerOverlayPresentation *presentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
- (void)_didReceiveEscapeKey:(id)arg1;
- (void)dealloc;
- (void)didChangeKeyboardAvoidanceAdjustmentDeferral;
- (id)initWithPresentation:(id)arg1;
- (id)keyCommands;
- (double)keyboardAdjustmentOffset;
- (void)keyboardFrameWillChange:(id)arg1;
- (bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (id /* block */)pendingKeyboardAdjustment;
- (id)presentation;
- (void)setKeyboardAdjustmentOffset:(double)arg1;
- (void)setPendingKeyboardAdjustment:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
