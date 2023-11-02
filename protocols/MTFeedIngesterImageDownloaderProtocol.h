
@protocol MTFeedIngesterImageDownloaderProtocol

@required

- (void)downloadImageForPodcastUuid:(NSString *)arg1 urlOptions:(_TtC18PodcastsFoundation22DownloadableURLOptions *)arg2 userInitiated:(bool)arg3 useBackgroundFetch:(bool)arg4;
- (void)downloadImageUrl:(_TtC18PodcastsFoundation22DownloadableURLOptions *)arg1 cacheKey:(NSString *)arg2 userInitiated:(bool)arg3 backgroundFetch:(bool)arg4;

@end
