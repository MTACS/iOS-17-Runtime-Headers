
@interface TeaUI.SwipeActionManager : NSObject <UIGestureRecognizerDelegate> {
    void collectionView;
    void dataSource;
    void deferGroup;
    void delegate;
    void fadeDuration;
    void fadeOffset;
    void isSwipeActionEnabled;
    void maximumSwipeVelocity;
    void panGestureRecognizer;
    void rubberbandFactor;
    void snapOpenPercentage;
    void springStiffness;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  swipeState;
    void tapGestureRecognizer;
}

- (void).cxx_destruct;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGestureWithRecognizer:(id)arg1;
- (void)handleTapGestureWithRecognizer:(id)arg1;
- (id)init;

@end
