
@interface SBKeyboardHomeAffordanceController : NSObject <SBHomeGrabberDelegate, SBMedusaHostedKeyboardWindowControllerObserver, SBSceneHandleObserver, SBUIActiveOrientationObserver> {
    NSHashTable * _assertions;
    SBHomeGrabberRotationView * _homeGrabberView;
    bool  _isHomeGrabberContainingViewAlwaysPortrait;
    bool  _isKeyboardDocked;
    SBKeyboardHomeAffordanceAssertion * _topMostAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didChangeAdditionalEdgeMarginForAssertion:(id)arg1;
- (void)_didChangeKeyboardDocked:(id)arg1;
- (void)_getHomeGrabberContainingView:(id*)arg1 isAlwaysPortrait:(bool*)arg2;
- (void)_updateHomeAffordance;
- (void)_updateTopMostAssertion;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)registerAssertion:(id)arg1;
- (bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (void)unregisterAssertion:(id)arg1;
- (void)usingMedusaHostedKeyboardWindowDidChange;

@end
