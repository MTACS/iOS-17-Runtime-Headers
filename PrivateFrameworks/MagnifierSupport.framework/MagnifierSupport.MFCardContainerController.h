
@interface MagnifierSupport.MFCardContainerController : NSObject <UIGestureRecognizerDelegate> {
    void cardDragAndDropAnimator;
    void cardHeightConstraint;
    void cardPosition;
    void collapsingMiddleAnimator;
    void containerHeightConstraint;
    void containerTopConstraint;
    void containerView;
    void delegate;
    void draggingAnimator;
    void fadingBottomAnimator;
    void grabStartFrame;
    void grabStartLocation;
    void panGestureRecognizer;
    void rubberbandConfiguration;
    void startingCardHeight;
    void xPositionConstraint;
    void yPositionConstraint;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handlePanGestureWithSender:(id)arg1;
- (id)init;

@end
