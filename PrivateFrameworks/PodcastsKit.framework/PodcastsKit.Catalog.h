
@interface PodcastsKit.Catalog : NSObject <PKCatalog>

- (void)fetchEpisodesWithStoreIds:(id)arg1 resultsHandler:(id /* block */)arg2;
- (void)fetchShowsWithStoreIds:(id)arg1 resultsHandler:(id /* block */)arg2;
- (id)init;

@end
