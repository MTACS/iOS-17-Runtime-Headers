
@interface TUMomentsControllerXPCClient : NSObject <TUMomentsControllerDataSource, TUMomentsControllerXPCClient> {
    <TUMomentsControllerDataSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUMomentsControllerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly, copy) NSString *processName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)momentsControllerClientXPCInterface;
+ (id)momentsControllerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)_registerConnection;
- (void)dealloc;
- (id)delegate;
- (oneway void)didFinishProcessingRawVideoMessage:(id)arg1;
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(id)arg1;
- (oneway void)didReceiveMessageRecordingError:(id)arg1;
- (oneway void)didUpdateCapabilities:(id)arg1 forVideoStreamToken:(long long)arg2;
- (void)discardVideoMessageWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)endRecordingMessageWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)endRequestWithTransactionID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)prewarmAudioClientWithCompletion:(id /* block */)arg1;
- (id)processBundleIdentifier;
- (int)processIdentifier;
- (id)processName;
- (id)queue;
- (void)registerStreamToken:(long long)arg1 requesterID:(id)arg2 remoteIDSDestinations:(id)arg3 remoteMomentsAvailable:(bool)arg4 completion:(id /* block */)arg5;
- (oneway void)requestSandboxExtensionForURL:(id)arg1 reply:(id /* block */)arg2;
- (void)resetVideoMessagingWithSessionUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)saveVideoMessageWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendVideoMessageWithUUID:(id)arg1 callUUID:(id)arg2 toHandles:(id)arg3 completion:(id /* block */)arg4;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startRecordingMessageWithMediaType:(int)arg1 completion:(id /* block */)arg2;
- (void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(id)arg3 destinationID:(id)arg4 completion:(id /* block */)arg5;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (void)unregisterStreamToken:(long long)arg1 completion:(id /* block */)arg2;
- (oneway void)willCaptureRemoteRequestFromRequesterID:(id)arg1;
- (id)xpcConnection;

@end
