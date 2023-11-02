
@interface BPSMap : BMBookmarkablePublisher {
    id /* block */  _transform;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, copy) id /* block */ transform;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)init;
- (id)initWithUpstream:(id)arg1 transform:(id /* block */)arg2;
- (id)nextEvent;
- (void)setTransform:(id /* block */)arg1;
- (void)subscribe:(id)arg1;
- (id /* block */)transform;
- (id)upstream;
- (id)upstreamPublishers;

@end
