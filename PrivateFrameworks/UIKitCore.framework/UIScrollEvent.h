
@interface UIScrollEvent : UIEvent {
    UIGestureRecognizer * _asyncDeliveryGesture;
    <_UIScrollEventAsyncDeliveryTarget> * _asyncDeliveryTarget;
    NSMapTable * _gestureRecognizersByWindow;
    bool  _hasSimulatedMomentumDelta;
    bool  _isCloneForAsyncDelivery;
    bool  _isDoingAsyncDelivery;
    bool  _isStiflingDeltas;
    unsigned long long  _lastDeliveredPhase;
    unsigned long long  _lastReceivedPhase;
    NSMutableSet * _outstandingSnapshotEventsForAsyncDelivery;
    unsigned long long  _phase;
    BKSHIDEventPointerAttributes * _pointerAttributes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sceneReferenceLocation;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _simulatedMomentumDelta;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _stifledDelta;
}

@property (readonly) struct CGVector { double x1; double x2; } acceleratedDelta;
@property (getter=_beganScrollTimestamp, nonatomic, readonly) double beganScrollTimestamp;
@property (readonly) bool directionInvertedFromDevice;
@property (getter=_isHighResolution, nonatomic, readonly) bool highResolution;
@property (readonly) struct CGVector { double x1; double x2; } nonAcceleratedDelta;
@property (readonly) unsigned long long phase;
@property (getter=_scrollDeviceCategory, nonatomic, readonly) unsigned long long scrollDeviceCategory;
@property (getter=_scrollType, nonatomic, readonly) unsigned long long scrollType;
@property (getter=_stifledDelta, nonatomic, readonly) struct CGVector { double x1; double x2; } stifledDelta;

- (void).cxx_destruct;
- (struct CGVector { double x1; double x2; })_adjustedAcceleratedDeltaInView:(id)arg1;
- (struct CGVector { double x1; double x2; })_adjustedDeltaForPanWithAcceleration:(bool)arg1 honoringScrollDirectionPreference:(bool)arg2;
- (double)_beganScrollTimestamp;
- (void)_beginStiflingDeltas;
- (void)_cleanupAfterDispatch;
- (id)_cloneEvent;
- (bool)_consumeBeforeDeliveryToGestureRecognizers:(id)arg1 inWindow:(id)arg2;
- (struct CGVector { double x1; double x2; })_convertDeltaFromHIDDeviceSpaceToSceneReferenceSpaceIfNeeded:(struct CGVector { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_convertPointFromSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPointToSceneReferenceSpace:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (void)_endStiflingDeltas;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (bool)_hasDeliveredTerminalPhase;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (bool)_isHighResolution;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizersFromWindows;
- (unsigned long long)_scrollDeviceCategory;
- (unsigned long long)_scrollType;
- (void)_sendCancelToGestureRecognizer:(id)arg1;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)_shouldSendEvent;
- (void)_simulateMomentumWithDelta:(struct CGVector { double x1; double x2; })arg1 inView:(id)arg2;
- (struct CGVector { double x1; double x2; })_stifledDelta;
- (void)_wasDeliveredToGestureRecognizers;
- (id)_windowServerHitTestWindow;
- (id)_windows;
- (struct CGVector { double x1; double x2; })acceleratedDelta;
- (bool)directionInvertedFromDevice;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGVector { double x1; double x2; })nonAcceleratedDelta;
- (unsigned long long)phase;
- (long long)subtype;
- (long long)type;

@end
