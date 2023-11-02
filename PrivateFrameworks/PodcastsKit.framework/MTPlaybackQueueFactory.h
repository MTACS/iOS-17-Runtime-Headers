
@interface MTPlaybackQueueFactory : NSObject

+ (id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;
+ (bool)_isContinuousPlaybackEnabledForLimit:(long long)arg1;
+ (id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;
+ (id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(bool)arg2 excludeExplicit:(long long)arg3 latest:(bool)arg4 ctx:(id)arg5;
+ (id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;
+ (id)_uuidForEpisode:(id)arg1;

@end
