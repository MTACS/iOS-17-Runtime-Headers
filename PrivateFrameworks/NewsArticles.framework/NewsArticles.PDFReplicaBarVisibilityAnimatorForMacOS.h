
@interface NewsArticles.PDFReplicaBarVisibilityAnimatorForMacOS : NSObject <UIGestureRecognizerDelegate> {
    void barHideTimer;
    void barHider;
    void delegate;
    void hoverGestureRecognizer;
    void shouldHideStatusBar;
}

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleHoverGestureWithRecognizer:(id)arg1;
- (id)init;

@end
