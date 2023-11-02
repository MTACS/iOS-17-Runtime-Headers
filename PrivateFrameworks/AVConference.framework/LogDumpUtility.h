
@interface LogDumpUtility : NSObject

+ (bool)createDirectory:(id)arg1;
+ (id)createFileListSortedByTimestamp:(id)arg1;
+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5;
+ (void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (bool)shouldCleanupFiles;

@end
