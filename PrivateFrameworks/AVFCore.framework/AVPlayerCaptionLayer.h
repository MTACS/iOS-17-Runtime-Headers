
@interface AVPlayerCaptionLayer : CALayer {
    NSSet * _KVOInvokers;
    AVPlayerLayerIntermediateLayer * _closedCaptionLayer;
    NSObject<OS_dispatch_queue> * _configurationQueue;
    AVPlayerCaptionLayer * _interstitialLayer;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _legibleContentInsets;
    AVPlayer * _player;
    AVPlayer * _playerBeingObserved;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _showInterstitialInstead;
    FigSubtitleCALayer * _subtitleLayer;
}

@property (nonatomic) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } captionContentInsets;
@property (getter=isOverscanSubtitleSupportEnabled, nonatomic) bool overscanSubtitleSupportEnabled;
@property (nonatomic, retain) AVPlayer *player;

+ (id)captionLayerWithPlayer:(id)arg1;

- (id)_closedCaptionLayer;
- (id)_interstitialLayer;
- (void)_setShowInterstitialInstead:(bool)arg1;
- (bool)_showInterstitialInstead;
- (void)_startObservingPlayer:(id)arg1;
- (void)_stopObservingPlayer:(id)arg1;
- (id)_subtitleLayer;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })captionContentInsets;
- (void)dealloc;
- (id)init;
- (bool)isOverscanSubtitleSupportEnabled;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCaptionContentInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverscanSubtitleSupportEnabled:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;

@end
