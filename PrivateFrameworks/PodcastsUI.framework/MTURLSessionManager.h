
@interface MTURLSessionManager : MTSingleton <MTRestorableBackgroundSession, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate> {
    id /* block */  _sessionCompletionHandler;
    NSURLSession * _sessionForBackgroundDownloads;
    NSURLSession * _sessionForForegroundDownloads;
    NSObject<OS_dispatch_queue> * _startQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ sessionCompletionHandler;
@property (nonatomic, retain) NSURLSession *sessionForBackgroundDownloads;
@property (nonatomic, retain) NSURLSession *sessionForForegroundDownloads;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *startQueue;
@property (readonly) Class superclass;

+ (id)originalURLForTask:(id)arg1;
+ (void)purgeExternalCookies;
+ (long long)statusCodeForTask:(id)arg1;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)_assertSubclassRequirements;
- (void)_invokeURLSessionBackgroundEventsCompletionHandler;
- (void)_showCredentialsActionControllerForHost:(id)arg1 signIn:(id /* block */)arg2 cancel:(id /* block */)arg3;
- (bool)_subclassImplementsConfigureSession;
- (bool)_subclassImplementsDataDidDownload;
- (bool)_subclassImplementsDidFailWithError;
- (bool)_subclassImplementsInstanceMethod:(SEL)arg1;
- (bool)_subclassImplementsURLDidDownload;
- (id)backgroundSessionConfigurationIdentifier;
- (void)configureSession:(id)arg1;
- (id)init;
- (void)loadSessionsIfNeeded;
- (id /* block */)sessionCompletionHandler;
- (id)sessionForBackgroundDownloads;
- (id)sessionForConfiguration:(id)arg1;
- (id)sessionForForegroundDownloads;
- (void)setSessionCompletionHandler:(id /* block */)arg1;
- (void)setSessionForBackgroundDownloads:(id)arg1;
- (void)setSessionForForegroundDownloads:(id)arg1;
- (void)setStartQueue:(id)arg1;
- (void)startDownloadTaskForURL:(id)arg1 userInitiated:(bool)arg2 useBackgroundFetch:(bool)arg3 usePrivatePath:(id)arg4 downloadStartedBlock:(id /* block */)arg5;
- (id)startQueue;
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;

@end
