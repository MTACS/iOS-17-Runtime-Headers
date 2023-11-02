
@interface PXViewControllerSwipeDownDismissalController : NSObject {
    void centerOffsetAnimator;
    void centerOffsetAnimatorObservation;
    void currentGestureLocation;
    void currentGestureVelocity;
    void initialGestureLocation;
    void initialItemPlacement;
    void referenceView;
    void releaseAnimationDismissalProgressAnimator;
    void releaseAnimationProgressAnimator;
    void sourceSize;
    void state;
    void swipeDownTracker;
    void targetCancelled;
    void targetCenter;
    void targetSize;
    void updater;
    void viewControllerTransition;
    void viewControllerTransitionObservation;
}

- (void).cxx_destruct;
- (id)init;
- (void)setNeedsUpdate;
- (void)updateCurrentPlacement;
- (void)updateInitialPlacement;
- (void)updateSwipeDownTracker;

@end
