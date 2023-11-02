
@protocol CSModalHomeAffordanceControlling <NSObject>

@required

- (UIScreenEdgePanGestureRecognizer *)homeGestureRecognizer;
- (bool)ownsHomeGesture;
- (bool)registerHomeGestureParticipant:(id <CSModalHomeGestureParticipating>)arg1;
- (void)setHomeGestureRecognizer:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)unregisterHomeGestureParticipant;

@end
