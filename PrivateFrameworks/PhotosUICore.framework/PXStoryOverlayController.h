
@interface PXStoryOverlayController : PXStoryController {
    PXNumberAnimator * _chromeVisibilityFractionAnimator;
    PXNumberAnimator * _fadeOutOverlayVisibilityFractionAnimator;
    PXNumberAnimator * _infoPanelVisibilityFractionAnimator;
    PXStoryModel * _mainModel;
    bool  _preventAnimatingNextRelatedOverlayVisibilityFractionChange;
    PXNumberAnimator * _relatedOverlayVisibilityFractionAnimator;
    PXNumberAnimator * _scrubberVisibilityFractionAnimator;
    PXNumberAnimator * _styleSwitcherVisibilityFractionAnimator;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, readonly) PXNumberAnimator *chromeVisibilityFractionAnimator;
@property (nonatomic, readonly) PXNumberAnimator *fadeOutOverlayVisibilityFractionAnimator;
@property (nonatomic, readonly) PXNumberAnimator *infoPanelVisibilityFractionAnimator;
@property (nonatomic, retain) PXStoryModel *mainModel;
@property (nonatomic) bool preventAnimatingNextRelatedOverlayVisibilityFractionChange;
@property (nonatomic, readonly) PXNumberAnimator *relatedOverlayVisibilityFractionAnimator;
@property (nonatomic, readonly) PXNumberAnimator *scrubberVisibilityFractionAnimator;
@property (nonatomic, readonly) PXNumberAnimator *styleSwitcherVisibilityFractionAnimator;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateChromeItems;
- (void)_invalidateChromeVisibilityFraction;
- (void)_invalidateChromeVisibilityFractionAnimator;
- (void)_invalidateFadeOutOverlayVisibilityFraction;
- (void)_invalidateFadeOutOverlayVisibilityFractionAnimator;
- (void)_invalidateInfoPanelVisibilityFraction;
- (void)_invalidateInfoPanelVisibilityFractionAnimator;
- (void)_invalidateMainModel;
- (void)_invalidateRelatedOverlayVisibilityFraction;
- (void)_invalidateRelatedOverlayVisibilityFractionAnimator;
- (void)_invalidateRelatedOverlayVisible;
- (void)_invalidateScrubberVisibilityFraction;
- (void)_invalidateScrubberVisibilityFractionAnimator;
- (void)_invalidateStyleSwitcherVisibilityFraction;
- (void)_invalidateStyleSwitcherVisibilityFractionAnimator;
- (void)_updateAnimator:(id)arg1 endValue:(double)arg2 animated:(bool)arg3;
- (void)_updateChromeItems;
- (void)_updateChromeVisibilityFraction;
- (void)_updateChromeVisibilityFractionAnimator;
- (void)_updateFadeOutOverlayVisibilityFraction;
- (void)_updateFadeOutOverlayVisibilityFractionAnimator;
- (void)_updateInfoPanelVisibilityFraction;
- (void)_updateInfoPanelVisibilityFractionAnimator;
- (void)_updateMainModel;
- (void)_updateRelatedOverlayVisibilityFraction;
- (void)_updateRelatedOverlayVisibilityFractionAnimator;
- (void)_updateRelatedOverlayVisible;
- (void)_updateScrubberVisibilityFraction;
- (void)_updateScrubberVisibilityFractionAnimator;
- (void)_updateStyleSwitcherVisibilityFraction;
- (void)_updateStyleSwitcherVisibilityFractionAnimator;
- (id)chromeVisibilityFractionAnimator;
- (void)configureUpdater:(id)arg1;
- (id)fadeOutOverlayVisibilityFractionAnimator;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)infoPanelVisibilityFractionAnimator;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)mainModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)preventAnimatingNextRelatedOverlayVisibilityFractionChange;
- (id)relatedOverlayVisibilityFractionAnimator;
- (id)scrubberVisibilityFractionAnimator;
- (void)setMainModel:(id)arg1;
- (void)setPreventAnimatingNextRelatedOverlayVisibilityFractionChange:(bool)arg1;
- (id)styleSwitcherVisibilityFractionAnimator;
- (id)viewModel;

@end
