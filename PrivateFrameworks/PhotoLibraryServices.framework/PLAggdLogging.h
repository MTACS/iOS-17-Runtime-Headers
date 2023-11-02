
@interface PLAggdLogging : NSObject

+ (void)_addDistributionStatisticsOfValues:(id)arg1 withPrefix:(id)arg2 toDictionary:(id)arg3 formatter:(id /* block */)arg4;
+ (void)_addFileSystemStatsToLibrarySummaryEvent:(id)arg1 withLibraryPathManager:(id)arg2;
+ (void)_addLibrarySummaryDataToCollectionIfPresent:(id)arg1 fromCPLEventData:(id)arg2 forKey:(id)arg3;
+ (void)_addOrphanedSceneClassificationsCountToLibrarySummaryEvent:(id)arg1 withContext:(id)arg2;
+ (void)_addPersistentHistoryStatsToLibrarySummaryEvent:(id)arg1 withLibraryPathManager:(id)arg2;
+ (void)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2 inPrefixedDictionary:(id)arg3;
+ (id)_analyticsDescriptionForAssetCount:(long long)arg1;
+ (id)_analyticsDescriptionForMediaAge:(double)arg1;
+ (void)_configureEnumeratorForLibrarySummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(bool)arg2 dataForCA:(id)arg3;
+ (void)_configureEnumeratorForSyndicationLibrarySummaryLogging:(id)arg1 dataForCA:(id)arg2;
+ (id)_fetchPersistentHistoryStatsWithLibraryPathManager:(id)arg1;
+ (void)configureEnumeratorForHyperionLocalResourcesLogging:(id)arg1 cloudPhotoLibraryEnabled:(bool)arg2 dataForCA:(id)arg3 dataForCK:(id)arg4;
+ (void)configureEnumeratorForLibrarySizeLogging:(id)arg1 cloudPhotoLibraryEnabled:(bool)arg2 dataForCA:(id)arg3 dataForCK:(id)arg4;
+ (void)configureEnumeratorForLibrarySummaryForLibraryEnumerator:(id)arg1 withSyndicationLibraryEnumerator:(id)arg2 cloudPhotoLibraryEnabled:(bool)arg3 dataForCA:(id)arg4;
+ (void)performCMMSummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(bool)arg2;
+ (void)performLibraryStatisticsLoggingForLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)performMomentsStatisticsLogging:(id)arg1;
+ (void)performSlideshowProjectStatisticsLogging:(id)arg1;

@end
