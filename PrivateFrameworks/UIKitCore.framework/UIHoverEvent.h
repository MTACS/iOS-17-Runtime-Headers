
@interface UIHoverEvent : UIEvent {
    NSMapTable * _deliveryTableByTouch;
    double  _hoverAltitudeAngle;
    double  _hoverAzimuthAngle;
    double  _maximumPositionZ;
    bool  _pointerLocked;
    double  _positionZ;
    NSMapTable * _touchesByContextId;
    NSMutableSet * _touchesWithOutstandingUpdates;
}

@property (getter=_isPointerLocked, setter=_setPointerLocked:, nonatomic) bool _pointerLocked;
@property (nonatomic, readonly) bool hasOutstandingUpdates;

- (void).cxx_destruct;
- (void)_addHasOutstandingUpdateTouch:(id)arg1;
- (void)_cancelAllGestureRecognizers;
- (void)_cancelAllGestureRecognizersAndRemoveAllHoverTouches;
- (void)_completelyRemoveHoverTouchesForWindow:(id)arg1 contextIdNumber:(id)arg2 withCancellation:(bool)arg3;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)arg1;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (unsigned long long)_inputPrecision;
- (bool)_isPointerLocked;
- (void)_pointerStateDidChange:(id)arg1;
- (void)_removeAllHoverTouchesForContextId:(unsigned int)arg1;
- (void)_resetHasOutstandingUpdateTouches;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setNeedsUpdateForWindow:(id)arg1 forcingHitTest:(bool)arg2;
- (void)_setPointerLocked:(bool)arg1;
- (id)_touchesByContextId:(unsigned int)arg1 createIfNeeded:(bool)arg2;
- (void)_windowDidBecomeHidden:(id)arg1;
- (void)_windowDidDetachContext:(id)arg1;
- (id)_windows;
- (id)allTouches;
- (void)dealloc;
- (bool)hasOutstandingUpdates;
- (id)hoverTouchForContextId:(unsigned int)arg1 pathIndex:(long long)arg2;
- (void)removeHoverTouchForContextId:(unsigned int)arg1 pathIndex:(long long)arg2;
- (void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)setHoverTouch:(id)arg1 forContextId:(unsigned int)arg2 pathIndex:(long long)arg3;
- (void)setNeedsHitTestResetForWindow:(id)arg1;
- (void)setNeedsUpdateForWindow:(id)arg1;
- (long long)subtype;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (long long)type;

@end
