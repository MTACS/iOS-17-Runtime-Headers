
@interface IMAVEmbeddedInterface : IMAVConferenceInterface

+ (void)updateCriticalState;

- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(bool)arg2;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (long long)_runPingTestForChat:(id)arg1;
- (void)chatStateUpdated;

@end
