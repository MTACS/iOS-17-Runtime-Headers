
@protocol MTEpisodeSyncProcessorStorageProviding

@required

- (NSString *)feedUrlFromModernKey:(NSString *)arg1;
- (MTManagedObjectContext *)importContext;
- (NSString *)modernKeyFromFeedUrl:(NSString *)arg1;
- (NSString *)podcastsDomainVersion;
- (void)resetVersionForAllFeedUrls;
- (void)resetVersionForFeedUrl:(NSString *)arg1;
- (void)setPodcastsDomainVersion:(NSString *)arg1;
- (void)setVersion:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)versionForKey:(NSString *)arg1;

@end
