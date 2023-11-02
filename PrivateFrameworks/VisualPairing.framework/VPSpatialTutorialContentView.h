
@interface VPSpatialTutorialContentView : UIView {
    AVPlayerLooper * _looperSpatial;
    AVPlayerLooper * _looperStereo;
    int  _mode;
    AVPlayerItem * _playerItemSpatial;
    AVPlayerItem * _playerItemStereo;
    AVPlayerLayer * _playerLayerSpatial;
    AVPlayerLayer * _playerLayerStereo;
    AVQueuePlayer * _playerSpatial;
    AVQueuePlayer * _playerStereo;
    bool  _playersPlaying;
    bool  _playersStartTriggered;
    struct MediaContentStatus { 
        bool playerReady; 
        bool looperReady; 
    }  _spatialStatus;
    struct MediaContentStatus { 
        bool playerReady; 
        bool looperReady; 
    }  _stereoStatus;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initPlayerSpatial;
- (void)initPlayerStereo;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mode:(int)arg2;
- (id)initWithMode:(int)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (int)mode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setMode:(int)arg1;
- (void)startPlayers;
- (void)stopPlayers;
- (void)syncPlayersWithRate:(float)arg1;
- (void)updatePlayersValuesBasedOnMode;

@end
