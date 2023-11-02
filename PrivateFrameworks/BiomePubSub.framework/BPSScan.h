
@interface BPSScan : BMBookmarkablePublisher {
    id  _initialResult;
    id /* block */  _nextPartialResult;
    id  _result;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) id initialResult;
@property (nonatomic, readonly, copy) id /* block */ nextPartialResult;
@property (nonatomic, retain) id result;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)initWithUpstream:(id)arg1 initialResult:(id)arg2 nextPartialResult:(id /* block */)arg3;
- (id)initialResult;
- (id)nextEvent;
- (id /* block */)nextPartialResult;
- (void)reset;
- (id)result;
- (void)setResult:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end
