
@interface PVLivePlayerCameraRenderLink : PVLivePlayerRenderLink

- (void)cameraSourceDroppedFrame;
- (void)cameraSourceRecievedFrameSet:(id)arg1;
- (id)initWithPlayerCameraSource:(id)arg1;

@end
