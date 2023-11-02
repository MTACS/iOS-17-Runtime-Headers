
@protocol CKBalloonTextViewInteractionDelegate <NSObject>

@required

- (void)interactionStartedFromPreviewItemControllerInTextView:(UITextView *)arg1;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(UITextView *)arg1;

@optional

- (void)interactionStartedLongPressInTextView:(UITextView *)arg1;
- (void)interactionStartedTapInTextView:(UITextView *)arg1 withModifierFlags:(long long)arg2 selectedText:(NSString *)arg3;
- (void)interactionTextView:(UITextView *)arg1 userDidDragOutsideViewWithPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)interactionTextViewShouldCopyToPasteboard:(UITextView *)arg1;

@end
