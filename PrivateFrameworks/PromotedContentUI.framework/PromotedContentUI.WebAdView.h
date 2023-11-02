
@interface PromotedContentUI.WebAdView : APPCPromotedContentView <APWebProcessDelegate, WKNavigationDelegate, WKUIDelegate> {
    void isAppActive;
    void mraidActionTypes;
    void navigationCoordinator;
    void needToUpdateVisibility;
    void nonOutstreamVisibleThreshold;
    void outstreamVisibleThreshold;
    void unfairLock;
    void videoProgressMetricStatus;
    void videoProgressMetricThresholds;
    void webView;
    void webViewDebugging;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)sizeCategoryChanged:(id)arg1;
- (void)webProcessDiagnosticJSOStatusReported:(id)arg1 status:(id)arg2;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessVideoAdJSOCreativeViewLoaded;
- (void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1;
- (void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1;
- (void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallViewabilityChanged:(bool)arg1 playTime:(float)arg2 volume:(float)arg3;
- (void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2;
- (void)webProcessVideoAdJSOGetVideoInfo:(id /* block */)arg1;
- (void)webProcessVideoAdJSOMediaPlaybackFailedWithErrorDescription:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
