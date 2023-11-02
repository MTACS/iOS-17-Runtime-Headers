
@protocol RPClientProtocol <NSObject>

@optional

- (oneway void)captureHandlerWithAudioSample:(NSDictionary *)arg1 bufferType:(long long)arg2;
- (oneway void)captureHandlerWithSample:(RPIOSurfaceObject *)arg1 timingData:(NSData *)arg2;
- (oneway void)recordingDidPause;
- (oneway void)recordingDidStopWithError:(NSError *)arg1 movieURL:(NSURL *)arg2;
- (oneway void)recordingLockInterrupted:(NSError *)arg1;
- (oneway void)recordingTimerDidUpdate:(NSString *)arg1;
- (oneway void)shouldResumeSessionType:(NSString *)arg1;
- (oneway void)updateBroadcastServiceInfo:(NSDictionary *)arg1;
- (oneway void)updateBroadcastURL:(NSURL *)arg1;
- (oneway void)updateScreenRecordingStateWithCurrentState:(NSDictionary *)arg1;

@end
