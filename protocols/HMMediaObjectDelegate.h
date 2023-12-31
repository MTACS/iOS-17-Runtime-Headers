
@protocol HMMediaObjectDelegate <NSObject>

@optional

- (void)mediaObject:(id <HMMediaObject>)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
- (void)mediaObject:(id <HMMediaObject>)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;

@end
