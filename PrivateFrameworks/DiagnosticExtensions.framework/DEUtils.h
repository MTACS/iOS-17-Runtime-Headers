
@interface DEUtils : NSObject

+ (id)applicationSupportDirectoryForApp:(id)arg1;
+ (id)componentsByRemovingComponentsBeforeComponent:(id)arg1 sourceURL:(id)arg2 keepingComponent:(bool)arg3;
+ (bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2;
+ (bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 keepSourceDir:(bool)arg3;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2;
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2 withNewFileName:(id)arg3;
+ (bool)copyFile:(id)arg1 toDir:(id)arg2;
+ (id)copyItem:(id)arg1 toDestinationDir:(id)arg2 zipped:(bool)arg3;
+ (id)copyPath:(id)arg1 toDestinationDir:(id)arg2 zipped:(bool)arg3;
+ (id)copyPaths:(id)arg1 toDestinationDir:(id)arg2 withZipName:(id)arg3;
+ (id)createDirectoryWithClassCDataProtection:(id)arg1;
+ (id)createUserOwnedDirectoryAtUrl:(id)arg1;
+ (id)dirForTarGz:(id)arg1;
+ (id)enumeratorForAllItems:(id)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (id)findAllItems:(id)arg1 includeDirs:(bool)arg2;
+ (id)findAllfiles:(id)arg1;
+ (id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3;
+ (unsigned long long)getDirectorySize:(id)arg1;
+ (unsigned long long)getFileSystemItemSize:(id)arg1;
+ (bool)isValidDirectory:(id)arg1;
+ (id)lsDir:(id)arg1;
+ (id)lsDir:(id)arg1 sorted:(bool)arg2;
+ (id)moveItem:(id)arg1 toDestinationDir:(id)arg2;
+ (id)pathComponentsInURL:(id)arg1 removingBaseURLComponents:(id)arg2 keepingFirstComponent:(bool)arg3;
+ (id)processErrorResponse:(id)arg1;
+ (void)removeFile:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1;
+ (id)tarGzForDirectoryUrl:(id)arg1 validatesUrl:(bool)arg2;
+ (id)uniqueDateString;
+ (id)uniqueTemporaryDirectory;
+ (id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 keepComponent:(bool)arg3;
+ (id)userLibraryDirectoryForApp:(id)arg1;

@end
