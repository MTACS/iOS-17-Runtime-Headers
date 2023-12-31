
@protocol _UIResponderForwardable <NSObject>

@required

- (void)_abandonForwardingRecord;
- (long long)_forwardablePhase;
- (NSArray *)_forwardingRecord;
- (bool)_isAbandoningForwardingRecord;
- (NSMutableArray *)_mutableForwardingRecord;
- (UIResponder<_UIGestureOwning> *)_responder;
- (long long)_responderForwardableType;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (void)_setForwardablePhase:(long long)arg1;
- (void)_setResponder:(UIResponder<_UIGestureOwning> *)arg1;
- (bool)_wantsForwardingFromResponder:(UIResponder *)arg1 toNextResponder:(UIResponder *)arg2 withEvent:(UIEvent *)arg3;
- (NSArray *)gestureRecognizers;
- (UIWindow *)window;

@end
