
@interface MRUAmbientCompactNowPlayingViewController : UIViewController <MRUNowPlayingControllerObserver> {
    MRUNowPlayingController * _nowPlayingController;
    bool  _onScreen;
    MRUWaveformController * _waveformController;
    MRUWaveformViewController * _waveformViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUNowPlayingController *nowPlayingController;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUAmbientCompactNowPlayingView *view;
@property (nonatomic, readonly) MRUWaveformController *waveformController;
@property (nonatomic, readonly) MRUWaveformViewController *waveformViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)init;
- (id)initWithNowPlayingController:(id)arg1;
- (bool)isOnScreen;
- (void)loadView;
- (id)nowPlayingController;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)updateArtwork;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)waveformController;
- (id)waveformViewController;

@end
