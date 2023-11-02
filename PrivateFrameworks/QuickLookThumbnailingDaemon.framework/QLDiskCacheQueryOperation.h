
@interface QLDiskCacheQueryOperation : NSOperation {
    _QLCacheThread * _cacheThread;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _thumbnailRequestBatch;
    long long  _thumbnailRequestCount;
}

@property (retain) _QLCacheThread *cacheThread;
@property (retain) NSMutableDictionary *thumbnailRequestBatch;
@property long long thumbnailRequestCount;

- (void).cxx_destruct;
- (bool)appendThumbnailRequest:(id)arg1;
- (id)cacheThread;
- (void)cancel;
- (void)dealloc;
- (id)initWithCacheThread:(id)arg1;
- (void)main;
- (void)setCacheThread:(id)arg1;
- (void)setThumbnailRequestBatch:(id)arg1;
- (void)setThumbnailRequestCount:(long long)arg1;
- (id)thumbnailRequestBatch;
- (long long)thumbnailRequestCount;

@end
