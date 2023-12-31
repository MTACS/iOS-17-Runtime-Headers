
@interface TSUDownloadSession : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_group> * _completionGroup;
    <TSUDownloadSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didFinishInitialization;
    NSError * _error;
    NSObject<OS_dispatch_group> * _initializationGroup;
    bool  _isCancelled;
    double  _lastProgressValue;
    TSUDownloadManager * _manager;
    TSUBasicProgress * _progress;
    NSMutableSet * _remainingTasks;
    NSString * _sessionDescription;
    NSMutableDictionary * _taskProgress;
    long long  _totalBytesDownloaded;
    long long  _totalBytesExpectedToBeDownloaded;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) TSUProgress *progress;
@property (nonatomic, readonly) NSString *sessionDescription;
@property (nonatomic, readonly) long long totalBytesDownloaded;
@property (nonatomic, readonly) long long totalBytesExpectedToBeDownloaded;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelRemainingTasksNotifyingDelegate:(bool)arg1;
- (void)dealloc;
- (id)description;
- (void)didFinishInitialization;
- (bool)hasActiveTaskWithDescription:(id)arg1;
- (void)headRequestForDownloadItem:(id)arg1 taskProgress:(id)arg2;
- (id)init;
- (id)initWithManager:(id)arg1 downloadItems:(id)arg2 description:(id)arg3 willRequestDownload:(bool)arg4 delegate:(id)arg5;
- (bool)isActive;
- (bool)isCancelled;
- (void)notifyCompletionWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)progress;
- (id)sessionDescription;
- (void)taskWithDescription:(id)arg1 didCompleteWithError:(id)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)taskWithDescription:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (long long)totalBytesDownloaded;
- (long long)totalBytesExpectedToBeDownloaded;
- (void)updateProgressAndNotifyDelegate;
- (void)updateTaskProgress:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (id)waitUntilTimeout:(unsigned long long)arg1;

@end
