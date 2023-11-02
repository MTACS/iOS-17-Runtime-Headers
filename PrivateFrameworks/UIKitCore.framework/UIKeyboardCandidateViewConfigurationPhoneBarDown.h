
@interface UIKeyboardCandidateViewConfigurationPhoneBarDown : UIKeyboardCandidateViewConfigurationPhoneBar

- (bool)allowsPullDownGesture;
- (id)extendedScrolledState;
- (id)extendedState;
- (id)initialState;
- (unsigned long long)rowsToExtend;
- (bool)shouldResizeKeyboardBackdrop;
- (bool)willCoverKeyboardLayout;

@end
