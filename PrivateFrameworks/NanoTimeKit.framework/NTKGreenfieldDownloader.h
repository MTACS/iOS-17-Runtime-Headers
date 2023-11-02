
@interface NTKGreenfieldDownloader : NSObject {
    NSURLSessionDownloadTask * _downloadTask;
    NSURL * _downloadedFileURL;
    NSURL * _remoteWatchFaceURL;
}

- (void).cxx_destruct;
- (bool)_copyFileFromURL:(id)arg1;
- (id)_downloadURL;
- (id)_downloadedFolderURL;
- (long long)_greenfieldErrorFromURLSessionError:(long long)arg1;
- (void)cancelDownload;
- (void)downloadCleanUp;
- (void)downloadWithCompletionBlock:(id /* block */)arg1;
- (id)initWithWatchFaceURL:(id)arg1;

@end
