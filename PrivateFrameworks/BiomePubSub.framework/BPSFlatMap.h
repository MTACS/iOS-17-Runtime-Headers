
@interface BPSFlatMap : BMBookmarkablePublisher {
    id  _currentEvent;
    <BPSPublisher> * _currentPublisher;
    long long  _maxPublishers;
    <BPSSubscriber> * _subscriber;
    id /* block */  _transform;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, retain) id currentEvent;
@property (nonatomic, retain) <BPSPublisher> *currentPublisher;
@property (nonatomic, readonly) long long maxPublishers;
@property (nonatomic, retain) <BPSSubscriber> *subscriber;
@property (nonatomic, readonly) id /* block */ transform;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)completed;
- (id)currentEvent;
- (id)currentPublisher;
- (id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(id /* block */)arg3;
- (long long)maxPublishers;
- (id)nextEvent;
- (void)reset;
- (void)setCurrentEvent:(id)arg1;
- (void)setCurrentPublisher:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)subscriber;
- (id /* block */)transform;
- (id)upstream;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
