
@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (void)cancel;
- (id)newBookmark;
- (void)requestDemand:(long long)arg1;
- (id)upstreamSubscriptions;

@end
