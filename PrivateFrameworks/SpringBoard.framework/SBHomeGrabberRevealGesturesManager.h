
@interface SBHomeGrabberRevealGesturesManager : NSObject <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * _bounceTapRecognizer;
    bool  _gestureEnabled;
    NSHashTable * _registeredGrabbers;
    NSObject<OS_dispatch_queue> * _registrationQueue;
    UITapGestureRecognizer * _revealDoubleTapRecognizer;
    UIScreenEdgePanGestureRecognizer * _revealEdgePanRecognizer;
    UITapGestureRecognizer * _revealTapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_edgePanChanged:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerContainsPointerEvent:(id)arg1;
- (id)init;
- (void)registerGrabber:(id)arg1;
- (void)unregisterGrabber:(id)arg1;

@end
