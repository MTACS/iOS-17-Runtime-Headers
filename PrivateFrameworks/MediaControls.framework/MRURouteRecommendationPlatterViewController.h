
@interface MRURouteRecommendationPlatterViewController : UIViewController <MRUNowPlayingControllerObserver> {
    MRUNowPlayingController * _nowPlayingController;
    bool  _onScreen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MRUNowPlayingController *nowPlayingController;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleTapGestureRecognizer:(id)arg1;
- (id)init;
- (bool)isOnScreen;
- (void)loadView;
- (id)nowPlayingController;
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (void)setNowPlayingController:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
