
@interface SeymourServices.AssetImageLoader : NSObject <NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate> {
    void $__lazy_storage_$_session;
    void assetFileStore;
    void eventHub;
    void lock;
    void queue;
    void requestIdentifierToTask;
    void taskCompletions;
    void taskResults;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (id)init;

@end
