
@interface AXSSPunctuationManager : AXSSDatabaseManager {
    bool  _cloudKitPushInSameProcess;
    bool  _cloudKitSync;
    bool  _finishedInitialization;
    AXSSPunctuationEntryCloudKitHelper * _punctuationEntryCloudKitHelper;
    AXSSPunctuationGroupCloudKitHelper * _punctuationGroupCloudKitHelper;
}

@property (nonatomic) bool cloudKitPushInSameProcess;
@property (nonatomic) bool cloudKitSync;
@property (nonatomic, readonly) NSArray *punctuationGroups;

+ (void)initialize;
+ (id)overrideDatabasePath;
+ (void)setOverrideDatabasePath:(id)arg1;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (void)_cloudKitUpdated:(id)arg1;
- (id)_databaseDirectoryPath;
- (id)_databaseFilePath;
- (void)_filterAutoswitchContexts:(id)arg1 punctuationGroupsForContexts:(id)arg2;
- (void)_initializeCloudKitHelpers;
- (void)_initializeDatabaseStartup;
- (void)_initializeSystemGroups;
- (void)_managedObjectChanged:(id)arg1;
- (id)_punctuationEntryFromManagedObject:(id)arg1;
- (id)_punctuationGroupForEntry:(id)arg1;
- (id)_punctuationGroupFromManagedObject:(id)arg1;
- (bool)_saveIfPossible;
- (void)_setupDatabase;
- (void)_updateCloudKitHelpers;
- (void)addCloudRecordToPurge:(id)arg1 recordEntityType:(id)arg2;
- (id)allPunctuationGroup;
- (bool)cloudKitPushInSameProcess;
- (bool)cloudKitSync;
- (id)cloudRecordsToPurge:(id)arg1;
- (void)importPunctuationGroup:(id)arg1;
- (id)init;
- (bool)isBasePunctuationGroup:(id)arg1;
- (bool)isProtectedDataAvailable;
- (id)mostBasePunctuationGroupForGroup:(id)arg1;
- (id)nextDefaultGroupName;
- (id)nonePunctuationGroup;
- (id)parentPunctuationGroup:(id)arg1;
- (id)punctuationEntriesForGroupUUID:(id)arg1;
- (id)punctuationEntryForUUID:(id)arg1;
- (id)punctuationEntryObjectFromLocalObjects:(id)arg1;
- (id)punctuationGroupForUUID:(id)arg1;
- (id)punctuationGroups;
- (id)punctuationGroupsForContexts;
- (void)removeAllRecordsForPurge;
- (void)removeCloudRecordForPurge:(id)arg1;
- (void)removeEntry:(id)arg1;
- (void)removePunctuationGroup:(id)arg1;
- (id)ruleToString:(long long)arg1;
- (void)setCloudKitPushInSameProcess:(bool)arg1;
- (void)setCloudKitSync:(bool)arg1;
- (id)somePunctuationGroup;
- (long long)stringToRule:(id)arg1;
- (void)updateEntry:(id)arg1;
- (void)updateEntry:(id)arg1 fromCloudKit:(bool)arg2;
- (void)updatePunctuationGroup:(id)arg1;
- (void)updatePunctuationGroup:(id)arg1 fromCloudKit:(bool)arg2;
- (void)userAuthChanged;

@end
