
@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForAudioProviding;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForSmartSiriVolumeProviding;

@end
