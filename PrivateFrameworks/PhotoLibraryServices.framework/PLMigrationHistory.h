
@interface PLMigrationHistory : PLManagedObject

@property (nonatomic, retain) NSNumber *forceRebuildReason;
@property (nonatomic, retain) NSString *frameworkUUID;
@property (nonatomic, retain) NSDictionary *globalKeyValues;
@property (nonatomic) long long index;
@property (nonatomic, retain) NSDate *migrationDate;
@property (nonatomic) short migrationType;
@property (nonatomic) long long modelVersion;
@property (nonatomic) short origin;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSNumber *sourceModelVersion;
@property (nonatomic, retain) NSString *storeUUID;

+ (long long)_rebuildMigrationHistoryWithJournal:(id)arg1 managedObjectContext:(id)arg2;
+ (bool)currentMigrationHistoryIndex:(long long*)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)currentMigrationHistoryWithManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)initialize;
+ (id)insertCreatedWithManagedObjectContext:(id)arg1 index:(long long)arg2 migrationDate:(id)arg3;
+ (id)insertIntoManagedObjectContext:(id)arg1 index:(long long)arg2 sourceModelVersion:(id)arg3 migrationType:(long long)arg4 migrationDate:(id)arg5 forceRebuildReason:(id)arg6;
+ (id)insertLightweightWithManagedObjectContext:(id)arg1 index:(long long)arg2 sourceModelVersion:(unsigned long long)arg3 migrationDate:(id)arg4;
+ (id)insertRebuildWithManagedObjectContext:(id)arg1 index:(long long)arg2 migrationDate:(id)arg3 forceRebuildReason:(id)arg4;
+ (id)migrateLegacyMigrationHistoryWithMetadata:(id)arg1 index:(long long)arg2 outGlobalKeyValues:(id)arg3 managedObjectContext:(id)arg4;
+ (id)migrationHistoryWithManagedObjectContext:(id)arg1;
+ (bool)recordCurrentMigrationStateInManagedObjectContext:(id)arg1 withPathManager:(id)arg2 migrationType:(long long)arg3 forceRebuildReason:(id)arg4 sourceModelVersion:(id)arg5 updateLegacyMigrationState:(bool)arg6 journalRebuildRequred:(bool)arg7 origin:(short)arg8 libraryCreateOptions:(unsigned long long)arg9;

- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (bool)supportsCloudUpload;

@end
