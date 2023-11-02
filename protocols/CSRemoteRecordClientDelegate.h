
@protocol CSRemoteRecordClientDelegate <NSObject>

@required

- (void)remoteRecordConnectionDisconnected:(CSRemoteRecordClient *)arg1;
- (void)remoteRecordDidStartRecordingWithStreamHandleId:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)remoteRecordDidStopRecordingWithWithStreamHandleId:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)remoteRecordLPCMBufferAvailable:(NSData *)arg1 streamHandleId:(unsigned long long)arg2;
- (void)remoteRecordTwoShotDetectedAtTime:(double)arg1;

@end
