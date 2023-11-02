
@protocol AVVolumeController <NSObject>

@required

+ (id)volumeController;

- (void)beginChangingVolume;
- (bool)currentRouteHasVolumeControl;
- (void)endChangingVolume;
- (bool)isChangingVolume;
- (bool)prefersSystemVolumeHUDHidden;
- (void)setClientWithIdentifier:(NSString *)arg1 forWindowSceneSessionWithIdentifier:(NSString *)arg2;
- (void)setPrefersSystemVolumeHUDHidden:(bool)arg1;
- (void)setTargetVolume:(float)arg1;
- (float)volume;

@end
