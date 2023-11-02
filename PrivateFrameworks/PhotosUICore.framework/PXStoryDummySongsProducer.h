
@interface PXStoryDummySongsProducer : NSObject <PXStorySongsProducer> {
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _queue_assets;
    unsigned long long  logContext;
}

@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (void)_queue_requestSongsWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (id)init;
- (unsigned long long)logContext;
- (id)requestSongsWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (void)setLogContext:(unsigned long long)arg1;

@end
