
@protocol AFAudioSessionCoordinationSystemInfoMutating <NSObject>

@required

- (void)setHomeKitMediaSystemIdentifier:(NSUUID *)arg1;
- (void)setHomeKitRoomName:(NSString *)arg1;
- (void)setIsSupportedAndEnabled:(bool)arg1;
- (void)setMediaRemoteGroupIdentifier:(NSString *)arg1;
- (void)setMediaRemoteRouteIdentifier:(NSString *)arg1;

@end
