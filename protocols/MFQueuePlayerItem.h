
@protocol MFQueuePlayerItem <MFPlayerItem, MFTransitionInformationProviding>

@required

- (NSArray *)adjunctErrors;
- (double)effectivePlaybackStartTime;
- (bool)isAlwaysLive;
- (bool)isMovieOrTVShow;
- (bool)isSpokenAudio;
- (bool)isStartItem;
- (double)playbackStartTime;
- (double)playbackStartTimeOverride;
- (void)reset;
- (void)setIsStartItem:(bool)arg1;
- (void)setPlaybackStartTimeOverride:(double)arg1;

@end
