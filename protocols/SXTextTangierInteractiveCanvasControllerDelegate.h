
@protocol SXTextTangierInteractiveCanvasControllerDelegate <TSWPInteractiveCanvasControllerDelegate>

@optional

- (void)interactiveCanvasController:(SXTextTangierInteractiveCanvasController *)arg1 interactedWithHyperlink:(TSWPHyperlinkField *)arg2 info:(SXTextTangierFlowInfo *)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 touchPoint:(struct CGPoint { double x1; double x2; })arg5 touchAndHold:(bool)arg6;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewDidEndDragging:(UIScrollView *)arg2 willDecelerate:(bool)arg3;
- (bool)interactiveCanvasController:(SXTextTangierInteractiveCanvasController *)arg1 shouldBeginInteraction:(UITextInteraction *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)interactiveCanvasControllerWillStartInteraction:(SXTextTangierInteractiveCanvasController *)arg1;

@end
