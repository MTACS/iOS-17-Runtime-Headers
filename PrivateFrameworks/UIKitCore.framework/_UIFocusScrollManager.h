
@interface _UIFocusScrollManager : NSObject {
    UIScreen * _screen;
    _UIFocusDisplayLinkScrollAnimator * _scrollAnimator;
    NSHashTable * _stackVisitedScrollingContainers;
}

@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) _UIFocusDisplayLinkScrollAnimator *scrollAnimator;
@property (nonatomic, readonly) NSHashTable *stackVisitedScrollingContainers;

- (void).cxx_destruct;
- (void)_ensureFocusItemIsOnscreenForScrollRequest:(id)arg1;
- (bool)_scrollWithScrollRequest:(id)arg1 onlyIfNecessary:(bool)arg2;
- (void)adjustTargetContentOffsetForScrollableContainer:(id)arg1 byDelta:(struct CGPoint { double x1; double x2; })arg2;
- (void)animateOffsetOfEnvironmentScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2;
- (void)animateOffsetOfScrollableContainersInParentEnvironmentContainer:(id)arg1 toShowFocusItem:(id)arg2;
- (void)cancelScrollingForScrollableContainer:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForEnvironmentScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })contentOffsetForEnvironmentScrollableContainer:(id)arg1 toShowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })currentVelocityForScrollableContainer:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (bool)isScrollingScrollableContainer:(id)arg1;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;
- (id)screen;
- (id)scrollAnimator;
- (id)stackVisitedScrollingContainers;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForScrollableContainer:(id)arg1;

@end
