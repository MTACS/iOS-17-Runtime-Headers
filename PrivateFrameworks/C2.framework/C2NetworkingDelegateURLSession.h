
@interface C2NetworkingDelegateURLSession : NSObject {
    NSURLSessionConfiguration * _configuration;
    NSOperationQueue * _delegateQueue;
    NSObject<C2NetworkingDelegate> * _networkingDelegate;
    <NSURLSessionDelegate><C2RequestDelegate> * _sessionDelegate;
    NSString * _sessionDescription;
}

@property (copy) NSURLSessionConfiguration *configuration;
@property (retain) NSOperationQueue *delegateQueue;
@property (nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate;
@property (nonatomic) <NSURLSessionDelegate><C2RequestDelegate> *sessionDelegate;
@property (copy) NSString *sessionDescription;

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

- (void).cxx_destruct;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)configuration;
- (id)dataTaskWithRequest:(id)arg1;
- (id)delegateQueue;
- (void)invalidateAndCancel;
- (id)networkingDelegate;
- (id)sessionDelegate;
- (id)sessionDescription;
- (void)setConfiguration:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setNetworkingDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setSessionDescription:(id)arg1;

@end
