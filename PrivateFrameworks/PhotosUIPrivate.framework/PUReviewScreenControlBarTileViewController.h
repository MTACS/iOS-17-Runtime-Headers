
@interface PUReviewScreenControlBarTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PXChangeObserver> {
    PUReviewScreenControlBar * __controlBar;
    PUReviewScreenBarsModel * _barsModel;
    PUBrowsingViewModel * _browsingViewModel;
}

@property (setter=_setControlBar:, nonatomic, retain) PUReviewScreenControlBar *_controlBar;
@property (nonatomic, retain) PUReviewScreenBarsModel *barsModel;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_barControlsForModelControls:(id)arg1 transitioning:(bool)arg2;
- (id)_controlBar;
- (void)_handleEditButtonTapped:(id)arg1;
- (void)_handleFunEffectsButtonTapped:(id)arg1;
- (void)_handleMarkupButtonTapped:(id)arg1;
- (void)_handleSendButtonTapped:(id)arg1;
- (void)_setControlBar:(id)arg1;
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
