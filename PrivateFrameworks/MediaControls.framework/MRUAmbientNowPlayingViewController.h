
@interface MRUAmbientNowPlayingViewController : UIViewController <MRUArtworkViewObserver, MRUNowPlayingControllerObserver> {
    long long  _artworkTransitionDirection;
    MSVTimer * _artworkTransitionDirectionTimer;
    UIViewController<MRUBackdropControllerProtocol> * _backdropViewController;
    MRUNowPlayingController * _controller;
    MPMediaControls * _mediaControls;
    bool  _onScreen;
}

@property (nonatomic) long long artworkTransitionDirection;
@property (nonatomic, retain) MSVTimer *artworkTransitionDirectionTimer;
@property (nonatomic, retain) UIViewController<MRUBackdropControllerProtocol> *backdropViewController;
@property (nonatomic, retain) MRUNowPlayingController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaControls *mediaControls;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUAmbientNowPlayingView *view;
@property (nonatomic, retain) MRUAmbientNowPlayingView *viewIfLoaded;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)artworkTransitionDirection;
- (id)artworkTransitionDirectionTimer;
- (void)artworkView:(id)arg1 didChangeArtworkImage:(id)arg2;
- (id)backdropViewController;
- (id)controller;
- (void)didSelectRoutingButton:(id)arg1;
- (void)embedBackdropViewController;
- (id)initWithNowPlayingController:(id)arg1;
- (bool)isOnScreen;
- (void)loadView;
- (id)mediaControls;
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTimeControls:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeTransportControls:(id)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (void)presentRoutingControlsFromSourceView:(id)arg1;
- (void)removeBackdropViewController;
- (void)setArtworkTransitionDirection:(long long)arg1;
- (void)setArtworkTransitionDirectionTimer:(id)arg1;
- (void)setBackdropViewController:(id)arg1;
- (void)setController:(id)arg1;
- (void)setMediaControls:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)transportButtonTap:(id)arg1;
- (void)updateArtwork;
- (void)updateEverything;
- (void)updateNowPlayingInfo;
- (void)updateRoutingButton;
- (void)updateTimeControls;
- (void)updateTransportControls;
- (void)updateVolumeControls;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
