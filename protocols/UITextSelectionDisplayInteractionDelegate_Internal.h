
@protocol UITextSelectionDisplayInteractionDelegate_Internal <NSObject>

@optional

- (<UITextCursorAssertion> *)_selectionViewManager:(UITextSelectionDisplayInteraction *)arg1 obtainBlinkSuppressionAssertionForReason:(NSString *)arg2;
- (<UITextCursorAssertion> *)_selectionViewManager:(UITextSelectionDisplayInteraction *)arg1 obtainGhostCursorAssertionForReason:(NSString *)arg2;
- (UITextSelection *)activeSelection;

@end
