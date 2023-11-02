
@interface PUBarsController : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentGuideInsets;
    <PUBarsControllerDelegate> * _delegate;
    struct { 
        bool respondsToViewController; 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToContentGuideInsetsDidChange; 
    }  _delegateFlags;
    long long  _updateBarsDisabledCount;
    bool  _updateScheduled;
    PXUpdater * _updater;
    UIViewController * _viewController;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentGuideInsets;
@property (nonatomic) <PUBarsControllerDelegate> *delegate;
@property (nonatomic, readonly) long long preferredBarStyle;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic) long long updateBarsDisabledCount;
@property (nonatomic) bool updateScheduled;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic) UIViewController *viewController;
@property (nonatomic, readonly) bool wantsNavigationBarVisible;
@property (nonatomic, readonly) bool wantsToolbarVisible;

- (void).cxx_destruct;
- (void)_invalidateGestureRecognizers;
- (bool)_isUpdateBarsDisabled;
- (void)_reenableUpdateBars;
- (void)_setNeedsUpdate;
- (void)_updateBars;
- (void)_updateGestureRecognizers;
- (void)_updateNowIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentGuideInsets;
- (id)delegate;
- (void)disableUpdateBarsForDuration:(double)arg1;
- (id)init;
- (void)invalidateBars;
- (void)invalidateContentGuideInsets;
- (void)invalidateViewControllerView;
- (void)invalidateViewHostingGestureRecognizers;
- (bool)isLocationFromProviderInBarsArea:(id)arg1;
- (long long)preferredBarStyle;
- (bool)prefersStatusBarHidden;
- (void)setContentGuideInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setUpdateBarsDisabledCount:(long long)arg1;
- (void)setUpdateScheduled:(bool)arg1;
- (void)setViewController:(id)arg1;
- (void)updateBars;
- (long long)updateBarsDisabledCount;
- (void)updateContentGuideInsets;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)updateIfNeeded;
- (bool)updateScheduled;
- (id)updater;
- (id)viewController;
- (bool)wantsNavigationBarVisible;
- (bool)wantsToolbarVisible;

@end
