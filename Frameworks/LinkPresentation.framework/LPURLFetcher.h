
@interface LPURLFetcher : LPFetcher <_WKDataTaskDelegate> {
    NSString * _MIMEType;
    NSURL * _URL;
    id /* block */  _completionHandler;
    NSMutableData * _data;
    Class  _responseClass;
    WKWebView * _webView;
}

@property (nonatomic, retain) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class responseClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)_completedWithData:(id)arg1 MIMEType:(id)arg2 error:(id)arg3;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)cancel;
- (void)dataTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)dataTask:(id)arg1 didReceiveResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (Class)responseClass;
- (void)setResponseClass:(Class)arg1;
- (void)setURL:(id)arg1;

@end
