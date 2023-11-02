
@interface BMKnowledgeContextPublisher : BPSPublisher <BMLiveEventsPublisher> {
    BPSPublisher * _combinedPublisher;
    <_CDUserContext> * _context;
    bool  _includeLiveEvents;
    _DKEventQuery * _query;
    <_DKKnowledgeQuerying> * _store;
}

@property (nonatomic, retain) BPSPublisher *combinedPublisher;
@property (nonatomic, retain) <_CDUserContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeLiveEvents;
@property (nonatomic, retain) _DKEventQuery *query;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_combinedPublisher;
- (id)combinedPublisher;
- (bool)completed;
- (id)context;
- (bool)includeLiveEvents;
- (id)initWithQuery:(id)arg1 store:(id)arg2 context:(id)arg3 includeLiveEvents:(bool)arg4;
- (id)nextEvent;
- (id)query;
- (void)reset;
- (void)setCombinedPublisher:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setIncludeLiveEvents:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setStore:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (id)store;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;
- (id)withLiveEvents;

@end
