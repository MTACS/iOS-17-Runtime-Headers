
@interface PXStoryDummyRelatedProducer : NSObject <PXStoryRelatedProducer> {
    unsigned long long  _targetUpNextCount;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) unsigned long long targetUpNextCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_relatedResultForConfiguration:(id)arg1 targetUpNextCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)initWithTargetUpNextCount:(unsigned long long)arg1;
- (id)requestConfigurationsRelatedToConfiguration:(id)arg1 withOptions:(unsigned long long)arg2 musicCurationParameters:(id)arg3 resultHandler:(id /* block */)arg4;
- (unsigned long long)targetUpNextCount;
- (id)workQueue;

@end
