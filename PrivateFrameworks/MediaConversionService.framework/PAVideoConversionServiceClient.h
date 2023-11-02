
@interface PAVideoConversionServiceClient : NSObject <VideoConversionServiceClient> {
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableDictionary * _pendingRequestIdentifierToProgressMap;
    NSXPCConnection * _serviceConnection;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSMutableDictionary *pendingRequestIdentifierToProgressMap;
@property (retain) NSXPCConnection *serviceConnection;
@property unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canMarkPendingRequestAsOptionalForProgress:(id)arg1;
- (id)convertVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)convertVideoAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)extractStillImageFromVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleRequestCompletionForIdentifier:(id)arg1;
- (id)init;
- (void)invalidateAfterPendingRequestCompletion;
- (id)isolationQueue;
- (void)markPendingRequestAsOptionalForProgress:(id)arg1;
- (void)modifyRequestWithIdentifier:(id)arg1 modifications:(id)arg2;
- (id)pendingRequestIdentifierToProgressMap;
- (void)requestStatusWithCompletionHandler:(id /* block */)arg1;
- (id)serviceConnection;
- (void)setIsolationQueue:(id)arg1;
- (void)setPendingRequestIdentifierToProgressMap:(id)arg1;
- (void)setServiceConnection:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setupServiceConnection;
- (unsigned long long)state;
- (void)transitionToInvalidatedState;
- (void)updateProgress:(id)arg1;
- (void)ut_invalidateServiceConnection;

@end
