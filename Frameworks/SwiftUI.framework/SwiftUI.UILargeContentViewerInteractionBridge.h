
@interface SwiftUI.UILargeContentViewerInteractionBridge : NSObject <UIGestureRecognizerDelegate, UILargeContentViewerInteractionDelegate> {
    void activeItem;
    void gesture;
    void host;
    void interaction;
    void largeContentViewTree;
    void largeContentViewTreeSeed;
    void showLargeContentViewer;
    void simultaneousGesture;
}

- (void).cxx_destruct;
- (void)enabledStatusDidChange;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)largeContentViewerInteraction:(id)arg1 didEndOnItem:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)largeContentViewerInteraction:(id)arg1 itemAtPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
