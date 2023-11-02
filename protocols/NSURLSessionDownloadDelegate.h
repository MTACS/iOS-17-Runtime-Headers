
@protocol NSURLSessionDownloadDelegate <NSURLSessionTaskDelegate>

@required

- (void)URLSession:(NSURLSession *)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;

@optional

- (void)URLSession:(NSURLSession *)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(NSURLSession *)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;

@end
