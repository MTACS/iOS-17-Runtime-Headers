
@interface _UITVScrollViewManager : NSObject <_UIScrollViewScrollObserver> {
    <_UITVScrollViewManagerDelegate> * _delegate;
    bool  _delegateScrollViewManagerDidFinishScrolling;
    bool  _ignoreScrollAnimationDidEnd;
    CASpringAnimation * _scrollAnimation;
    long long  _scrollStyle;
    UIScrollView * _scrollView;
    UIView * _snapshotViewForWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetOffset;
    bool  _useCustomMaskForScrolling;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UITVScrollViewManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreScrollAnimationDidEnd;
@property (nonatomic, retain) CASpringAnimation *scrollAnimation;
@property (nonatomic) long long scrollStyle;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *snapshotViewForWindow;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetOffset;
@property (nonatomic) bool useCustomMaskForScrolling;

- (void).cxx_destruct;
- (id)_customScrollingMaskForScrollView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_removeScreenshotViewIfNeeded;
- (void)_scroll:(id)arg1 toContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_scrollAnimationDidEnd:(id)arg1;
- (void)_tearDown:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)ignoreScrollAnimationDidEnd;
- (id)initWithScrollView:(id)arg1 scrollStyle:(long long)arg2;
- (id)scrollAnimation;
- (long long)scrollStyle;
- (id)scrollView;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreScrollAnimationDidEnd:(bool)arg1;
- (void)setScrollAnimation:(id)arg1;
- (void)setScrollStyle:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSnapshotViewForWindow:(id)arg1;
- (void)setTargetOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUseCustomMaskForScrolling:(bool)arg1;
- (id)snapshotViewForWindow;
- (struct CGPoint { double x1; double x2; })targetOffset;
- (bool)useCustomMaskForScrolling;

@end
