
@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate> {
    NSMutableArray * _commandsPendingPlayerReadiness;
    <LPYouTubePlayerDelegate> * _delegate;
    double  _endTime;
    LPYouTubePlayerViewFullScreenDelegate * _fullScreenDelegate;
    bool  _muted;
    bool  _ready;
    LPYouTubePlayerScriptMessageHandler * _scriptMessageHandler;
    bool  _showsControls;
    double  _startTime;
    bool  _startsPlayingAutomatically;
    long long  _state;
    NSString * _videoID;
    LPYouTubePlayerWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LPYouTubePlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) bool showsControls;
@property (nonatomic) double startTime;
@property (nonatomic) bool startsPlayingAutomatically;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_evaluatePlayerCommand:(id)arg1;
- (id)_parameterScript;
- (bool)_shouldUseElementFullScreen;
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
- (void)createVideoPlayerView;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveScriptMessage:(id)arg1;
- (void)dispatchErrorWithCode:(long long)arg1;
- (double)endTime;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMuted;
- (void)layoutSubviews;
- (void)loadVideoWithEmbedURL:(id)arg1;
- (void)loadVideoWithID:(id)arg1;
- (void)loadVideoWithURL:(id)arg1;
- (void)pause;
- (void)play;
- (void)scrollViewDidScroll:(id)arg1;
- (void)seekTo:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setMuted:(bool)arg1;
- (void)setShowsControls:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStartsPlayingAutomatically:(bool)arg1;
- (bool)showsControls;
- (double)startTime;
- (bool)startsPlayingAutomatically;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 decisionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
