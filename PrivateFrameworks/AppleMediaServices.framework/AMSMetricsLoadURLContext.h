
@interface AMSMetricsLoadURLContext : NSObject {
    <AMSBagProtocol> * _bag;
    NSDictionary * _decodedResponseBody;
    NSError * _error;
    NSDictionary * _metricsOverlay;
    AMSProcessInfo * _processInfo;
    AMSURLRequestProperties * _properties;
    NSData * _responseBody;
    NSURLSession * _session;
    NSURLSessionTask * _task;
    NSURLSessionTaskMetrics * _taskMetrics;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSDictionary *decodedResponseBody;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly, copy) NSDictionary *metricsOverlay;
@property (nonatomic, retain) AMSProcessInfo *processInfo;
@property (nonatomic, retain) AMSURLRequestProperties *properties;
@property (nonatomic, retain) NSData *responseBody;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, retain) NSURLSessionTask *task;
@property (nonatomic, retain) NSURLSessionTaskMetrics *taskMetrics;

- (void).cxx_destruct;
- (id)bag;
- (id)bagContract;
- (id)decodedResponseBody;
- (id)error;
- (id)initWithTask:(id)arg1 metrics:(id)arg2;
- (id)initWithTaskInfo:(id)arg1 serverPayload:(id)arg2;
- (id)metricsOverlay;
- (id)processInfo;
- (id)properties;
- (id)responseBody;
- (id)session;
- (void)setBag:(id)arg1;
- (void)setBagContract:(id)arg1;
- (void)setDecodedResponseBody:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProcessInfo:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setResponseBody:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (id)task;
- (id)taskMetrics;

@end
