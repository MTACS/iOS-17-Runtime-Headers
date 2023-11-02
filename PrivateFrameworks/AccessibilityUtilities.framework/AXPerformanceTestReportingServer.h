
@interface AXPerformanceTestReportingServer : AXServer

+ (id)server;

- (id)_serviceName;
- (void)assistiveTouchDidLaunch;
- (void)voiceOverDidSpeak:(id)arg1;
- (void)voiceOverTouchDidLaunch;

@end
