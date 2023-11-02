
@interface ARPCorrelationTaskScheduler : NSObject {
    NSDate * _bookmark;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSObject<OS_dispatch_queue> * _queue;
    BPSSink * _sinkAccessories;
    BPSSink * _sinkMediaAccessories;
    BPSSink * _sinkScenes;
}

@property (copy) NSDate *bookmark;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) BPSSink *sinkAccessories;
@property (nonatomic, readonly) BPSSink *sinkMediaAccessories;
@property (nonatomic, readonly) BPSSink *sinkScenes;

- (void).cxx_destruct;
- (void)_executeCorrelationTask;
- (void)_executeHomeControlMicrolocationCorrelationTask;
- (void)_executeHomeControlNextActionCorrelationTask;
- (id)bookmark;
- (void)dealloc;
- (void)executeCorrelationTask;
- (void)homeKitEventInserted;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)knowledgeStore;
- (void)microLocationEventInserted:(id)arg1;
- (void)nowPlayingEventInserted:(id)arg1;
- (id)queue;
- (void)setBookmark:(id)arg1;
- (id)sinkAccessories;
- (id)sinkMediaAccessories;
- (id)sinkScenes;

@end
