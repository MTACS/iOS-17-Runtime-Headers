
@interface BPSCollect : BMBookmarkablePublisher {
    NSMutableArray * _results;
    bool  _returned;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic) bool returned;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)completed;
- (id)initWithUpstream:(id)arg1;
- (id)nextEvent;
- (void)reset;
- (id)results;
- (bool)returned;
- (void)setResults:(id)arg1;
- (void)setReturned:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
