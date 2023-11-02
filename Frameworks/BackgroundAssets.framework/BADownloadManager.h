
@interface BADownloadManager : NSObject <BADownloadManagerSyncProtocol> {
    NSString * _applicationIdentifier;
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    <BADownloadManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateCallbackQueue;
    NSMutableDictionary * _downloads;
    BADownloaderExtensionConnection * _extensionConnection;
    BAAgentClientProxy * _proxy;
    bool  _scheduleLocked;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (readonly, copy) NSString *debugDescription;
@property <BADownloadManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)cancelDownload:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)downloadIdentifier:(id)arg1 didFailWithError:(id)arg2 wasHandled:(id /* block */)arg3;
- (void)downloadIdentifier:(id)arg1 didReceiveChallenge:(id)arg2 authChallengeHandler:(id /* block */)arg3;
- (void)downloadIdentifier:(id)arg1 didWriteBytes:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)downloadIdentifierDidBegin:(id)arg1;
- (void)downloadIdentifierDidFinish:(id)arg1 sandboxExtensionToken:(id)arg2 wasHandled:(id /* block */)arg3;
- (void)downloadIdentifierDidPause:(id)arg1;
- (id)fetchCurrentDownloads:(id*)arg1;
- (void)fetchCurrentDownloadsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)performWithExclusiveControl:(id /* block */)arg1;
- (void)performWithExclusiveControlBeforeDate:(id)arg1 performHandler:(id /* block */)arg2;
- (void)removeDownloadIdentifier:(id)arg1;
- (bool)scheduleDownload:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)startForegroundDownload:(id)arg1 error:(id*)arg2;
- (void)syncDownloads:(id)arg1;

@end
