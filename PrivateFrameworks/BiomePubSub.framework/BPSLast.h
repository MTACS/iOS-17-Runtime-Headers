
@interface BPSLast : BMBookmarkablePublisher {
    id  _lastEvent;
    bool  _returned;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, retain) id lastEvent;
@property (nonatomic) bool returned;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (id)init;
- (id)initWithUpstream:(id)arg1;
- (id)lastEvent;
- (id)nextEvent;
- (void)reset;
- (bool)returned;
- (void)setLastEvent:(id)arg1;
- (void)setReturned:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end
