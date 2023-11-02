
@interface UIEvent : NSObject {
    double  __initialTouchTimestamp;
    long long  _buttonMask;
    UIScreen * _cachedScreen;
    UIEventEnvironment * _eventEnvironment;
    NSMutableSet * _eventObservers;
    struct __GSEvent { } * _gsEvent;
    bool  _hasValidModifiers;
    struct __IOHIDEvent { } * _hidEvent;
    bool  _isInteractionBehaviorInactive;
    unsigned long long  _mzClickCount;
    long long  _mzModifierFlags;
    double  _timestamp;
    long long  _trackpadFingerDownCount;
}

@property (nonatomic, readonly) BKSHIDEventAuthenticationMessage *_authenticationMessage;
@property (nonatomic, readonly) double _initialTouchTimestamp;
@property (nonatomic, readonly) unsigned long long _inputPrecision;
@property (nonatomic, readonly) NSSet *allTouches;
@property (nonatomic, readonly) long long buttonMask;
@property (nonatomic, readonly) bool ic_isPencilEvent;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) bool pnp_isPencilEvent;
@property (nonatomic, readonly) long long subtype;
@property (setter=_setTimestamp:, nonatomic) double timestamp;
@property (getter=_trackpadFingerDownCount, nonatomic, readonly) long long trackpadFingerDownCount;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (unsigned long long)_inputPrecisionForTouches:(id)arg1;

- (void).cxx_destruct;
- (id)_authenticationMessage;
- (long long)_buttonMask;
- (void)_cleanupAfterDispatch;
- (unsigned long long)_clickCount;
- (id)_cloneEvent;
- (bool)_consumeBeforeDeliveryToGestureRecognizers:(id)arg1 inWindow:(id)arg2;
- (void)_didSendEvent;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (unsigned long long)_focusHeading;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (struct __GSEvent { }*)_gsEvent;
- (struct __IOHIDEvent { }*)_hidEvent;
- (id)_init;
- (id)_initWithEnvironment:(id)arg1;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (double)_initialTouchTimestamp;
- (unsigned long long)_inputPrecision;
- (bool)_isInteractionBehaviorInactive;
- (bool)_isKeyDown;
- (bool)_isPhysicalKeyEvent;
- (bool)_isTouchRoutingPolicyBased;
- (long long)_keyModifierFlags;
- (id)_modifiedInput;
- (long long)_modifierFlags;
- (long long)_moveDirection;
- (id)_screen;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setGSEvent:(struct __GSEvent { }*)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setTimestamp:(double)arg1;
- (int)_shakeState;
- (bool)_shouldSkipEventDeliveryWithIgnoreInteractionEvents:(bool)arg1;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (long long)_trackpadFingerDownCount;
- (id)_triggeringPhysicalButton;
- (id)_unmodifiedInput;
- (void)_wasDeliveredToGestureRecognizers;
- (double)_wheelVelocity;
- (id)_windows;
- (id)allTouches;
- (long long)buttonMask;
- (id)coalescedTouchesForTouch:(id)arg1;
- (void)dealloc;
- (long long)modifierFlags;
- (id)predictedTouchesForTouch:(id)arg1;
- (long long)subtype;
- (double)timestamp;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (long long)type;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

- (unsigned long long)PK_activeInputPropertiesForTouch:(id)arg1;
- (bool)PK_isEventFromCrayon;
- (bool)PK_isEventFromPencil;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)ic_isPencilEvent;

// Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI

- (bool)pnp_isPencilEvent;

@end
