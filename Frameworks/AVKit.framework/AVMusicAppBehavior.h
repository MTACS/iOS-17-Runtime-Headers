
@interface AVMusicAppBehavior : NSObject <AVBehavior, AVBehaviorInternal> {
    AVMusicAppBehaviorContext * _behaviorContext;
}

@property (nonatomic) AVMusicAppBehaviorContext *behaviorContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (id)behaviorContext;
- (void)contextWillHandleUserAction:(long long)arg1;
- (void)didMoveToContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)pictureInPictureActionButtonTapped;
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)setBehaviorContext:(id)arg1;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)willMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;

@end
