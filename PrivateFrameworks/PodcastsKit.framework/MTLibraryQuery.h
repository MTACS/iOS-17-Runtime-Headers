
@interface MTLibraryQuery : NSObject {
    id /* block */  _action;
    bool  _active;
    NSPredicate * _channelPredicate;
    NSArray * _channelResults;
    NSArray * _channelSortDescriptors;
    NSPredicate * _episodePredicate;
    NSArray * _episodeResults;
    NSArray * _episodeSortDescriptors;
    long long  _fetchLimit;
    NSPredicate * _podcastPredicate;
    NSArray * _podcastResults;
    NSArray * _podcastSortDescriptors;
}

@property (nonatomic, copy) id /* block */ action;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSPredicate *channelPredicate;
@property (nonatomic, retain) NSArray *channelResults;
@property (nonatomic, retain) NSArray *channelSortDescriptors;
@property (nonatomic, retain) NSPredicate *episodePredicate;
@property (nonatomic, retain) NSArray *episodeResults;
@property (nonatomic, retain) NSArray *episodeSortDescriptors;
@property (nonatomic) long long fetchLimit;
@property (nonatomic, retain) NSPredicate *podcastPredicate;
@property (nonatomic, retain) NSArray *podcastResults;
@property (nonatomic, retain) NSArray *podcastSortDescriptors;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)channelPredicate;
- (id)channelResults;
- (id)channelSortDescriptors;
- (id)episodePredicate;
- (id)episodeResults;
- (id)episodeSortDescriptors;
- (long long)fetchLimit;
- (id)init;
- (bool)isActive;
- (id)podcastPredicate;
- (id)podcastResults;
- (id)podcastSortDescriptors;
- (void)runQuery;
- (void)runQueryInContext:(id)arg1;
- (void)runQueryWithPodcastPredicate:(id)arg1 episodePredicate:(id)arg2 channelPredicate:(id)arg3;
- (void)setAction:(id /* block */)arg1;
- (void)setActive:(bool)arg1;
- (void)setChannelPredicate:(id)arg1;
- (void)setChannelResults:(id)arg1;
- (void)setChannelSortDescriptors:(id)arg1;
- (void)setEpisodePredicate:(id)arg1;
- (void)setEpisodeResults:(id)arg1;
- (void)setEpisodeSortDescriptors:(id)arg1;
- (void)setFetchLimit:(long long)arg1;
- (void)setPodcastPredicate:(id)arg1;
- (void)setPodcastResults:(id)arg1;
- (void)setPodcastSortDescriptors:(id)arg1;

@end
