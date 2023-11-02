
@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling> {
    UIScreenEdgePanGestureRecognizer * _homeGestureRecognizer;
    SBFZStackParticipant * _zStackParticipant;
    SBFZStackResolver * _zStackResolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addGrabberView:(id)arg1 clientBridge:(id)arg2;
- (id)homeGestureRecognizer;
- (id)init;
- (bool)ownsHomeGesture;
- (bool)registerHomeGestureParticipant:(id)arg1;
- (void)setHomeGestureRecognizer:(id)arg1;
- (void)unregisterHomeGestureParticipant;

@end
