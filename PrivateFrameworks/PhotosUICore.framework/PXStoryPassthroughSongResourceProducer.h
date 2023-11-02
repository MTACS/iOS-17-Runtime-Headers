
@interface PXStoryPassthroughSongResourceProducer : NSObject <PXStorySongResourceProducer> {
    <PXStorySongResource> * _songResource;
    unsigned long long  logContext;
}

@property (nonatomic) unsigned long long logContext;
@property (nonatomic, readonly) <PXStorySongResource> *songResource;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSongResource:(id)arg1;
- (unsigned long long)logContext;
- (id)requestSongResourceWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (void)setLogContext:(unsigned long long)arg1;
- (id)songResource;

@end
