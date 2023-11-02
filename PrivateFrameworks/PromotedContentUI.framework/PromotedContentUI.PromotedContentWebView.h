
@interface PromotedContentUI.PromotedContentWebView : WKWebView <APWebProcessDelegate, WKScriptMessageHandler> {
    void _processDelegate;
    void browserContextControllerDidLoad;
    void remoteObjectInterface;
    void unfairLock;
    void webProcessProxy;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webProcessDiagnosticJSOStatusReported:(id)arg1 status:(id)arg2;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
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

@end
