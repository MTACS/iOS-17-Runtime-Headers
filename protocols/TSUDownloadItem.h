
@protocol TSUDownloadItem <NSObject>

@required

+ (bool)canHandleDownloadTask:(NSURLSessionTask *)arg1;
+ (void)downloadManager:(TSUDownloadManager *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
+ (void)downloadManager:(TSUDownloadManager *)arg1 task:(NSURLSessionTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;

- (NSString *)downloadTaskDescription;
- (NSURL *)downloadURL;
- (long long)totalBytesExpectedToBeDownloaded;

@optional

- (bool)needsDownload;

@end
