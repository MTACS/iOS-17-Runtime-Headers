
@interface NMSPodcastsFetchRequests : NSObject

+ (id)_createFetchRequestForEpisodeDownloadableItem;
+ (id)_predicateForDownloadableWatchEpisodesWithDownloadedOnly:(bool)arg1 unplayedOnly:(bool)arg2;
+ (id)fetchRequestForFeedURL:(id)arg1 downloadSettings:(id)arg2 downloadedOnly:(bool)arg3 ctx:(id)arg4;
+ (id)fetchRequestForSavedEpisodesDownloadSettings:(id)arg1 downloadedOnly:(bool)arg2;
+ (id)fetchRequestForStationUUID:(id)arg1 downloadSettings:(id)arg2 downloadedOnly:(bool)arg3;
+ (id)fetchRequestForUpNextDownloadSettings:(id)arg1 downloadedOnly:(bool)arg2;
+ (id)legacy_fetchRequestForEpisodesWithFeedURL:(id)arg1 downloadedOnly:(bool)arg2 ctx:(id)arg3;
+ (id)legacy_fetchRequestForSavedEpisodesDownloadedOnly:(bool)arg1;
+ (id)legacy_fetchRequestForStationWithUUID:(id)arg1;
+ (id)legacy_fetchRequestForUpNextEpisodesDownloadedOnly:(bool)arg1;

@end
