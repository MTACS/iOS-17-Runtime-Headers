
@interface FCPuzzleHistory : FCPrivateDataController {
    FCCloudContext * _cloudContext;
    NSMutableDictionary * _itemsByPuzzleID;
    FCMTWriterLock * _itemsLock;
}

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1 privateDataDirectory:(id)arg2;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addPuzzleToPuzzleHistory:(id)arg1 puzzleTypeID:(id)arg2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (id)allSortedPuzzleIDsSinceLastPlayedDate:(id)arg1;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)datePuzzleWasLastPlayed:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (bool)hasPuzzleBeenCompleted:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (bool)isPuzzleHistoryEmpty;
- (bool)isPuzzleInPuzzleHistory:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)puzzleHistoryItemForPuzzleID:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removePuzzleFromPuzzleHistory:(id)arg1;
- (id)sortedPuzzleIDsForPuzzleTypeID:(id)arg1 sinceLastPlayedDate:(id)arg2;
- (void)updatePuzzle:(id)arg1 progressData:(id)arg2 progressLevel:(long long)arg3 playDuration:(long long)arg4 isSolved:(bool)arg5;

@end
