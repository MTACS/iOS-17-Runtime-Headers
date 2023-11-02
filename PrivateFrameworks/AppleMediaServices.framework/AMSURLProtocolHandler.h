
@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {
    NSObject<OS_dispatch_queue> * _metricsQueue;
    NSObject<OS_dispatch_queue> * _responsePingQueue;
    AMSSigningSecurityService * _signingService;
    AMSURLSession * session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responsePingQueue;
@property (nonatomic) AMSURLSession *session;
@property (nonatomic, readonly) AMSSigningSecurityService *signingService;
@property (readonly) Class superclass;

+ (bool)isBuyURLOverridesForTouchIDEnabled;
+ (double)reversePushSamplingPercentageForTask:(id)arg1;

- (void).cxx_destruct;
- (bool)_URLIsTrustedFromRequest:(id)arg1 bag:(id)arg2;
- (void)_enqueueLoadURLEvent:(id)arg1 forContext:(id)arg2;
- (id)_handleResponse:(id)arg1 task:(id)arg2;
- (void)_pingURL:(id)arg1 session:(id)arg2 bag:(id)arg3;
- (void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2;
- (bool)_shouldEnableReversePushForTask:(id)arg1;
- (id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;
- (id)decodeMutableData:(id)arg1 task:(id)arg2 error:(id*)arg3;
- (void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;
- (id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
- (void)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleResponse:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)metricsQueue;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (void)reportMetricsForContext:(id)arg1;
- (id)responsePingQueue;
- (id)session;
- (void)setMetricsQueue:(id)arg1;
- (void)setResponsePingQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (id)signingService;

@end
