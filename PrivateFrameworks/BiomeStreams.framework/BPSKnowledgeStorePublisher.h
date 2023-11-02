
@interface BPSKnowledgeStorePublisher : BPSPublisher {
    _DKEventQuery * _query;
    long long  _remaining;
    NSMutableArray * _results;
    <_DKKnowledgeQuerying> * _store;
}

@property (nonatomic, readonly) _DKEventQuery *query;
@property (nonatomic) long long remaining;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *store;

+ (id)new;

- (void).cxx_destruct;
- (id)_updateCachedQueryResults;
- (bool)completed;
- (id)init;
- (id)initWithEventQuery:(id)arg1 knowledgeStore:(id)arg2;
- (id)nextEvent;
- (id)query;
- (long long)remaining;
- (void)reset;
- (id)results;
- (void)setRemaining:(long long)arg1;
- (void)setResults:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (id)store;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;

@end
