
@interface UIPressesEvent : UIEvent {
    NSMutableSet * _allPresses;
    UIPress * _lastPreparedPress;
    NSHashTable * _terminalEventRegistrants;
}

@property (nonatomic, retain) UIPress *_lastPreparedPress;
@property (nonatomic, readonly) NSSet *allPresses;
@property (nonatomic, readonly) long long smu_triggeringPhysicalButtonPressType;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_addGesturesForPress:(id)arg1;
- (void)_addPress:(id)arg1 forDelayedDelivery:(bool)arg2;
- (id)_allPresses;
- (void)_cleanupAfterDispatch;
- (id)_cloneEvent;
- (id)_directionalPressWithStrongestForce;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (id)_lastPreparedPress;
- (long long)_modifierFlags;
- (id)_pressesForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;
- (id)_pressesForPhase:(long long)arg1;
- (id)_pressesForResponder:(id)arg1 withPhase:(long long)arg2;
- (id)_pressesForWindow:(id)arg1;
- (void)_registerForTerminalEvent:(id)arg1;
- (void)_removePress:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (id)_terminalRegistrantsForPressType:(long long)arg1;
- (void)_unregisterForTerminalEvent:(id)arg1;
- (id)_windows;
- (id)allPresses;
- (id)description;
- (id)pressesForGestureRecognizer:(id)arg1;
- (void)set_lastPreparedPress:(id)arg1;
- (long long)subtype;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (long long)smu_triggeringPhysicalButtonPressType;

@end
