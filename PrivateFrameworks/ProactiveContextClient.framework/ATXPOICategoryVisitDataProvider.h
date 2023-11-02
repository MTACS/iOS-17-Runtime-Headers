
@interface ATXPOICategoryVisitDataProvider : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
    ATXPOICategoryStream * _stream;
    ATXPOICategoryEventAggregator * _streamAggregator;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) BMBiomeScheduler *scheduler;
@property (nonatomic, retain) BPSSink *sink;
@property (nonatomic, retain) ATXPOICategoryStream *stream;
@property (nonatomic, retain) ATXPOICategoryEventAggregator *streamAggregator;

- (void).cxx_destruct;
- (id)getCurrentVisit;
- (bool)hasExitedAllCategories:(id)arg1;
- (id)init;
- (id)initWithStream:(id)arg1;
- (id)queue;
- (id)scheduler;
- (void)setQueue:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSink:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setStreamAggregator:(id)arg1;
- (id)sink;
- (id)stream;
- (id)streamAggregator;
- (void)subscribeToPOIChangesForCategories:(id)arg1 observer:(id)arg2 enterSelector:(SEL)arg3 exitSelector:(SEL)arg4 sinkCompletion:(id /* block */)arg5;
- (void)unsubscribeToPOIChanges;

@end
