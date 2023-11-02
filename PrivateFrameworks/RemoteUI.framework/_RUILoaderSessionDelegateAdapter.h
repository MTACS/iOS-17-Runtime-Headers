
@interface _RUILoaderSessionDelegateAdapter : NSObject <NSURLSessionTaskDelegate> {
    NSObject<NSURLSessionTaskDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<NSURLSessionTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
