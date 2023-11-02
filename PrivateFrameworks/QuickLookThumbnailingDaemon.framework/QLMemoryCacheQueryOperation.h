
@interface QLMemoryCacheQueryOperation : NSOperation {
    _QLCacheThread * _cacheThread;
    QLTGeneratorThumbnailRequest * _generatorRequest;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) QLTGeneratorThumbnailRequest *generatorRequest;

- (void).cxx_destruct;
- (void)cancel;
- (id)generatorRequest;
- (id)initWithThumbnailRequest:(id)arg1 cacheThread:(id)arg2;
- (void)main;
- (void)setGeneratorRequest:(id)arg1;

@end
