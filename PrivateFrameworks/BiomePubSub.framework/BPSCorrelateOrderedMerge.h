
@interface BPSCorrelateOrderedMerge : BMBookmarkablePublisher {
    id /* block */  _comparator;
    NSArray * _publishers;
}

@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, readonly) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id /* block */)comparator;
- (id)init;
- (id)initWithA:(id)arg1 b:(id)arg2 comparator:(id /* block */)arg3;
- (id)initWithPublishers:(id)arg1 comparator:(id /* block */)arg2;
- (id)publishers;
- (void)setComparator:(id /* block */)arg1;
- (void)subscribe:(id)arg1;

@end
