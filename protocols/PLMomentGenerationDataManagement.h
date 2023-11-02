
@protocol PLMomentGenerationDataManagement <NSObject>

@required

+ (NSArray *)processingMomentsFromMoments:(NSArray *)arg1;

- (NSArray *)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1;
- (NSArray *)allAssetsToBeIncludedInMomentsWithError:(id*)arg1;
- (NSArray *)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
- (NSArray *)allInvalidAssetsWithError:(id*)arg1;
- (NSArray *)allInvalidMomentsWithError:(id*)arg1;
- (NSArray *)allInvalidPhotosHighlightsOfAllKindsWithError:(id*)arg1;
- (NSArray *)allMomentIDsWithError:(id*)arg1;
- (NSArray *)allMomentsWithError:(id*)arg1;
- (NSArray *)allPhotosHighlightsOfAllKindsWithError:(id*)arg1;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(NSPredicate *)arg2 error:(id*)arg3;
- (NSArray *)allPhotosHighlightsWithPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (<PLMomentAssetData> *)assetWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id*)arg2;
- (NSArray *)assetsWithUniqueIDs:(NSArray *)arg1 error:(id*)arg2;
- (bool)cameraIsActive;
- (bool)deleteAllHighlightsWithError:(id*)arg1;
- (bool)deleteAllMomentsWithError:(id*)arg1;
- (NSSet *)deletedObjects;
- (void)fetchLocationsOfInterestIfNeeded;
- (NSDictionary *)generationOptions;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (bool)hasChanges;
- (NSArray *)highlightsIntersectingDateInterval:(NSDateInterval *)arg1 ofKind:(unsigned short)arg2;
- (NSDictionary *)homeAddressDictionary;
- (<PLMomentData> *)insertNewMoment;
- (<PLPhotosHighlightData> *)insertNewPhotosHighlight;
- (NSSet *)insertedObjects;
- (void)invalidateAllHighlightSubtitles;
- (bool)isLightweightMigrationManager;
- (NSObject<OS_dispatch_queue> *)isolationQueue;
- (PLLocationOfInterestVisit *)lastLocationOfInterestVisit;
- (NSSet *)locationsOfInterest;
- (void)logRoutineInformation;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (<PLMomentData> *)momentWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id*)arg2;
- (NSArray *)momentsBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 sorted:(bool)arg3 excludeExternal:(bool)arg4;
- (NSArray *)momentsForAssetsWithUniqueIDs:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)momentsIntersectingDateInterval:(NSDateInterval *)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenCoreRoutineIsAvailable:(id*)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenFrequentLocationsAreAvailable:(id*)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id*)arg1;
- (NSArray *)momentsWithUniqueIDs:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)orphanedAssetIDsWithError:(id*)arg1;
- (void)performBlock:(void *)arg1 synchronously:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, id /* block */, void*, void, id /* block */, void*
- (void)performBlock:(void *)arg1 synchronously:(void *)arg2 priority:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, long long, id /* block */, void*, void, id /* block */, void*
- (void)performDataTransaction:(void *)arg1 synchronously:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, id /* block */, void*, void, id /* block */, void*
- (void)performDataTransaction:(void *)arg1 synchronously:(void *)arg2 priority:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, long long, id /* block */, void*, void, id /* block */, void*
- (long long)previousValidatedModelVersion;
- (bool)previousValidationSucceeded;
- (void)refreshAllObjects;
- (NSString *)replayLogPath;
- (void)resetOnFailure;
- (bool)routineIsAvailable;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(PLXPCTransaction *)arg2;
- (bool)save:(id*)arg1;
- (void)setPreviousValidatedModelVersion:(long long)arg1;
- (void)setPreviousValidationSucceeded:(bool)arg1;
- (void)setShouldPerformLightweightValidation:(bool)arg1;
- (bool)shouldPerformLightweightValidation;
- (NSSet *)updatedObjects;
- (bool)wantsMomentReplayLogging;

@end
