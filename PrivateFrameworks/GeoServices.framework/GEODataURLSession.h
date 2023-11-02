
@interface GEODataURLSession : NSObject <GEOSystemMonitorSystemSleepObserver, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    unsigned int  _nextSessionIdentifier;
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    NSOperationQueue * _sessionIsolationOperationQueue;
    NSMutableDictionary * _sessionTasks;
    int  _symptomsAlternateAdviceToken;
    GEODataURLSessionList * _urlSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int nextSessionIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (nonatomic, readonly) NSOperationQueue *sessionIsolationOperationQueue;
@property (nonatomic, readonly) NSMutableDictionary *sessionTasks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEODataURLSessionList *urlSessions;

+ (id)asynchronousGetURL:(id)arg1 kind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2 auditToken:(id)arg3 requestCounterTicket:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
+ (id)sharedDataURLSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_configureTask:(id)arg1 withRequest:(id)arg2;
- (void)_considerRetryingDueToAlternateAdvice;
- (double)_wifiAssistRetryDelay;
- (bool)_wifiAssistRetryEnabled;
- (id)activeSessionIdentifiers;
- (id)asynchronousGetURL:(id)arg1 kind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2 auditToken:(id)arg3 requestCounterTicket:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)createNewURLSessionWithRequest:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didReceiveMemoryPressureWarning;
- (id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (void)finishTasksAndInvalidateForegroundSessions:(id /* block */)arg1;
- (id)init;
- (unsigned int)nextSessionIdentifier;
- (void)pruneInactiveSessions;
- (id)removeTaskForURLSession:(id)arg1 task:(id)arg2;
- (void)replaceBackingTask:(id)arg1 withTask:(id)arg2 forURLSession:(id)arg3;
- (id)sessionIsolation;
- (id)sessionIsolationOperationQueue;
- (id)sessionTasks;
- (void)setNextSessionIdentifier:(unsigned int)arg1;
- (void)systemCanSleep:(id /* block */)arg1;
- (void)systemDidWake;
- (void)systemWillSleep:(id /* block */)arg1;
- (id)taskForURLSession:(id)arg1 task:(id)arg2;
- (id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (void)tearDown;
- (id)urlSessionForRequest:(id)arg1;
- (id)urlSessions;

@end
