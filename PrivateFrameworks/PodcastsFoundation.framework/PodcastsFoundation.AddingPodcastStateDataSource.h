
@interface PodcastsFoundation.AddingPodcastStateDataSource : NSObject {
    void currentlyAddingShows;
    void delegate;
    void lock;
    void refreshQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateAddingShowsWithStoreCollectionIds:(id)arg1;

@end
