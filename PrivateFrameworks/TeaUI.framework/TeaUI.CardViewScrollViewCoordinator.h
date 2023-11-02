
@interface TeaUI.CardViewScrollViewCoordinator : NSObject <UIScrollViewDelegate> {
    void delegate;
    void isEnabled;
    void isTransitioning;
    void scrollLock;
    void scrollView;
    void trackingPollTimer;
}

- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
