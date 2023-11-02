
@interface SBCoverSheetSpotlightViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate, SBSearchPresentable> {
    CSContentComponent * _contentComponent;
    CSDateViewComponent * _dateViewComponent;
    <SBCoverSheetSpotlightViewControllerDelegate> * _delegate;
    double  _maxPresentationOffset;
    CSProudLockComponent * _proudLockComponent;
    SBSpotlightPresentableViewController * _spotlightViewController;
    double  _topOffset;
    CSWallpaperFloatingLayerComponent * _wallpaperFloatingLayerComponent;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBCoverSheetSpotlightViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxPresentationOffset;
@property (nonatomic, retain) SBHHomePullToSearchSettings *searchTransitionSettings;
@property (nonatomic, retain) SBSpotlightPresentableViewController *spotlightViewController;
@property (readonly) Class superclass;
@property (nonatomic) double topOffset;

- (void).cxx_destruct;
- (id)_newDisplayLayoutElement;
- (double)_scaleGivenTranslation:(double)arg1;
- (void)_updatePresentationProgress:(double)arg1 withOffset:(double)arg2 velocity:(double)arg3 presentationState:(long long)arg4;
- (void)_updateSpotlightScale:(double)arg1 interactive:(bool)arg2;
- (void)addGrabberView:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)delegate;
- (void)dismissForHomeButton;
- (void)handleBottomEdgeGestureChanged:(id)arg1;
- (void)handleBottomEdgeGestureEnded:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (id)initWithSpotlightViewController:(id)arg1;
- (void)invalidate;
- (double)maxPresentationOffset;
- (bool)presentationCancelsTouches;
- (id)searchTransitionSettings;
- (void)setDelegate:(id)arg1;
- (void)setMaxPresentationOffset:(double)arg1;
- (void)setSearchTransitionSettings:(id)arg1;
- (void)setSpotlightViewController:(id)arg1;
- (void)setTopOffset:(double)arg1;
- (id)spotlightViewController;
- (double)topOffset;
- (void)updateComponentTransitionWithOffset:(double)arg1 presentationState:(long long)arg2;
- (void)updatePresentationProgress:(double)arg1 withOffset:(double)arg2 velocity:(double)arg3 presentationState:(long long)arg4;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id /* block */)willBeginModifyingPresentationProgressForState:(long long)arg1 animated:(bool)arg2 needsInitialLayout:(bool*)arg3;

@end
