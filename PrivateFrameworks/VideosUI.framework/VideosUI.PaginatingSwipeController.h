
@interface VideosUI.PaginatingSwipeController : NSObject <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_cachedTransitionViews;
    void $__lazy_storage_$_gesture;
    void $__lazy_storage_$_mediaShowcaseConfig;
    void carouselBehaviorEnabled;
    void containerView;
    void contentViews;
    void currentView;
    void dataSource;
    void isAutoSwiping;
    void isSwiping;
    void leadingView;
    void metadataFadeInSpeed;
    void trailingView;
    void transitionViews;
}

- (void).cxx_destruct;
- (void)didPanOnView:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;

@end
