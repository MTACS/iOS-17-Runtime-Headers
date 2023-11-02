
@interface NDAnalyticsUploadScheduler : NSObject <FCOperationThrottlerDelegate, NSURLSessionTaskDelegate> {
    NSURLSession * _backgroundSession;
    FCBalancedCounter * _backgroundSessionLaunchEventCounter;
    NSOperationQueue * _backgroundSessionQueue;
    <NDAnalyticsUploadSchedulerDelegate> * _delegate;
    FCDateRange * _deliveryWindow;
    NFMutexLock * _lock;
    <FCOperationThrottler> * _schedulingAndForegroundUploadThrottler;
    FCAsyncSerialQueue * _uploadQueue;
}

@property (nonatomic, retain) NSURLSession *backgroundSession;
@property (nonatomic, retain) FCBalancedCounter *backgroundSessionLaunchEventCounter;
@property (nonatomic, retain) NSOperationQueue *backgroundSessionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NDAnalyticsUploadSchedulerDelegate> *delegate;
@property (nonatomic, copy) FCDateRange *deliveryWindow;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFMutexLock *lock;
@property (nonatomic, retain) <FCOperationThrottler> *schedulingAndForegroundUploadThrottler;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCAsyncSerialQueue *uploadQueue;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)_scheduleBackgroundUploadInWindow:(id)arg1;
- (void)_uploadWithCompletion:(id /* block */)arg1;
- (id)backgroundSession;
- (id)backgroundSessionLaunchEventCounter;
- (id)backgroundSessionQueue;
- (id)delegate;
- (id)deliveryWindow;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithURLSessionQueue:(id)arg1;
- (id)lock;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (void)scheduleUploadInWindow:(id)arg1 withForegroundUploadCompletion:(id /* block */)arg2;
- (id)schedulingAndForegroundUploadThrottler;
- (void)setBackgroundSession:(id)arg1;
- (void)setBackgroundSessionLaunchEventCounter:(id)arg1;
- (void)setBackgroundSessionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeliveryWindow:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setSchedulingAndForegroundUploadThrottler:(id)arg1;
- (void)setUploadQueue:(id)arg1;
- (id)uploadQueue;

@end
