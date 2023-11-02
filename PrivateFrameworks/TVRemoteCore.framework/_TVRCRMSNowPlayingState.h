
@interface _TVRCRMSNowPlayingState : NSObject {
    double  _duration;
    double  _lastReportedPlaybackPosition;
    NSDate * _lastReportedTimestamp;
    double  _playbackRate;
}

@property (nonatomic) double duration;
@property (nonatomic) double lastReportedPlaybackPosition;
@property (nonatomic, retain) NSDate *lastReportedTimestamp;
@property (nonatomic) double playbackRate;

+ (id)nowPlayingStateFromInfo:(id)arg1;

- (void).cxx_destruct;
- (double)duration;
- (double)lastReportedPlaybackPosition;
- (id)lastReportedTimestamp;
- (double)playbackRate;
- (void)setDuration:(double)arg1;
- (void)setLastReportedPlaybackPosition:(double)arg1;
- (void)setLastReportedTimestamp:(id)arg1;
- (void)setPlaybackRate:(double)arg1;

@end
