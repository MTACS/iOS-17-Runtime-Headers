
@interface VUIEpisodeDetailViewController : UIViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate> {
    VUIViewControllerContentPresenter * _contentPresenter;
    <VUIEpisodeDetailViewControllerDelegate> * _delegate;
    VUIEpisodeDetailView * _detailView;
    VUIMediaItem * _mediaItem;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIEpisodeDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIEpisodeDetailView *detailView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIMediaItem *mediaItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_configureNavigationBar;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (id)contentPresenter;
- (void)dealloc;
- (id)delegate;
- (id)detailView;
- (void)didTapPlay;
- (void)dismissPopover;
- (void)dismissTapped:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (void)loadView;
- (id)mediaItem;
- (void)reportMetricsPageEvent;
- (void)setContentPresenter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
