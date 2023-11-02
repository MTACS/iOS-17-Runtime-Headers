
@interface BPSBookmarkableEnumerator : NSEnumerator

- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)bpsPublisher;
- (id)nextObject;
- (void)reset;
- (id)validateBookmark:(id)arg1;

@end
