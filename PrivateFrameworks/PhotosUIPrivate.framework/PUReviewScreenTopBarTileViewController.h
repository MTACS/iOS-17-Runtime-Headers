
@interface PUReviewScreenTopBarTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PXChangeObserver> {
    PUReviewScreenTopBar * __topBar;
    PUReviewScreenBarsModel * _barsModel;
    PUBrowsingViewModel * _browsingViewModel;
}

@property (setter=_setTopBar:, nonatomic, retain) PUReviewScreenTopBar *_topBar;
@property (nonatomic, retain) PUReviewScreenBarsModel *barsModel;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDoneButtonTapped:(id)arg1;
- (void)_handleRetakeButtonTapped:(id)arg1;
- (void)_setTopBar:(id)arg1;
- (id)_topBar;
- (void)_updateBarLayout;
- (void)_updateControls;
- (void)_updateVisibilityAnimated:(bool)arg1;
- (id)barsModel;
- (void)becomeReusable;
- (id)browsingViewModel;
- (id)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setBarsModel:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
