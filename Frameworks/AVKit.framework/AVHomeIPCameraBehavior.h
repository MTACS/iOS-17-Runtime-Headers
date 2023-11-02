
@interface AVHomeIPCameraBehavior : NSObject <AVBehavior, AVBehaviorInternal, AVHomeIPCameraActionButtonHandling> {
    AVHomeIPCameraBehaviorContext * _behaviorContext;
}

@property (nonatomic) AVHomeIPCameraBehaviorContext *behaviorContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (id)behaviorContext;
- (void)didMoveToContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidToggleMuted:(bool)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(bool)arg1;
- (void)setBehaviorContext:(id)arg1;
- (void)willMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;

@end
