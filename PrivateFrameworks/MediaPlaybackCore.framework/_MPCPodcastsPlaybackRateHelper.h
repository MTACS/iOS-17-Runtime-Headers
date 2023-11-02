
@interface _MPCPodcastsPlaybackRateHelper : NSObject {
    void currentRate;
    void defaults;
    void playerState;
}

+ (float)preferredPlaybackRate;
+ (void)setPreferredPlaybackRate:(float)arg1;
+ (float)standardRate;
+ (id)supportedPlaybackRates;

- (void).cxx_destruct;
- (bool)canHandlePlaybackRateChangeForCommandEvent:(id)arg1;
- (id)init;
- (id)initWithCurrentRate:(float)arg1 playbackState:(long long)arg2;
- (id)initWithCurrentRate:(float)arg1 playerState:(long long)arg2 defaults:(id)arg3;
- (void)saveWithRate:(float)arg1;
- (bool)supportsRate:(float)arg1;
- (float)updatedPlaybackRateForChangePlaybackRateCommandEvent:(id)arg1;

@end
