
@interface AVScrollingObserver : NSObject <_UIScrollViewScrollObserver> {
    NSHashTable * _delegates;
    NSHashTable * _observedScrollViews;
    bool  _scrolling;
    NSTimer * _scrollingDidEndTimer;
    bool  _scrollingQuickly;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isScrolling, nonatomic) bool scrolling;
@property (getter=isScrollingQuickly, nonatomic) bool scrollingQuickly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_updateScrollingStatus;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (bool)isScrolling;
- (bool)isScrollingQuickly;
- (void)removeDelegate:(id)arg1;
- (void)setScrolling:(bool)arg1;
- (void)setScrollingQuickly:(bool)arg1;
- (void)update;

@end
