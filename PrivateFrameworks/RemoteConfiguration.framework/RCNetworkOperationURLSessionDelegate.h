
@interface RCNetworkOperationURLSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate> {
    RCUnfairLock * _observerLock;
    NSMutableDictionary * _runningTasks;
    NSPointerArray * _sessionDidFinishObservers;
    NSString * _sessionIdentifier;
    RCUnfairLock * _taskLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RCUnfairLock *observerLock;
@property (nonatomic, retain) NSMutableDictionary *runningTasks;
@property (nonatomic, retain) NSPointerArray *sessionDidFinishObservers;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) RCUnfairLock *taskLock;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)_existingNetworkTaskForURLSessionTask:(id)arg1;
- (id)_networkTaskForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (void)observeCompletionOfTaskWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)observerLock;
- (id)runningTasks;
- (id)sessionDidFinishObservers;
- (id)sessionIdentifier;
- (void)setObserverLock:(id)arg1;
- (void)setRunningTasks:(id)arg1;
- (void)setSessionDidFinishObservers:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setTaskLock:(id)arg1;
- (id)taskLock;

@end
