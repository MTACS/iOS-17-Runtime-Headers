
@interface BPSOrderedMerge : BMBookmarkablePublisher {
    id /* block */  _comparator;
    BMIndirectHeap * _heap;
    id  _mostRecentEvent;
    NSArray * _publishers;
    NSMutableArray * _upstreamStates;
}

@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, retain) BMIndirectHeap *heap;
@property (retain) id mostRecentEvent;
@property (nonatomic, readonly) NSArray *publishers;
@property (nonatomic, retain) NSMutableArray *upstreamStates;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id /* block */)comparator;
- (id)heap;
- (id)init;
- (id)initWithA:(id)arg1 b:(id)arg2 comparator:(id /* block */)arg3;
- (id)initWithPublishers:(id)arg1 comparator:(id /* block */)arg2;
- (bool)isOrderedSameForEvents:(id)arg1 second:(id)arg2;
- (id)mostRecentEvent;
- (id)nextEvent;
- (id)publishers;
- (void)reset;
- (void)setComparator:(id /* block */)arg1;
- (void)setHeap:(id)arg1;
- (void)setMostRecentEvent:(id)arg1;
- (void)setUpstreamStates:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;
- (id)upstreamStates;
- (id)validateBookmark:(id)arg1;

@end
