
@interface TVPPlayerReporter : NSObject {
    TVPPlayer * _player;
    id  _reportingHierarchyToken;
    RTCReporting * _rtcAgent;
}

@property (nonatomic) TVPPlayer *player;
@property (nonatomic, retain) id reportingHierarchyToken;
@property (retain) RTCReporting *rtcAgent;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_playerCurrentMediaItemDidChange:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_playerStateWillChange:(id)arg1;
- (id)_rtcAgentUserInfo;
- (void)_sendPlaybackStartupEventsIfNecessary;
- (void)_sendRTCEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (void)_setupRTCAgent;
- (void)_tearDownRTCAgent;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (id)reportingHierarchyToken;
- (id)rtcAgent;
- (void)sendPlaybackStartupMetricsManually;
- (void)setPlayer:(id)arg1;
- (void)setReportingHierarchyToken:(id)arg1;
- (void)setRtcAgent:(id)arg1;

@end
