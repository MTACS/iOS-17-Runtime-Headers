
@interface FCPuzzleTypeSettings : NSObject {
    <FCPuzzleTypeSettingsDelegate> * _delegate;
    NSMutableDictionary * _entriesByPuzzleTypeID;
    FCMTWriterLock * _entriesLock;
    FCKeyValueStore * _localStore;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;

- (void).cxx_destruct;
- (id)allPuzzleTypeSettingsRecordNames;
- (id)allPuzzleTypeSettingsRecords;
- (void)handleSyncWithDeletedPuzzleTypeSettingsRecordName:(id)arg1;
- (void)handleSyncWithPuzzleTypeSettingsRecord:(id)arg1;
- (id)initWithStore:(id)arg1 delegate:(id)arg2;
- (id)lastSeenPuzzleIDsForPuzzleTypeID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)setLastSeenPuzzleIDs:(id)arg1 puzzleTypeID:(id)arg2;
- (void)setSettingsData:(id)arg1 puzzleTypeID:(id)arg2;
- (id)settingsDataForPuzzleTypeID:(id)arg1;
- (void)syncForPuzzleTypeID:(id)arg1;

@end
