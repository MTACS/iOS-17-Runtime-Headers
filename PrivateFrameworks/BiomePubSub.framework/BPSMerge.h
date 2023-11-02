
@interface BPSMerge : BMBookmarkablePublisher {
    <BPSPublisher> * _a;
    <BPSPublisher> * _b;
    bool  _nextIsB;
}

@property (nonatomic, readonly) <BPSPublisher> *a;
@property (nonatomic, readonly) <BPSPublisher> *b;
@property (nonatomic) bool nextIsB;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)a;
- (void)applyBookmark:(id)arg1;
- (id)b;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)init;
- (id)initWithA:(id)arg1 b:(id)arg2;
- (id)nextEvent;
- (bool)nextIsB;
- (void)reset;
- (void)setNextIsB:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
