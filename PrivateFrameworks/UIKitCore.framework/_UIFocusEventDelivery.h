
@interface _UIFocusEventDelivery : NSObject {
    UIFocusSystem * _focusSystem;
    NSMutableSet * _keyboardPressEventForwardingMap;
    long long  _lastDeliveredMovement;
    double  _lastDeliveredTimestamp;
}

@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly) NSMutableSet *keyboardPressEventForwardingMap;

- (void).cxx_destruct;
- (bool)_movementParticipatesInCooldown:(long long)arg1;
- (id)focusSystem;
- (id)init;
- (id)initWithFocusSystem:(id)arg1;
- (id)keyboardPressEventForwardingMap;
- (bool)shouldDeliverFocusKeyboardEvent:(id)arg1 toResponder:(id)arg2;
- (bool)shouldSkipKeyCommand:(id)arg1 whenDeliveringFocusKeyboardEvent:(id)arg2 toResponder:(id)arg3;
- (void)willDeliverFocusKeyboardEvent:(id)arg1;

@end
