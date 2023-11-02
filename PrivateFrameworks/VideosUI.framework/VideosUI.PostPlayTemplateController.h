
@interface VideosUI.PostPlayTemplateController : VideosUI.VUIViewController <VUIPlaybackUpNextController> {
    void $__lazy_storage_$_backgroundMediaController;
    void autoPlayDuration;
    void backgroundMediaInfo;
    void cancellables;
    void collectionImpressioner;
    void contextData;
    void currentSizeClass;
    void featuredContentLogo;
    void headerView;
    void interactionManager;
    void metadataContentHeight;
    void playbackState;
    void playbackTimer;
    void playbackUpNextDelegate;
    void presenter;
    void templateViewModel;
    void volumeObserver;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)playbackUpNextViewHeight;
- (void)recordUpNextImpressions;
- (void)setPlaybackUpNextContextData:(id)arg1;
- (void)setPlaybackUpNextDelegate:(id)arg1;
- (void)startAutoPlayAnimation;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;

@end
