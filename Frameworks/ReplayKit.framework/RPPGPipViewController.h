
@interface RPPGPipViewController : UIViewController <AVConferencePreviewClientDelegate, PGPictureInPictureProxyDelegate> {
    bool  _isRunning;
    PGPictureInPictureProxy * _pegasusProxy;
    AVConferencePreview * _preview;
    CALayer * _previewLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
- (id)cameraWithPosition:(long long)arg1;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didPausePreview;
- (void)didStartPreview;
- (void)didStopPreview;
- (id)init;
- (void)layoutPreviewLayer;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setupPreview;
- (void)startPipSession;
- (void)stopPipSession;
- (void)updateViewGeometry;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
