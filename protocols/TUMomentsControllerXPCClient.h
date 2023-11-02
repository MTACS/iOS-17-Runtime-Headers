
@protocol TUMomentsControllerXPCClient <NSObject, TUMomentsSandboxingDataSource>

@required

- (oneway void)didFinishProcessingRawVideoMessage:(TUMomentsRawVideoMessageDescriptor *)arg1;
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg1;
- (oneway void)didReceiveMessageRecordingError:(NSError *)arg1;
- (oneway void)didUpdateCapabilities:(TUMomentsCapabilities *)arg1 forVideoStreamToken:(long long)arg2;
- (oneway void)willCaptureRemoteRequestFromRequesterID:(NSString *)arg1;

@end
