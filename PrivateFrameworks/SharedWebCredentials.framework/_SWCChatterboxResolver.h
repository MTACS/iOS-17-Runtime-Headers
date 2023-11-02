
@interface _SWCChatterboxResolver : NSObject {
    NSURLComponents * _URLComponents;
    id /* block */  _completionHandler;
    NSURLSession * _session;
    NSURLSessionDataTask * _task;
}

@property (readonly, copy) NSURL *originalURL;

+ (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)_invokeCompletionHandlerForTask:(id)arg1 result:(id)arg2 error:(id)arg3;
+ (bool)_looksLikeAppleErrorPageURLResponse:(id)arg1;
+ (bool)_looksLikeChatterboxURLComponents:(id)arg1;
+ (id)_queue;
+ (id)_resolverForTask:(id)arg1;
+ (id)_session;
+ (void)_setResolver:(id)arg1 forTask:(id)arg2;
+ (id)new;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)originalURL;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;

@end
