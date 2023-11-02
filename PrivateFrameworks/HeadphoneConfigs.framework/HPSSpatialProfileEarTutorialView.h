
@interface HPSSpatialProfileEarTutorialView : UIView {
    AVPlayerLooper * _looperLeftEar;
    AVPlayerLooper * _looperRightEar;
    AVPlayerItem * _playerItemLeftEar;
    AVPlayerItem * _playerItemRightEar;
    AVPlayerLayer * _playerLayerLeftEar;
    AVPlayerLayer * _playerLayerRightEar;
    AVQueuePlayer * _playerLeftEar;
    AVQueuePlayer * _playerRightEar;
    bool  _playersPlaying;
    bool  _playersStartTriggered;
    struct MediaContentStatus { 
        bool playerReady; 
        bool looperReady; 
    }  _statusLeftEar;
    struct MediaContentStatus { 
        bool playerReady; 
        bool looperReady; 
    }  _statusRightEar;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)initPlayerLeftEar;
- (void)initPlayerRightEar;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startPlayerLeftEar;
- (void)startPlayerRightEar;
- (void)stopPlayerLeftEar;
- (void)stopPlayerRightEar;
- (void)stopPlayers;

@end
