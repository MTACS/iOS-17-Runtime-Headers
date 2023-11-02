
@interface PXFeedSectionInfosManager : NSObject <PLAssetChangeObserver, PLCloudCommentsChangeObserver, PLCloudFeedEntriesObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager> {
    <PXFeedSectionInfosManagerDelegate> * _delegate;
    NSDate * _earliestDate;
    long long  _entryFilter;
    unsigned long long  _fetchLimit;
    NSMutableArray * _pendingAssetsChangeNotifications;
    NSMutableArray * _pendingCommentsChangeNotifications;
    NSMutableArray * _pendingFeedEntriesChangeNotifications;
    PLPhotoLibrary * _photoLibrary;
    NSMutableArray * _sectionInfos;
    NSMutableDictionary * _sectionInfosByCloudFeedEntry;
}

@property (nonatomic) <PXFeedSectionInfosManagerDelegate> *delegate;
@property (nonatomic, retain) NSDate *earliestDate;
@property (nonatomic) long long entryFilter;
@property (nonatomic) unsigned long long fetchLimit;

+ (id)mostRecentCreationDate;

- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_getEarliestDate:(out id*)arg1 mostRecentEntries:(out id*)arg2 forBatchWithLatestDate:(id)arg3;
- (void)_rebuildSectionInfos;
- (id /* block */)_sectionInfoSortingComparator;
- (bool)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;
- (void)assetsDidChange:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)earliestDate;
- (long long)entryFilter;
- (unsigned long long)fetchLimit;
- (bool)hasEnoughCloudFeedAssetEntriesToDisplay;
- (long long)indexOfSectionInfo:(id)arg1;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 configurationBlock:(id /* block */)arg2;
- (id)initWithPhotoLibraryForTesting:(id)arg1 filter:(long long)arg2;
- (void)loadSectionInfosAtIndexes:(id)arg1;
- (long long)numberOfInvitationsReceived;
- (long long)numberOfSectionInfos;
- (void)reconfigure:(id /* block */)arg1;
- (bool)reconfigureToIncludeCloudFeedEntry:(id)arg1;
- (id)sectionInfoAtIndex:(long long)arg1;
- (id)sectionInfoWithIdentifier:(id)arg1;
- (id)sectionInfosAtIndexes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEarliestDate:(id)arg1;
- (void)setEntryFilter:(long long)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)shouldReload:(id)arg1;

@end
