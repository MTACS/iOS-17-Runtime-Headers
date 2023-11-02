
@interface MKPlaceCollectionImageDownloadOperation : NSOperation {
    NSString * _cacheId;
    NSCache * _downloadCache;
    NSURLSessionDataTask * _downloadTask;
    UIImage * _downloadedImage;
    bool  _executing;
    bool  _finished;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *cacheId;
@property (nonatomic) NSCache *downloadCache;
@property (nonatomic, retain) NSURLSessionDataTask *downloadTask;
@property (nonatomic, retain) UIImage *downloadedImage;
@property (nonatomic) bool executing;
@property (nonatomic) bool finished;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)cacheId;
- (void)cancel;
- (id)downloadCache;
- (id)downloadTask;
- (id)downloadedImage;
- (bool)executing;
- (bool)finished;
- (id)initWithUrl:(id)arg1 downloadCache:(id)arg2 cacheId:(id)arg3;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)markOperationAsComplete;
- (void)setCacheId:(id)arg1;
- (void)setDownloadCache:(id)arg1;
- (void)setDownloadTask:(id)arg1;
- (void)setDownloadedImage:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)start;
- (id)url;

@end
