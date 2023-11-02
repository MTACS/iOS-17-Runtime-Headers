
@interface PUReviewScreenScrubberBarTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PXChangeObserver> {
    PUReviewScreenScrubberBar * __scrubberBar;
    PUReviewScreenBarsModel * _barsModel;
    PUBrowsingViewModel * _browsingViewModel;
}

@property (setter=_setScrubberBar:, nonatomic, retain) PUReviewScreenScrubberBar *_scrubberBar;
@property (nonatomic, retain) PUReviewScreenBarsModel *barsModel;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_scrubberBar;
- (void)_setScrubberBar:(id)arg1;
- (void)_updateViews;
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
