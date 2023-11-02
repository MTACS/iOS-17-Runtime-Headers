
@interface SwiftUI.ScrollViewHelper : NSObject <UIScrollViewDelegate, _UIUpdateCycleIdleObserver> {
    void _containerSize;
    void _eventState;
    void _layoutState;
    void _prefetchState;
    void axes;
    void beginPanningOffset;
    void contentMargins;
    void decelerationBias;
    void defaultDismissKeyboardMode;
    void delegate;
    void ignoreUpdates;
    void isAnimationCheckPending;
    void lastBoundsSize;
    void lastEventModes;
    void lastOffsetChange;
    void lastVelocity;
    void options;
    void pendingUpdate;
    void properties;
    void scrollView;
}

- (void).cxx_destruct;
- (void)_updateCycleIdleUntil:(unsigned long long)arg1;
- (id)init;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;

@end
