
@interface PXStoryChromeLayoutItemController : PXObservable <PXChangeObserver> {
    double  _alpha;
    PXNumberAnimator * _alphaAnimator;
    unsigned long long  _chromeItem;
    PXNumberAnimator * _playbackEndDarkeningAnimator;
    double  _targetAlpha;
    double  _targetPlaybackEndDarkening;
    PXUpdater * _updater;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic) double alpha;
@property (nonatomic, readonly) PXNumberAnimator *alphaAnimator;
@property (nonatomic, readonly) unsigned long long chromeItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXNumberAnimator *playbackEndDarkeningAnimator;
@property (readonly) Class superclass;
@property (nonatomic) double targetAlpha;
@property (nonatomic, readonly) double targetAlphaForVisibleState;
@property (nonatomic) double targetPlaybackEndDarkening;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateAlpha;
- (void)_invalidatePlaybackEndDarkening;
- (void)_invalidateTargetAlpha;
- (void)_invalidateTargetPlaybackEndDarkening;
- (void)_setNeedsUpdate;
- (void)_updateAlpha;
- (void)_updatePlaybackEndDarkening;
- (void)_updateTargetAlpha;
- (void)_updateTargetPlaybackEndDarkening;
- (double)alpha;
- (id)alphaAnimator;
- (void)animateChangeToTargetAlpha:(double)arg1;
- (unsigned long long)chromeItem;
- (void)didPerformChanges;
- (id)init;
- (id)initWithViewModel:(id)arg1 chromeItem:(unsigned long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)playbackEndDarkeningAnimator;
- (void)setAlpha:(double)arg1;
- (void)setTargetAlpha:(double)arg1;
- (void)setTargetPlaybackEndDarkening:(double)arg1;
- (double)targetAlpha;
- (double)targetAlphaForVisibleState;
- (double)targetPlaybackEndDarkening;
- (id)updater;
- (id)viewModel;

@end
