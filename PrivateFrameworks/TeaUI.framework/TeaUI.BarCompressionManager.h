
@interface TeaUI.BarCompressionManager : NSObject <TUDynamicBarAnimatorDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UITableViewDelegate> {
    void $__lazy_storage_$_state;
    void _lastBarCompressEvent;
    void barAnimator;
    void barState;
    void delegate;
    void initialContentOffset;
    void isEnabled;
    void lastContentOffset;
    void navigationBarAnimation;
    void observingToken;
    void proxyMultiDelegate;
    void sceneStateManager;
    void scrollDebounce;
    void scrollView;
    void shouldExpandAtBottom;
    void tabBarAnimation;
    void toolbarAnimation;
}

- (void).cxx_destruct;
- (bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(id)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)voiceOverStatusDidChange;

@end
