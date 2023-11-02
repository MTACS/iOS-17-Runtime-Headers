
@interface AVPlayerVolumeController : NSObject <AVVolumeController> {
    bool  _changingVolume;
    AVObservationController * _keyValueObservationController;
    AVPlayerController * _playerController;
    bool  _prefersSystemVolumeHUDHidden;
}

@property (getter=isChangingVolume, nonatomic) bool changingVolume;
@property (nonatomic, readonly) bool currentRouteHasVolumeControl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVObservationController *keyValueObservationController;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) bool prefersSystemVolumeHUDHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float volume;

+ (id)volumeController;

- (void).cxx_destruct;
- (void)beginChangingVolume;
- (bool)currentRouteHasVolumeControl;
- (void)dealloc;
- (void)endChangingVolume;
- (id)init;
- (bool)isChangingVolume;
- (id)keyValueObservationController;
- (id)playerController;
- (bool)prefersSystemVolumeHUDHidden;
- (void)setChangingVolume:(bool)arg1;
- (void)setClientWithIdentifier:(id)arg1 forWindowSceneSessionWithIdentifier:(id)arg2;
- (void)setKeyValueObservationController:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPrefersSystemVolumeHUDHidden:(bool)arg1;
- (void)setTargetVolume:(float)arg1;
- (float)volume;

@end
