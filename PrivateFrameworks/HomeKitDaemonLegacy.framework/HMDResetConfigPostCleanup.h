
@interface HMDResetConfigPostCleanup : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_readExistingPostCleanupRecord;
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(bool)arg3;
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(bool)arg3 usingFileManager:(id)arg4;
+ (id)filesToExcludeFromCacheDirectory;
+ (id)filesToExcludeFromHomedDirectory;
+ (id)logCategory;
+ (void)performAnyPostCleanupStepsIfNecessary;
+ (void)performIndividualCleanupTasks:(unsigned long long)arg1 onRootDirectory:(id)arg2;
+ (void)performResetConfigPostCleanupSteps:(unsigned long long)arg1 dueToReason:(unsigned long long)arg2;
+ (void)removeFilesAtLocation:(id)arg1;
+ (void)removeFilesAtLocation:(id)arg1 usingFileManager:(id)arg2;
+ (id)resetConfigPostCleanupFileLocation;
+ (id)sqlFileListToRemove:(id)arg1 fromRootDirectory:(id)arg2;
+ (void)writePostCleanupRecordToRemoveAllCoreDataFilesWithReason:(unsigned long long)arg1;
+ (void)writePostCleanupRecordWithReason:(unsigned long long)arg1 steps:(unsigned long long)arg2;

@end
