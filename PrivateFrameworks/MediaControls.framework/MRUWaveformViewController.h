
@interface MRUWaveformViewController : UIViewController <MRUWaveformControllerDelegate> {
    unsigned long long  _context;
    MRUWaveformController * _controller;
    bool  _delayArtworkChange;
    bool  _dimmed;
    bool  _hasAppeared;
    bool  _onScreen;
    MRUWaveformSettings * _settings;
    MRUWaveformData * _waveformData;
}

@property (nonatomic) unsigned long long context;
@property (nonatomic, retain) MRUWaveformController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delayArtworkChange;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic) bool hasAppeared;
@property (readonly) unsigned long long hash;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) MRUWaveformSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUWaveformView *view;
@property (nonatomic, retain) MRUWaveformData *waveformData;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (unsigned long long)context;
- (id)controller;
- (bool)delayArtworkChange;
- (struct CAFrameRateRange { float x1; float x2; float x3; })framerateRangeForData:(id)arg1;
- (bool)hasAppeared;
- (id)initWithContext:(unsigned long long)arg1 waveformController:(id)arg2;
- (id)initWithContext:(unsigned long long)arg1 waveformController:(id)arg2 settings:(id)arg3;
- (bool)isDimmed;
- (bool)isOnScreen;
- (void)loadView;
- (void)setContext:(unsigned long long)arg1;
- (void)setController:(id)arg1;
- (void)setDelayArtworkChange:(bool)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setHasAppeared:(bool)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setSettings:(id)arg1;
- (void)setWaveformData:(id)arg1;
- (id)settings;
- (void)updateState;
- (void)updateVisibility;
- (void)updateWaveformWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)waveformController:(id)arg1 artworkImageDidChange:(id)arg2;
- (void)waveformController:(id)arg1 remoteRouteSymbolNameDidChange:(id)arg2;
- (void)waveformController:(id)arg1 waveformDidChange:(id)arg2;
- (void)waveformControllerTrackDidChange:(id)arg1;
- (id)waveformData;

@end
