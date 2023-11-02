
@interface BPSFilter : BMBookmarkablePublisher {
    id /* block */  _isIncluded;
    BPSPublisher * _upstream;
}

@property (nonatomic, readonly) id /* block */ isIncluded;
@property (nonatomic, retain) BPSPublisher *upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)init;
- (id)initWithUpstream:(id)arg1 isIncluded:(id /* block */)arg2;
- (id /* block */)isIncluded;
- (id)nextEvent;
- (void)setUpstream:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end
