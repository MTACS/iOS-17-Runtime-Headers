
@protocol LPInProcessMediaPlayable <LPMediaPlayable>

@required

- (bool)isActive;
- (bool)isFullScreen;
- (bool)isMuted;
- (void)setActive:(bool)arg1;
- (bool)shouldUnmuteWhenUserAdjustsVolume;
- (bool)usesSharedAudioSession;

@optional

- (unsigned long long)lastInteractionTimestamp;
- (bool)releaseDecodingResourcesIfInactive;
- (double)unobscuredAreaFraction;

@end
