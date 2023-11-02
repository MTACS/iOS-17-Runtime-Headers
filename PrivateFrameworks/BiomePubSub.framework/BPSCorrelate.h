
@interface BPSCorrelate : BMBookmarkablePublisher {
    BPSCorrelateHandler * _correlateHandler;
    <BPSPublisher> * _current;
    BPSCorrelateOrderedMerge * _merger;
    <BPSPublisher> * _prior;
}

@property (nonatomic, readonly) BPSCorrelateHandler *correlateHandler;
@property (nonatomic, readonly) <BPSPublisher> *current;
@property (nonatomic, readonly) <BPSPublisher> *prior;

+ (id)correlatePublisherChainWithPrior:(id)arg1 current:(id)arg2 comparator:(id /* block */)arg3 correlateHandler:(id)arg4;
+ (long long)correlateSourceForIndex:(long long)arg1;
+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)correlateHandler;
- (id)current;
- (id)init;
- (id)initWithPrior:(id)arg1 current:(id)arg2 comparator:(id /* block */)arg3 correlateHandler:(id)arg4;
- (id)initWithPrior:(id)arg1 current:(id)arg2 comparator:(id /* block */)arg3 updatedInitialContext:(id)arg4 correlateHandler:(id)arg5;
- (id)prior;
- (void)subscribe:(id)arg1;

@end
