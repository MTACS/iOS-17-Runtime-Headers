
@interface UIKeyboardCandidateViewConfigurationPhoneBar : UIKeyboardCandidateViewConfiguration

- (id)extendedScrolledState;
- (id)extendedState;
- (id)initialState;
- (unsigned long long)rowsToExtend;
- (bool)shouldResizeKeyboardBackdrop;
- (bool)shouldUsePredictionViewSecureRenderTraits;

@end
