
@interface TeaUI.CardViewAnimationCoordinator : NSObject <UIGestureRecognizerDelegate> {
    void animatingPresentationState;
    void behavior;
    void contentView;
    void coordinatingCoordinators;
    void coordinatingPresentationState;
    void delegate;
    void dimmingAlpha;
    void dimmingView;
    void initialCoordinatingPresentationState;
    void layoutOptions;
    void panGestureRecoginzer;
    void panLockState;
    void panView;
    void parentDelegate;
    void presentationState;
    void rootView;
    void session;
    void state;
}

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleWithRecognizer:(id)arg1;
- (id)init;

@end
