
@interface _CDServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    NSHTTPURLResponse * _httpResponse;
    NSMutableURLRequest * _request;
    NSMutableData * _responseData;
    id /* block */  _responseHandler;
    NSURLSession * _session;
    NSOperationQueue * _sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)description;
- (id)init;

@end
