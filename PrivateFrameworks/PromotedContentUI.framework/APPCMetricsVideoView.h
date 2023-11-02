
@interface APPCMetricsVideoView : APPCMetricsView {
    void privacyMarker;
    void representationFetched;
    void videoIsFullscreen;
    void videoView;
}

@property (nonatomic, readonly) APPrivacyMarker *privacyMarker;

- (void).cxx_destruct;
- (void)beginAction;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)onDidEnterFullscreen:(id)arg1;
- (void)onDidLeaveFullscreen:(id)arg1;
- (id)privacyMarker;

@end
