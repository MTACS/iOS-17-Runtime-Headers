
@interface TVREventHaptic : NSObject {
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    UINotificationFeedbackGenerator * _notificationFeedbackGenerator;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
}

- (void).cxx_destruct;
- (void)playImpactEventHaptic;
- (void)playSelectionEventHaptic;
- (void)playSuccessEventHaptic;

@end
