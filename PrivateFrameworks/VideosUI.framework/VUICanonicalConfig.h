
@interface VUICanonicalConfig : NSObject {
    double  _playbackDelayInterval;
    NSString * _storeTabIdentifier;
    NSString * _tvShowsTabIdentifier;
    float  _videoViewOffscreenThresholdToStopPlayback;
}

@property (nonatomic) double playbackDelayInterval;
@property (nonatomic, retain) NSString *storeTabIdentifier;
@property (nonatomic, retain) NSString *tvShowsTabIdentifier;
@property (nonatomic) float videoViewOffscreenThresholdToStopPlayback;

- (void).cxx_destruct;
- (id)init;
- (double)playbackDelayInterval;
- (void)setPlaybackDelayInterval:(double)arg1;
- (void)setStoreTabIdentifier:(id)arg1;
- (void)setTvShowsTabIdentifier:(id)arg1;
- (void)setVideoViewOffscreenThresholdToStopPlayback:(float)arg1;
- (id)storeTabIdentifier;
- (id)tvShowsTabIdentifier;
- (float)videoViewOffscreenThresholdToStopPlayback;

@end
