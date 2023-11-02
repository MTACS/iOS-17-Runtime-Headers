
@interface UIGestureEnvironment : NSObject {
    <BSInvalidatable> * _blockedResetStateCaptureToken;
    NSMutableArray * _delayedPresses;
    NSMutableArray * _delayedPressesToSend;
    NSMutableArray * _delayedTouches;
    NSMutableArray * _delayedTouchesToSend;
    UIGestureGraph * _dependencyGraph;
    NSMutableArray * _dirtyGestureRecognizers;
    bool  _dirtyGestureRecognizersUnsorted;
    struct __CFRunLoopObserver { } * _gestureEnvironmentUpdateObserver;
    NSMutableSet * _gestureRecognizersBlockedFromReset;
    NSMutableSet * _gestureRecognizersNeedingRemoval;
    NSMutableSet * _gestureRecognizersNeedingReset;
    NSMutableSet * _gestureRecognizersNeedingUpdate;
    bool  _isUpdatingGestureEnvironment;
    unsigned long long  _lastBlockedResetEvaluationMachTime;
    NSMapTable * _nodesByGestureRecognizer;
    NSMutableArray * _preUpdateActions;
    bool  _updateExclusivity;
}

- (void).cxx_destruct;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeGestureRecognizer:(id)arg1;

@end
