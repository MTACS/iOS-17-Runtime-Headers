
@interface CSDismissableModalViewController : CSPresentationViewController <CSModalHomeGestureParticipating, SBFBarSwipeBehaviorDelegate, UIGestureRecognizerDelegate> {
    SBFBarSwipeBehavior * _barSwipeBehavior;
    UIScreenEdgePanGestureRecognizer * _bottomEdgeRecognizer;
    <CSDismissableModalViewControllerDelegate> * _delegate;
    <CSModalHomeAffordanceControlling> * _homeAffordanceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSDismissableModalViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CSModalHomeAffordanceControlling> *homeAffordanceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_configureBarSwipeBehaviorWithGrabberViewIfNecessary:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_handleBottomEdgeGestureRecognizer:(id)arg1;
- (void)addGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForGrabberView:(id)arg1;
- (void)barSwipeBehaviorActionPerformed:(id)arg1;
- (id)delegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (id)homeAffordanceController;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(bool)arg1;
- (bool)presentationCancelsTouches;
- (void)setDelegate:(id)arg1;
- (void)setHomeAffordanceController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
