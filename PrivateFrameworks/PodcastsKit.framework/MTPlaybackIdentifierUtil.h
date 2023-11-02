
@interface MTPlaybackIdentifierUtil : MTSingleton <MTPlaybackIdentifierComposing>

+ (id)__queryStringToQueryDictionary:(id)arg1;
+ (id)__stringByRemovingPercentEscapes:(id)arg1;
+ (id)__stringWithPercentEscape:(id)arg1;

- (long long)_episodeContextFromString:(id)arg1;
- (long long)_episodeContextSortFromString:(id)arg1;
- (long long)_episodeOrderFromString:(id)arg1;
- (unsigned long long)_playQueueTypeForRequestURL:(id)arg1;
- (unsigned long long)_playReasonFromString:(id)arg1;
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryComponents:(id)arg2;
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryKey:(id)arg2 value:(id)arg3;
- (id)_universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8 sampPlaybackOrder:(id)arg9;
- (id)episodeUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;
- (bool)isLocalSetPlaybackQueueURLString:(id)arg1;
- (bool)isSubscribeCommandURLString:(id)arg1;
- (bool)isUniversalPlaybackIdentifierURLString:(id)arg1;
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3;
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2;
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1;
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2;
- (id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1;
- (id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1;
- (id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2;
- (id)playbackQueueIdentifierForSubscribeToPodcast:(id)arg1;
- (id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)playbackQueueWithAccountInfoForIdentifiers:(id)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)playbackQueueWithDsid:(id)arg1 forIdentifiers:(id)arg2;
- (id)playbackRequestURLWithDSID:(id)arg1 baseRequestURLString:(id)arg2;
- (id)playbackRequestURLWithPlayReason:(unsigned long long)arg1 baseRequestURLString:(id)arg2;
- (id)podcastUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;
- (id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(id)arg5;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 sampPlaybackOrder:(id)arg7;
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 sampPlaybackOrder:(id)arg4;
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(id)arg4;
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(id)arg5;

@end
