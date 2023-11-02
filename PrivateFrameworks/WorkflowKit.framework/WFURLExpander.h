
@interface WFURLExpander : NSObject <NSURLSessionDataDelegate> {
    NSURL * _URL;
    id /* block */  _completionHandler;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)expandURL:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)URL;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id /* block */)completionHandler;
- (void)finishWithURL:(id)arg1 error:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setURL:(id)arg1;
- (void)start;

@end
