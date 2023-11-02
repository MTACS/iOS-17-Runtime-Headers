
@interface HFAnalyticsAnnouncePlaybackEvent : HFAnalyticsEvent {
    NSNumber * _audioTranscriptionsAreEnabled;
    NSString * _playbackAnnouncementID;
    NSNumber * _playbackDuration;
    NSNumber * _playbackFailed;
    bool  _playbackInterruptedByRouteChange;
    bool  _playbackInterruptedBySystem;
    bool  _playbackInterruptedByUser;
    NSString * _processName;
    NSNumber * _routeChangeInterruptionReason;
}

@property (nonatomic, retain) NSNumber *audioTranscriptionsAreEnabled;
@property (nonatomic, retain) NSString *playbackAnnouncementID;
@property (nonatomic, retain) NSNumber *playbackDuration;
@property (nonatomic, retain) NSNumber *playbackFailed;
@property (nonatomic) bool playbackInterruptedByRouteChange;
@property (nonatomic) bool playbackInterruptedBySystem;
@property (nonatomic) bool playbackInterruptedByUser;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSNumber *routeChangeInterruptionReason;

- (void).cxx_destruct;
- (id)audioTranscriptionsAreEnabled;
- (id)initWithData:(id)arg1;
- (id)payload;
- (id)playbackAnnouncementID;
- (id)playbackDuration;
- (id)playbackFailed;
- (bool)playbackInterruptedByRouteChange;
- (bool)playbackInterruptedBySystem;
- (bool)playbackInterruptedByUser;
- (id)processName;
- (id)routeChangeInterruptionReason;
- (void)setAudioTranscriptionsAreEnabled:(id)arg1;
- (void)setPlaybackAnnouncementID:(id)arg1;
- (void)setPlaybackDuration:(id)arg1;
- (void)setPlaybackFailed:(id)arg1;
- (void)setPlaybackInterruptedByRouteChange:(bool)arg1;
- (void)setPlaybackInterruptedBySystem:(bool)arg1;
- (void)setPlaybackInterruptedByUser:(bool)arg1;
- (void)setProcessName:(id)arg1;
- (void)setRouteChangeInterruptionReason:(id)arg1;

@end
