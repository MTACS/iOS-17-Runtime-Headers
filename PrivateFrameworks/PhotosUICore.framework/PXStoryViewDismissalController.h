
@interface PXStoryViewDismissalController : NSObject <PXChangeObserver> {
    PXPointAnimator * _centerOffsetAnimator;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentGestureLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentGestureVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialGestureLocation;
    PXGItemPlacement * _initialItemPlacement;
    UIView * _referenceView;
    PXNumberAnimator * _releaseAnimationDismissalProgressAnimator;
    PXNumberAnimator * _releaseAnimationProgressAnimator;
    struct CGSize { 
        double width; 
        double height; 
    }  _sourceSize;
    long long  _state;
    PXSwipeDownTracker * _swipeDownTracker;
    bool  _targetCancelled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    PXUpdater * _updater;
    PXGViewControllerTransition * _viewControllerTransition;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, retain) PXPointAnimator *centerOffsetAnimator;
@property (nonatomic) struct CGPoint { double x1; double x2; } currentGestureLocation;
@property (nonatomic) struct CGPoint { double x1; double x2; } currentGestureVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialGestureLocation;
@property (nonatomic, retain) PXGItemPlacement *initialItemPlacement;
@property (nonatomic, retain) UIView *referenceView;
@property (nonatomic, retain) PXNumberAnimator *releaseAnimationDismissalProgressAnimator;
@property (nonatomic, retain) PXNumberAnimator *releaseAnimationProgressAnimator;
@property (nonatomic) struct CGSize { double x1; double x2; } sourceSize;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXSwipeDownTracker *swipeDownTracker;
@property (nonatomic) bool targetCancelled;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetCenter;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, retain) PXGViewControllerTransition *viewControllerTransition;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateCurrentPlacement;
- (void)_invalidateInitialItemPlacement;
- (void)_invalidateSwipeDownTracker;
- (void)_setNeedsUpdate;
- (void)_updateCurrentPlacement;
- (void)_updateInitialItemPlacement;
- (void)_updateSwipeDownTracker;
- (id)centerOffsetAnimator;
- (struct CGPoint { double x1; double x2; })currentGestureLocation;
- (struct CGPoint { double x1; double x2; })currentGestureVelocity;
- (void)handlePanDownGestureRecognizer:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (struct CGPoint { double x1; double x2; })initialGestureLocation;
- (id)initialItemPlacement;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)referenceView;
- (id)releaseAnimationDismissalProgressAnimator;
- (id)releaseAnimationProgressAnimator;
- (void)setCenterOffsetAnimator:(id)arg1;
- (void)setCurrentGestureLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentGestureVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialGestureLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialItemPlacement:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setReleaseAnimationDismissalProgressAnimator:(id)arg1;
- (void)setReleaseAnimationProgressAnimator:(id)arg1;
- (void)setSourceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setState:(long long)arg1;
- (void)setSwipeDownTracker:(id)arg1;
- (void)setTargetCancelled:(bool)arg1;
- (void)setTargetCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewControllerTransition:(id)arg1;
- (struct CGSize { double x1; double x2; })sourceSize;
- (long long)state;
- (id)swipeDownTracker;
- (bool)targetCancelled;
- (struct CGPoint { double x1; double x2; })targetCenter;
- (struct CGSize { double x1; double x2; })targetSize;
- (id)updater;
- (id)viewControllerTransition;
- (id)viewModel;

@end
