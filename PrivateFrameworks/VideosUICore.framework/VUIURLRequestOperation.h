
@interface VUIURLRequestOperation : VUIAsynchronousOperation {
    NSData * _data;
    NSError * _error;
    NSURLRequest * _request;
    NSURLResponse * _response;
    NSURLSession * _session;
    NSURLSessionDataTask * _task;
    unsigned long long  _taskStartTime;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, readonly) unsigned long long elapsedTimeInMilliseconds;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic, copy) NSURLResponse *response;
@property (nonatomic, copy) NSURLSession *session;
@property (nonatomic, copy) NSURLSessionDataTask *task;
@property (nonatomic) unsigned long long taskStartTime;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3;
- (void)cancel;
- (id)data;
- (unsigned long long)elapsedTimeInMilliseconds;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 session:(id)arg2;
- (id)request;
- (id)response;
- (id)session;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskStartTime:(unsigned long long)arg1;
- (id)task;
- (unsigned long long)taskStartTime;

@end
