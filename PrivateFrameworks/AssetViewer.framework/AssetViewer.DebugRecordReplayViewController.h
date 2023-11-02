
@interface AssetViewer.DebugRecordReplayViewController : UIViewController <ARSessionDelegate> {
    void $__lazy_storage_$_replayObserver;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  arRecordingURL;
    void arqlVC;
    void blinkShouldEnable;
    void blinkTimer;
    void command;
    void currentConfig;
    void focalDataForRecording;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  modelURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  optionsToBlink;
    void overlayView;
    void renderingEffectsData;
    void session;
    void shouldShowRenderingOverlay;
    void state;
}

- (void).cxx_destruct;
- (void)blinkButtonPressed;
- (void)helpDismissVC;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)playButtonPressed;
- (void)recordButtonPressed;
- (void)resetButtonPressed;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)tappedWithRecognizer:(id)arg1;
- (void)viewDidLoad;

@end
