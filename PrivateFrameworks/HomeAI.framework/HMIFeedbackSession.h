
@interface HMIFeedbackSession : HMFObject <HMFLogging, NSURLSessionDelegate> {
    NSString * _feedbackServiceHost;
    HMIHomeKitClient * _homeKitClient;
    NSOperationQueue * _operationQueue;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *feedbackServiceHost;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomeKitClient *homeKitClient;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)feedbackServiceHost;
- (id)homeKitClient;
- (id)init;
- (id)operationQueue;
- (id)session;

@end
