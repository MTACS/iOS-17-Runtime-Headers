
@protocol AFAudioPlaybackRequestMutating <NSObject>

@required

- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setHapticLibraryKey:(NSString *)arg1;
- (void)setItemData:(NSData *)arg1;
- (void)setItemURL:(NSURL *)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (void)setUUID:(NSString *)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)setVolume:(float)arg1;

@end
