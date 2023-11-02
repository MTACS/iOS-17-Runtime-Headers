
@protocol _UISheetPresentationControllerClientRemotePresentationDelegate <NSObject>

@required

- (void)_sheetGrabberDidTriggerPrimaryAction;
- (void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)arg1 dismissible:(bool)arg2 interruptedOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 animateChange:(bool)arg3 dismissible:(bool)arg4;
- (void)_sheetInteractionDraggingDidEnd;
- (void)_sheetPresentationControllerClientConfigurationDidChange:(_UISheetPresentationControllerClientConfiguration *)arg1;

@optional

- (void)_sheetPresentationControllerDidChangeContainsFirstResponder:(bool)arg1 firstResponderRequiresKeyboard:(bool)arg2 keyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
