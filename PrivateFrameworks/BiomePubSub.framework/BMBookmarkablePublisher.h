
@interface BMBookmarkablePublisher : BPSPublisher <BMBookmarkablePublisher>

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bookmarkablePublishersFromPublishers:(id)arg1;
+ (bool)isPipelineBookmarkable:(id)arg1;
+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void)applyBookmark:(id)arg1;
- (void)applyBookmarkNode:(id)arg1;
- (id)bookmark;
- (id)bookmarkNode;
- (id)bookmarkableUpstreams;
- (id)bufferWithSize:(unsigned long long)arg1 prefetch:(unsigned long long)arg2 whenFull:(unsigned long long)arg3;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)collect;
- (id)correlateWithCurrent:(id)arg1 comparator:(id /* block */)arg2 correlateHandler:(id)arg3;
- (id)filterWithIsIncluded:(id /* block */)arg1;
- (id)flatMapWithTransform:(id /* block */)arg1;
- (id)groupByKey:(id /* block */)arg1;
- (id)last;
- (id)mapWithTransform:(id /* block */)arg1;
- (id)mergeWithOther:(id)arg1;
- (id)mergeWithOthers:(id)arg1;
- (id)multicast;
- (id)multicastCreateSubject:(id /* block */)arg1;
- (id)multicastSubject:(id)arg1;
- (id)orderedMergeWithOther:(id)arg1 comparator:(id /* block */)arg2;
- (id)orderedMergeWithOthers:(id)arg1 comparator:(id /* block */)arg2;
- (id)reduce:(id)arg1;
- (id)reduceWithInitial:(id)arg1 nextPartialResult:(id /* block */)arg2;
- (id)scanWithInitial:(id)arg1 nextPartialResult:(id /* block */)arg2;
- (void)subscribe:(id)arg1;
- (id)validateBookmark:(id)arg1;
- (id)validateBookmarkNode:(id)arg1;
- (id)withBookmark:(id)arg1;

@end
