
@interface BPSMergeMany : BMBookmarkablePublisher {
    unsigned long long  _currentPublisher;
    NSArray * _publishers;
}

@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic, readonly) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (unsigned long long)currentPublisher;
- (id)init;
- (id)initWithPublishers:(id)arg1;
- (id)nextEvent;
- (id)publishers;
- (void)reset;
- (void)setCurrentPublisher:(unsigned long long)arg1;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
