
@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor {
    NSMutableDictionary * _episodeObservers;
}

@property (nonatomic, retain) NSMutableDictionary *episodeObservers;

- (void).cxx_destruct;
- (void)addEpisodeObserverForPodcast:(id)arg1;
- (id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)entityName;
- (id)episodeObserverForPodcastUuid:(id)arg1;
- (id)episodeObservers;
- (id)episodePredicateForPodcast:(id)arg1;
- (id)episodeSortDescriptorsForPodcast:(id)arg1;
- (void)episodeUuidObserver:(id)arg1 resultsChangedForPodcast:(id)arg2 withDeletedIds:(id)arg3 andInsertIds:(id)arg4;
- (id)episodeUuids;
- (id)init;
- (id)podcastPredicate;
- (id)podcastUuids;
- (id)predicate;
- (void)removeEpisodeObserverForPodcast:(id)arg1;
- (void)removeEpisodeObserverForPodcasts:(id)arg1;
- (void)resultsChangedWithDeletedIds:(id)arg1 insertIds:(id)arg2 updatedIds:(id)arg3;
- (void)setEpisodeObservers:(id)arg1;
- (void)stop;
- (void)updateEpisodeObserverForPodcast:(id)arg1;
- (void)updateEpisodePredicatesWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 andUpdatedIds:(id)arg3;

@end
