
@protocol AFAudioDeviceInfoMutating <NSObject>

@required

- (void)setDeviceUID:(NSUUID *)arg1;
- (void)setIsRemoteDevice:(bool)arg1;
- (void)setRoute:(NSString *)arg1;

@end
