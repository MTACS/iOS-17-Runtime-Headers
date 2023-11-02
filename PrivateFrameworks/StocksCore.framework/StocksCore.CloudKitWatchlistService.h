
@interface StocksCore.CloudKitWatchlistService : _TtCs12_SwiftObject <SCWWatchlistObserver> {
    void lazyWatchlist;
    void metadataManager;
    void metadataProvider;
    void observers;
}

- (void)watchlistManager:(id)arg1 didChangeInWatchlist:(id)arg2;
- (void)watchlistManager:(id)arg1 didChangeInWatchlistOrder:(id)arg2;

@end
