
@interface PXGScrollViewContainer : UIView <PXChangeObserver, PXGReusableView, PXScrollViewControllerObserver, PXUIScrollViewControllerFocusItemProvider> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    <PXGScrollViewContainerDelegate> * _delegate;
    struct { 
        bool willBeginScrolling; 
        bool didScroll; 
        bool willEndScrollingWithVelocityTargetContentOffsetCurrentContentOffset; 
        bool didEndScrolling; 
        bool focusItemsInRect; 
    }  _delegateRespondsTo;
    bool  _isUpdatingScrollViewController;
    PXScrollViewController * _scrollViewController;
    PXGScrollViewModel * _scrollViewModel;
    PXScrollViewSpeedometer * _speedometer;
    PXUpdater * _updater;
    PXGScrollViewContainerConfiguration * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PXGScrollViewContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRTL;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, retain) PXGScrollViewModel *scrollViewModel;
@property (nonatomic, readonly) bool shouldFlipContentOffset;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, readonly) PXScrollViewSpeedometer *speedometer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, copy) PXGScrollViewContainerConfiguration *userData;

- (void).cxx_destruct;
- (void)_invalidateScrollViewController;
- (void)_invalidateScrollViewDecelerationRate;
- (void)_invalidateScrollViewModel;
- (void)_setNeedsUpdate;
- (void)_updateScrollViewController;
- (void)_updateScrollViewDecelerationRate;
- (void)_updateScrollViewModel;
- (void)_willLayout;
- (void)addHostedLayer:(id)arg1;
- (void)addHostedView:(id)arg1;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (struct CGPoint { double x1; double x2; })convertHostedChildCenter:(struct CGPoint { double x1; double x2; })arg1 fromGlobalLayer:(id)arg2;
- (id)delegate;
- (id)focusItemsForScrollViewController:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRTL;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)scrollViewController;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (id)scrollViewModel;
- (void)setAlpha:(double)arg1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setScrollViewModel:(id)arg1;
- (void)setUserData:(id)arg1;
- (bool)shouldFlipContentOffset;
- (id)speedometer;
- (id)updater;
- (id)userData;

@end
