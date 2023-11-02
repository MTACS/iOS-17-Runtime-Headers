
@protocol HMSoftwareUpdateUrlSessionDelegate <NSURLSessionDelegate>

@required

- (void)URLSession:(id <HMSoftwareUpdateUrlSession>)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;
- (void)URLSession:(id <HMSoftwareUpdateUrlSession>)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id <HMSoftwareUpdateUrlSession>)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;

@end
