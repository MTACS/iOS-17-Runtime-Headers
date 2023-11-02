
@interface HoverTextUI.HoverTextEventHandler : NSObject <AXUIEventHandler> {
    void $__lazy_storage_$_activationKeyHoldTimer;
    void $__lazy_storage_$_eventProcessor;
    void activationButtonPressed;
    void activationButtonReleased;
    void activationKey;
    void activationKeyPressCount;
    void activationKeyPressIsActive;
    void activationLockSequenceOccurred;
    void axHandlerQueue;
    void azimuthDidChange;
    void currentStylusAzimuthForElement;
    void elementAtPointerDidChange;
    void lastMouseEventTime;
    void lastStylusEventTime;
    void pointerEventStreams;
    void previousHoverElement;
    void previousKeyModifierState;
    void stylusMoved;
}

- (void).cxx_destruct;
- (bool)handlePointerEvent:(id)arg1;
- (id)init;

@end
