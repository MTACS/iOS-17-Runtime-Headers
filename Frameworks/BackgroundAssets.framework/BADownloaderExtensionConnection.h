
@interface BADownloaderExtensionConnection : NSExtensionContext <BADownloaderExtensionSyncProtocol, _EXConnectionHandler, _EXMainConnectionHandler> {
    NSXPCConnection * _daemonConnection;
    NSObject<OS_dispatch_queue> * _extensionWorkQueue;
    <BADownloaderExtension> * _principalObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <BADownloaderExtension> *principalObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)acquireWakeAssertion;
- (void)backgroundDownload:(id)arg1 failedWithError:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)backgroundDownload:(id)arg1 finishedWithSandboxToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)downloadsForRequest:(long long)arg1 manifestURL:(id)arg2 manifestToken:(id)arg3 extensionInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)extensionWillTerminate;
- (id)initWithPrincipalObject:(id)arg1;
- (id)principalObject;
- (void)receivedAuthenticationChallenge:(id)arg1 download:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setPrincipalObject:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;
- (void)wakeupForTokenWithReply:(id /* block */)arg1;

@end
