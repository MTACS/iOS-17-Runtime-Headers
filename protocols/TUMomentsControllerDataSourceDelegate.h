
@protocol TUMomentsControllerDataSourceDelegate <NSObject>

@required

- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didFinishProcessingRawVideoMessage:(TUMomentsRawVideoMessageDescriptor *)arg2;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg2;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didReceiveMessageRecordingError:(NSError *)arg2;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forVideoStreamToken:(long long)arg3;
- (void)dataSource:(void *)arg1 requestSandboxExtensionForURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: <TUMomentsControllerDataSource> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUSandboxExtendedURL *, NSError *, void*
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 willCaptureRemoteRequestFromRequesterID:(NSString *)arg2;
- (void)serverDiedForDataSource:(id <TUMomentsControllerDataSource>)arg1;

@end
