
@interface CapsuleHidingStepperViewController : StepperViewController <UIGestureRecognizerDelegate> {
    CapsuleNavigationBarViewController * _capsuleViewController;
    UIPanGestureRecognizer * _panRecognizer;
    UITapGestureRecognizer * _tapRecognizer;
}

@property CapsuleNavigationBarViewController *capsuleViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceivePan:(id)arg1;
- (void)_didReceiveTap:(id)arg1;
- (id)capsuleViewController;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setCapsuleViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
