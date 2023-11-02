
@interface PodcastsFoundation.FeedManagerLocalConfiguration : NSObject {
    void _supportsBatchInsertion;
    void _workQueueConcurrent;
    void concurrentBootstrapUpdateLimit;
    void concurrentDeltaUpdateLimit;
    void concurrentRSSUpdateLimit;
    void deltaNumberOfEpisodesToRequestPerPage;
    void keepsFeedFileInTempDirAfterDownload;
    void timeoutIntervalForResource;
    void useBackgroundFetchForFeedDownloads;
    void usesCleanEpisodeTitles;
}

@property (nonatomic, readonly) long long concurrentBootstrapUpdateLimit;
@property (nonatomic, readonly) long long concurrentDeltaUpdateLimit;
@property (nonatomic, readonly) long long concurrentRSSUpdateLimit;
@property (nonatomic, readonly) bool keepsFeedFileInTempDirAfterDownload;
@property (nonatomic, readonly) bool supportsBatchInsertion;
@property (nonatomic, readonly) double timeoutIntervalForResource;
@property (nonatomic, readonly) bool useBackgroundFetchForFeedDownloads;
@property (nonatomic, readonly) bool usesCleanEpisodeTitles;
@property (nonatomic, readonly) bool workQueueConcurrent;

+ (id)platformSpecificConfiguration;

- (void).cxx_destruct;
- (long long)concurrentBootstrapUpdateLimit;
- (long long)concurrentDeltaUpdateLimit;
- (long long)concurrentRSSUpdateLimit;
- (id)init;
- (bool)keepsFeedFileInTempDirAfterDownload;
- (bool)supportsBatchInsertion;
- (double)timeoutIntervalForResource;
- (bool)useBackgroundFetchForFeedDownloads;
- (bool)usesCleanEpisodeTitles;
- (bool)workQueueConcurrent;

@end
