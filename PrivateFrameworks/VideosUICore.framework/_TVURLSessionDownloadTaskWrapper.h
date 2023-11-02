
@interface _TVURLSessionDownloadTaskWrapper : NSObject {
    NSURLSessionDownloadTask * _downloadTask;
    long long  _downloadTaskID;
    long long  _state;
    NSURL * _url;
}

@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithURL:(id)arg1;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;
- (long long)state;

@end
