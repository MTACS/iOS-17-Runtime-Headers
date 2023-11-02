
@protocol BMBookmarkablePublisher <BPSPublisher>

@required

+ (NSArray *)bookmarkablePublishersFromPublishers:(NSArray *)arg1;
+ (bool)isPipelineBookmarkable:(BPSPublisher *)arg1;
+ (BPSPublisher<BMBookmarkablePublisher> *)publisherWithPublisher:(BPSPublisher<BMBookmarkablePublisher> *)arg1 upstreams:(NSArray *)arg2 bookmarkState:(id <BMBookmark>)arg3;

- (void)applyBookmark:(id <BMBookmark>)arg1;
- (void)applyBookmarkNode:(BMBookmarkNode *)arg1;
- (<BMBookmark> *)bookmark;
- (BMBookmarkNode *)bookmarkNode;
- (NSArray *)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (NSError *)validateBookmark:(id <BMBookmark>)arg1;
- (NSError *)validateBookmarkNode:(BMBookmarkNode *)arg1;
- (BPSPublisher<BMBookmarkablePublisher> *)withBookmark:(id <BMBookmark>)arg1;

@end
