
@protocol MTPlaybackIdentifierComposing

@required

- (NSString *)localPlaybackQueueIdentifierForPodcastUuid:(NSString *)arg1 episodeUuid:(NSString *)arg2 sampPlaybackOrder:(NSString *)arg3;
- (NSString *)localPlaybackQueueIdentifierForPodcastUuid:(NSString *)arg1 sampPlaybackOrder:(NSString *)arg2;
- (NSString *)localPlaybackQueueIdentifierForStationUuid:(NSString *)arg1;
- (NSString *)localPlaybackQueueIdentifierForStationUuid:(NSString *)arg1 episodeUuid:(NSString *)arg2;
- (NSString *)playbackQueueIdentifierForEpisodeAdamId:(NSString *)arg1;
- (NSString *)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(NSString *)arg1;
- (NSString *)playbackQueueIdentifierForPodcastAdamId:(NSString *)arg1 sampPlaybackOrder:(NSString *)arg2;
- (NSString *)playbackQueueIdentifierForSubscribeToPodcast:(NSString *)arg1;
- (NSString *)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(NSString *)arg1;
- (NSString *)universalPlaybackQueueIdentifierForPodcastFeedUrl:(NSString *)arg1 podcastStoreId:(long long)arg2 episodeGuid:(NSString *)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(NSString *)arg5;
- (NSString *)universalPlaybackQueueIdentifierForPodcastUuid:(NSString *)arg1 podcastFeedUrl:(NSString *)arg2 podcastStoreId:(long long)arg3;
- (NSString *)universalPlaybackQueueIdentifierForPodcastUuid:(NSString *)arg1 podcastFeedUrl:(NSString *)arg2 podcastStoreId:(long long)arg3 episodeUuid:(NSString *)arg4 episodeGuid:(NSString *)arg5 episodeStoreId:(long long)arg6 sampPlaybackOrder:(NSString *)arg7;
- (NSString *)universalPlaybackQueueIdentifierForPodcastUuid:(NSString *)arg1 podcastFeedUrl:(NSString *)arg2 podcastStoreId:(long long)arg3 sampPlaybackOrder:(NSString *)arg4;
- (NSString *)universalPlaybackQueueIdentifierForStationUuid:(NSString *)arg1 episodeGuid:(NSString *)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(NSString *)arg4;
- (NSString *)universalPlaybackQueueIdentifierForStationUuid:(NSString *)arg1 episodeUuid:(NSString *)arg2 episodeGuid:(NSString *)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(NSString *)arg5;

@end
