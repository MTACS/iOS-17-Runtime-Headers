
@interface AMSMockURLResponse : NSObject {
    NSData * _body;
    NSError * _error;
    NSDictionary * _headers;
    NSURLRequest * _originalRequest;
    bool  _performActualRequest;
    NSMutableArray * _responseHandlerBlocks;
    NSURLSessionTask * _runningTask;
    unsigned long long  _statusCode;
}

@property (nonatomic, retain) NSData *body;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic, readonly) NSURLRequest *originalRequest;
@property (nonatomic) bool performActualRequest;
@property (nonatomic, retain) NSMutableArray *responseHandlerBlocks;
@property (nonatomic, retain) NSURLSessionTask *runningTask;
@property (nonatomic) unsigned long long statusCode;

+ (id)responseFromActualResponse;
+ (id)responseWithError:(id)arg1;
+ (id)responseWithHARFile:(id)arg1;
+ (id)responseWithStatus:(unsigned long long)arg1 headers:(id)arg2 body:(id)arg3;

- (void).cxx_destruct;
- (void)addResponseHandler:(id /* block */)arg1;
- (id)body;
- (id)error;
- (struct { id x1; id x2; id x3; })handleReceivedRequest:(id)arg1;
- (id)headers;
- (id)init;
- (id)originalRequest;
- (bool)performActualRequest;
- (id)responseHandlerBlocks;
- (id)runningTask;
- (void)setBody:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setPerformActualRequest:(bool)arg1;
- (void)setResponseHandlerBlocks:(id)arg1;
- (void)setRunningTask:(id)arg1;
- (void)setStatusCode:(unsigned long long)arg1;
- (unsigned long long)statusCode;
- (void)stopRunningTasks;

@end
