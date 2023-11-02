
@protocol PGMutablePlaybackState <NSObject>

@required

- (long long)backgroundAudioPolicy;
- (double)contentDuration;
- (long long)contentType;
- (bool)isMuted;
- (bool)isRoutingVideoToHostedWindow;
- (PGPlaybackStatePrerollAttributes *)prerollAttributes;
- (bool)requiresLinearPlayback;
- (void)setBackgroundAudioPolicy:(long long)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setContentType:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaybackRate:(double)arg1 elapsedTime:(double)arg2 timeControlStatus:(long long)arg3;
- (void)setPrerollAttributes:(PGPlaybackStatePrerollAttributes *)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)setRoutingVideoToHostedWindow:(bool)arg1;

@end
