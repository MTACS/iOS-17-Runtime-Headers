
@interface WFTemporaryFileManager : NSObject

+ (id)appGroupIdentifier;
+ (void)clearTemporaryFiles;
+ (void)configureBackupFlagAtURL:(id)arg1;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureFileProtectionAtPath:(id)arg1;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)createSharedDirectoryIfNecessary;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)arg1;
+ (id)createSharedTemporaryFileWithFilename:(id)arg1;
+ (id)createTemporaryDirectoryWithFilename:(id)arg1;
+ (id)createTemporaryDirectoryWithFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)createTemporaryFileWithFilename:(id)arg1;
+ (id)createTemporaryFileWithFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)createUniqueDirectoryInDirectory:(id)arg1;
+ (bool)isTemporaryFile:(id)arg1;
+ (void)markDirectoryAsPurgeableAtURL:(id)arg1;
+ (id)proposedFileURLForFilename:(id)arg1 atTheRootOfDirectory:(id)arg2;
+ (id)proposedFileURLForFilename:(id)arg1 atTheRootOfDirectory:(id)arg2 isDirectory:(bool)arg3;
+ (id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(bool)arg3;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)arg1;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)arg1 isDirectory:(bool)arg2;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1 isDirectory:(bool)arg2;
+ (void)setUpDirectories;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (id)temporaryDirectoryURL;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1 error:(id*)arg2;

@end
