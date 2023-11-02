
@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {
    NSNumber * _audioSpatializationMode;
    int  _colorId;
    NSNumber * _displayResolutionHeight;
    NSNumber * _displayResolutionWidth;
    int  _fontSizeInt;
    NSObject<OS_dispatch_source> * _hudTimer;
    unsigned long long  _hudUpdateInterval;
    int  _hudXoffset;
    int  _hudYoffset;
    NSMutableDictionary * _loadingStatusCache;
    double  _opacity;
    AVPlayer * _player;
    AVPlayerLayer * _playerLayer;
    long long  _prevStallCount;
    long long  _prevVariantIdx;
    bool  _requestInFlight;
    bool  _showCompleteURI;
    bool  _showHud;
    bool  _spatialDiagnostics;
    long long  _totalStallCount;
    bool  _updateUISettings;
}

@property AVPlayer *player;
@property AVPlayerLayer *playerLayer;

- (void).cxx_destruct;
- (void)_hudUpdateTrigger;
- (void)copyPropertiesFromStringGenerator:(id)arg1;
- (void)currentItemChanged;
- (void)currentItemTracksChanged;
- (void)dealloc;
- (id)displayStringGenerator;
- (void)getHudSetting;
- (float)getScaleFactorForDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hudEnabled;
- (id)init;
- (id)player;
- (id)playerLayer;
- (void)readHudSettingsAndCallCompletionHandler:(id /* block */)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(int)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)startDispatchTimer;
- (void)updateHudWithDisplayString:(id)arg1;
- (bool)valueLoadedForKey:(id)arg1 onObject:(id)arg2;

@end
