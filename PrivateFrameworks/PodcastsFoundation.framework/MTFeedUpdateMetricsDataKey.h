
@interface MTFeedUpdateMetricsDataKey : NSObject

+ (id)actionType;
+ (id)backgroundFetch;
+ (id)backgroundTask;
+ (id)carouselTaskUserString;
+ (id)deletedEpisodeCount;
+ (id)detectedSyncLoop;
+ (id)episodeCount;
+ (id)error;
+ (id)eventId;
+ (id)fetchInterval;
+ (id)foreground;
+ (id)hasPendingCarouselTask;
+ (id)needsBootstrap;
+ (id)newEpisodeCount;
+ (id)notificationEpisodesCount;
+ (id)notificationType;
+ (id)pageCount;
+ (id)pcrFallback;
+ (id)podcastCount;
+ (id)podcastStoreId;
+ (id)podcastUuid;
+ (id)source;
+ (id)statusCode;
+ (id)totalEpisodeCount;
+ (id)uniquePodcastUuidCount;
+ (id)updatedEpisodeCount;
+ (id)updaterType;
+ (id)userInitiated;

- (void).cxx_destruct;
- (id)init;

@end
