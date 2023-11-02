
@protocol SiriActivationButtonEventListenerDelegate

@required

- (void)buttonEventListenerDidReceiveButtonDownWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)buttonEventListenerDidReceiveButtonLongPressWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)buttonEventListenerDidReceiveButtonUpWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;

@end
