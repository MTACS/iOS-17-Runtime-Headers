
@interface ICNestedScrollViewPanInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIScrollViewDelegate> {
    void delegate;
    void enabledForSequence;
    void exclusionGestureRecognizer;
    void hiddenScrollView;
    void linearDataModel;
    void nestedScrollVerticalPanBlocker;
    void nestedScrollableViews;
    void view;
}

@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
