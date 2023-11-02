
@interface HUDiagnosticsCameraPlayerController : NSObject <UIContextMenuInteractionDelegate> {
    AVPlayerViewController * _cameraPlayerViewController;
    HMCameraProfile * _cameraProfile;
    HUClipScrubberDataSource * _clipScrubberDataSource;
    HUDiagnosticsCameraTimelineView * _diagnosticsView;
    HFCameraPlaybackEngine * _playbackEngine;
}

@property (nonatomic) AVPlayerViewController *cameraPlayerViewController;
@property (nonatomic, retain) HMCameraProfile *cameraProfile;
@property (nonatomic) HUClipScrubberDataSource *clipScrubberDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUDiagnosticsCameraTimelineView *diagnosticsView;
@property (readonly) unsigned long long hash;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraPlayerViewController;
- (id)cameraProfile;
- (id)clipScrubberDataSource;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)diagnosticsView;
- (void)dismissDetailsViewController;
- (void)dismissDiagnosticDetails;
- (void)displayDiagnosticDetails;
- (void)displayTimelapseDetails;
- (id)initWithCameraPlayerViewController:(id)arg1 playbackEngine:(id)arg2 clipScrubberDataSource:(id)arg3 cameraProfile:(id)arg4;
- (void)launchPlaybackEngineDiagnosticsView;
- (id)playbackEngine;
- (void)setCameraPlayerViewController:(id)arg1;
- (void)setCameraProfile:(id)arg1;
- (void)setClipScrubberDataSource:(id)arg1;
- (void)setDiagnosticsView:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)updateWithPlaybackEngine:(id)arg1;

@end
