
@interface VUIARAssetRequest : NSObject {
    NSString * _cacheKey;
    id /* block */  _completionHandler;
    NSString * _fileName;
    bool  _isDownloading;
    NSURL * _remoteURL;
    NSURL * _shareURL;
    NSURLSessionDownloadTask * _task;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) bool isDownloading;
@property (nonatomic, retain) NSURL *remoteURL;
@property (nonatomic, retain) NSURL *shareURL;
@property (nonatomic, retain) NSURLSessionDownloadTask *task;

- (void).cxx_destruct;
- (id)_prefixForString:(id)arg1;
- (id)cacheDownloadedFileFromLocation:(id)arg1;
- (id)cacheKey;
- (id)cachePath;
- (void)cancelDownload;
- (id /* block */)completionHandler;
- (id)fileName;
- (id)initWithRemoteURL:(id)arg1 shareURL:(id)arg2 fileName:(id)arg3;
- (bool)isDownloading;
- (void)recordLog:(id)arg1;
- (id)remoteURL;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFileName:(id)arg1;
- (void)setIsDownloading:(bool)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setTask:(id)arg1;
- (id)shareURL;
- (void)startDownloadWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)task;

@end
