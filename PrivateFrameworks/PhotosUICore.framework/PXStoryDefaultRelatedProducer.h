
@interface PXStoryDefaultRelatedProducer : NSObject <PXStoryRelatedProducer> {
    NSMutableArray * _activeRequests;
    unsigned long long  _targetUpNextCount;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableArray *activeRequests;
@property (nonatomic, readonly) unsigned long long targetUpNextCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_relatedResultFromUpNextResult:(id)arg1 error:(id)arg2;
+ (id)_requestForConfiguration:(id)arg1 targetUpNextMemoryCount:(unsigned long long)arg2 musicCurationParameters:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)activeRequests;
- (id)initWithTargetUpNextCount:(unsigned long long)arg1;
- (id)requestConfigurationsRelatedToConfiguration:(id)arg1 withOptions:(unsigned long long)arg2 musicCurationParameters:(id)arg3 resultHandler:(id /* block */)arg4;
- (unsigned long long)targetUpNextCount;
- (id)workQueue;

@end
