
@protocol SCWWatchlistObserver

@required

- (void)watchlistManager:(SCWWatchlistManager *)arg1 didChangeInWatchlist:(NSDictionary *)arg2;
- (void)watchlistManager:(SCWWatchlistManager *)arg1 didChangeInWatchlistOrder:(SCWWatchlistOrderDiff *)arg2;

@end
