
@interface MRUWaveformController : NSObject <MRNowPlayingControllerDelegate, MRUArtworkViewObserver, MRUAudioAnalyzerObserver, MRUNowPlayingControllerObserver> {
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkFittingSize;
    UIImage * _artworkImage;
    MRUAudioAnalyzer * _audioAnalyzer;
    <MRUWaveformControllerDelegate> * _delegate;
    MPAVEndpointRoute * _endpointRoute;
    bool  _isAnalyzingAudio;
    MRNowPlayingController * _mrNowPlayingController;
    MRUNowPlayingController * _nowPlayingController;
    int  _nowPlayingPID;
    bool  _playing;
    bool  _remoteRoute;
    NSString * _remoteRouteSymbolName;
    NSString * _trackIdentifier;
    bool  _visible;
    MRUWaveformData * _waveform;
}

@property (nonatomic) struct CGSize { double x1; double x2; } artworkFittingSize;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, retain) MRUAudioAnalyzer *audioAnalyzer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUWaveformControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPAVEndpointRoute *endpointRoute;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnalyzingAudio;
@property (nonatomic, retain) MRNowPlayingController *mrNowPlayingController;
@property (nonatomic, retain) MRUNowPlayingController *nowPlayingController;
@property (nonatomic) int nowPlayingPID;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (getter=isRemoteRoute, nonatomic, readonly) bool remoteRoute;
@property (nonatomic, readonly) NSString *remoteRouteSymbolName;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *trackIdentifier;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic, readonly) MRUWaveformData *waveform;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })artworkFittingSize;
- (id)artworkImage;
- (void)artworkView:(id)arg1 didChangeArtworkImage:(id)arg2;
- (id)audioAnalyzer;
- (void)audioAnalyzer:(id)arg1 didUpdateWaveform:(id)arg2;
- (void)controller:(id)arg1 playerPathDidChange:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)endpointRoute;
- (id)init;
- (bool)isAnalyzingAudio;
- (bool)isPlaying;
- (bool)isRemoteRoute;
- (bool)isVisible;
- (id)mrNowPlayingController;
- (id)nowPlayingController;
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (int)nowPlayingPID;
- (id)remoteRouteSymbolName;
- (void)routeDidUpdateNotification:(id)arg1;
- (void)setArtworkFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setAudioAnalyzer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointRoute:(id)arg1;
- (void)setIsAnalyzingAudio:(bool)arg1;
- (void)setMrNowPlayingController:(id)arg1;
- (void)setNowPlayingController:(id)arg1;
- (void)setNowPlayingPID:(int)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setRemoteRoute:(bool)arg1;
- (void)setRemoteRouteSymbolName:(id)arg1;
- (void)setTrackIdentifier:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setWaveform:(id)arg1;
- (id)trackIdentifier;
- (void)updateAnalyzer;
- (void)updateImage:(id)arg1;
- (void)updateRoute:(id)arg1;
- (id)waveform;

@end
