
@interface MTEpisodeLookupUtil : NSObject

+ (id)_entityForFetchRequest:(id)arg1;
+ (id)_entityForFetchRequest:(id)arg1 context:(id)arg2;
+ (id)_episodeMatchFromPredicate:(id)arg1;
+ (id)_episodeMatchFromPredicate:(id)arg1 context:(id)arg2;
+ (id)_podcastMatchFromPredicate:(id)arg1;
+ (id)_podcastMatchFromPredicate:(id)arg1 context:(id)arg2;
+ (id)findEpisodeFromModelObject:(id)arg1;
+ (id)findEpisodeWithRequest:(id)arg1;
+ (id)findEpisodeWithRequest:(id)arg1 context:(id)arg2;
+ (id)findPodcastWithFeedUrl:(id)arg1;

@end
