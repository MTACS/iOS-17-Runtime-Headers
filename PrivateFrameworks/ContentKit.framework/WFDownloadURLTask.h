
@interface WFDownloadURLTask : NSObject <NSURLSessionDownloadDelegate> {
    id /* block */  _completionHandler;
    id /* block */  _expectedByteCountHandler;
    NSURLRequest * _request;
    id /* block */  _writtenByteCountHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ expectedByteCountHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLRequest *request;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ writtenByteCountHandler;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id /* block */)completionHandler;
- (id /* block */)expectedByteCountHandler;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExpectedByteCountHandler:(id /* block */)arg1;
- (void)setWrittenByteCountHandler:(id /* block */)arg1;
- (void)start;
- (id /* block */)writtenByteCountHandler;

@end
