
@interface MTRecencyUtil : NSObject

+ (double)_lastDatePlayedIfNotFutureDate:(double)arg1 podcast:(id)arg2;
+ (id)_nextEpisodeForUnplayedPodcast:(id)arg1 serial:(bool)arg2 filter:(id)arg3 ctx:(id)arg4;
+ (id)_upNextForPodcast:(id)arg1 serial:(bool)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4;
+ (id)_upNextResultForUnfollowedPodcast:(id)arg1 filter:(id)arg2 ctx:(id)arg3;
+ (id)_upNextResultForUnplayedFollowedPodcast:(id)arg1 nextEpisodeForUnplayedShow:(id)arg2 newestEpisodeWithShowBump:(id)arg3 mostRecentlyPlayed:(id)arg4 filter:(id)arg5 serial:(bool)arg6 ctx:(id)arg7;
+ (id)_upNextScoreWithLastModifiedDate:(double)arg1 lastDatePlayed:(double)arg2 filter:(id)arg3 podcast:(id)arg4 ctx:(id)arg5;
+ (id)caughtUpNextEpisodeForPodcast:(id)arg1 nextEpisodeForUnplayedShow:(id)arg2 mostRecentlyPlayedLastDatePlayed:(double)arg3 serial:(bool)arg4 filter:(id)arg5;
+ (id)episodesForListenNowWithContext:(id)arg1 limit:(long long)arg2;
+ (id)mostRecentlySavedUnplayedEpisodeForPodcast:(id)arg1 filter:(id)arg2 ctx:(id)arg3;
+ (id)nextEpisodeForPodcast:(id)arg1 mostRecentlyPlayed:(id)arg2 caughtUpNextEpisode:(id)arg3 serial:(bool)arg4 filter:(id)arg5;
+ (double)scoreFromModifiedDate:(double)arg1;
+ (void)setCombinedScoreOnScore:(id)arg1 total:(double)arg2;
+ (void)setModifiedDateValuesOnScore:(id)arg1 modifiedDate:(double)arg2 modifiedDateWeight:(double)arg3 total:(double)arg4;
+ (void)setPercentOfEpsFromShowPlayedValuesOnScore:(id)arg1 podcast:(id)arg2 ctx:(id)arg3 percentEpsFromShowPlayedWeight:(double)arg4 total:(double)arg5;
+ (void)setPercentOfTotalListeningValuesOnScore:(id)arg1 podcast:(id)arg2 ctx:(id)arg3 percentEpsTotalPlayedWeight:(double)arg4 total:(double)arg5;
+ (void)unsafeUpdateRelatedFieldsIfUpNextChangedForPodcast:(id)arg1 upNextResult:(id)arg2 ctx:(id)arg3;
+ (id)upNextForPodcastUuid:(id)arg1 ctx:(id)arg2;
+ (id)upNextForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3;

@end
