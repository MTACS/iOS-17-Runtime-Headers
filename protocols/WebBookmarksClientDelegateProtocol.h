
@protocol WebBookmarksClientDelegateProtocol <NSObject>

@optional

- (void)bookmarksServerProxy:(SafariFetcherServerProxy *)arg1 didStartFetchingReadingListItem:(NSString *)arg2;
- (void)bookmarksServerProxy:(SafariFetcherServerProxy *)arg1 didStopFetchingReadingListItem:(NSString *)arg2;
- (void)bookmarksServerProxy:(SafariFetcherServerProxy *)arg1 didUpdateReadingListFetchingProgress:(double)arg2;
- (void)bookmarksServerProxyDidFinishFetching:(SafariFetcherServerProxy *)arg1;

@end
