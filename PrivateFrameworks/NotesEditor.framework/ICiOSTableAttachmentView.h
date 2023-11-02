
@interface ICiOSTableAttachmentView : ICTableAttachmentView

- (id)accessibilityElements;
- (id)accessibilityLabel;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)isAccessibilityElement;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (id)tableAttachmentViewController;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidMoveToSuperview;

@end
