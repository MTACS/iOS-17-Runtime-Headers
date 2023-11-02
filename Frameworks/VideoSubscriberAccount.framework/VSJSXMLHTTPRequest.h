
@interface VSJSXMLHTTPRequest : VSJSEventTargetObject <VSJSXMLHTTPRequest> {
    unsigned long long  _readyState;
    NSMutableURLRequest * _request;
    bool  _requestSent;
    NSURLSession * _session;
    NSURLSessionTask * _sessionTask;
    NSURLResponse * _urlResponse;
    id  response;
    NSString * responseText;
    NSString * responseType;
    unsigned long long  status;
    NSString * statusText;
    unsigned long long  timeout;
}

@property (nonatomic) unsigned long long readyState;
@property (nonatomic, retain) NSMutableURLRequest *request;
@property (nonatomic) bool requestSent;
@property (nonatomic, retain) id response;
@property (nonatomic, retain) NSString *responseText;
@property (nonatomic, retain) NSString *responseType;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, retain) NSURLSessionTask *sessionTask;
@property (nonatomic) unsigned long long status;
@property (nonatomic, retain) NSString *statusText;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic, retain) NSURLResponse *urlResponse;

- (void).cxx_destruct;
- (void)_cancelCurrentRequestAndNotify:(bool)arg1;
- (void)_notifyWithFunctionName:(id)arg1 eventName:(id)arg2 info:(id)arg3;
- (void)abort;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
- (unsigned long long)readyState;
- (id)request;
- (bool)requestSent;
- (id)response;
- (id)responseText;
- (id)responseType;
- (void)send:(id)arg1;
- (id)session;
- (id)sessionTask;
- (void)setReadyState:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestHeader:(id)arg1 :(id)arg2;
- (void)setRequestSent:(bool)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseText:(id)arg1;
- (void)setResponseType:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionTask:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setUrlResponse:(id)arg1;
- (unsigned long long)status;
- (id)statusText;
- (unsigned long long)timeout;
- (id)urlResponse;

@end
