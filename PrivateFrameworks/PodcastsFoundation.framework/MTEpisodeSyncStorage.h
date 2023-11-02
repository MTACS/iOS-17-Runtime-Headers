
@interface MTEpisodeSyncStorage : NSObject <MTEpisodeSyncProcessorStorageProviding>

@property (nonatomic, retain) NSString *podcastsDomainVersion;

- (id)feedUrlFromModernKey:(id)arg1;
- (id)importContext;
- (id)modernKeyFromFeedUrl:(id)arg1;
- (id)podcastsDomainVersion;
- (void)resetVersionForAllFeedUrls;
- (void)resetVersionForFeedUrl:(id)arg1;
- (void)setPodcastsDomainVersion:(id)arg1;
- (void)setVersion:(id)arg1 forKey:(id)arg2;
- (id)versionForKey:(id)arg1;

@end
