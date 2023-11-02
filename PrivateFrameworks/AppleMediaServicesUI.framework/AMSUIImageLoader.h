
@interface AMSUIImageLoader : NSObject {
    AMSUIAssetQueue * _fetchQueue;
    NSCache * _imageCache;
    NSURLSession * _urlSession;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) AMSUIAssetQueue *fetchQueue;
@property (nonatomic, retain) NSCache *imageCache;
@property (nonatomic, retain) NSURLSession *urlSession;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultLoader;

- (void).cxx_destruct;
- (void)_cacheImage:(id)arg1 withURL:(id)arg2;
- (id)_fetchImageFromCacheWithURL:(id)arg1;
- (id)_fetchImageWithURL:(id)arg1 searchBundles:(id)arg2 atPriority:(long long)arg3;
- (bool)_isURLBundleResource:(id)arg1;
- (bool)_isURLEngagementContent:(id)arg1;
- (bool)_isURLSystemImage:(id)arg1;
- (id)_makeOperationForImageWithURL:(id)arg1 searchBundles:(id)arg2 error:(id*)arg3;
- (id)_makeSystemImageFetchOperationForSystemURL:(id)arg1 error:(id*)arg2;
- (id)_performLowLatencyOperation:(id)arg1;
- (id)fetchImageWithURL:(id)arg1;
- (id)fetchImageWithURL:(id)arg1 searchBundles:(id)arg2;
- (id)fetchQueue;
- (id)imageCache;
- (id)init;
- (void)setFetchQueue:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)urlSession;
- (id)workQueue;

@end
