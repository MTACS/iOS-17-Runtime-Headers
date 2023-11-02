
@interface VideosUI.PlayerHUDDocumentViewController : VideosUI.DocumentRequestViewController <VUIMultiPlayerDetailsViewController, VUINowPlayingTabController> {
    void isMultiView;
    void nowPlayingTabDelegate;
    void playerViewSize;
    void refetchUpNext;
    void tabContextData;
    void templateControllerHosted;
}

@property (nonatomic, readonly) long long itemCount;

- (void).cxx_destruct;
- (id)getNowPlayingTabContextData;
- (id)initWithCoder:(id)arg1;
- (long long)itemCount;
- (double)nowPlayingTabHeight;
- (void)setNowPlayingTabContextData:(id)arg1;
- (void)setNowPlayingTabDelegate:(id)arg1;
- (void)setPlayerViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateVisibleCellsWithPlaybackIdentifiers:(id)arg1;
- (void)updateWithSelectedPlaybackIdentifiers:(id)arg1 reloadingData:(bool)arg2;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidLoad;

@end
