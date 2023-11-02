
@interface PLFileUtilities : NSObject

+ (bool)URLIsInTrash:(id)arg1;
+ (id)_attributeDetailsForPath:(id)arg1 ofFileSystem:(bool)arg2 error:(id*)arg3;
+ (id)_defaultSystemLibraryPath;
+ (id)_diagnosticInfoForPath:(id)arg1 includeFileSystemAttributes:(bool)arg2 resolvedFileSystemAttributes:(bool*)arg3;
+ (id)_fileListingDetailsForPath:(id)arg1 error:(id*)arg2;
+ (id)_mobileOwnerAttributes;
+ (void)calculateTotalSizeOfFilesAtPath:(id)arg1 calculatePurgeable:(bool)arg2 allocatedSize:(bool)arg3 result:(id /* block */)arg4;
+ (bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2;
+ (bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3;
+ (bool)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
+ (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)createDirectoryAtPath:(id)arg1 error:(id*)arg2;
+ (bool)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3;
+ (id)defaultSystemLibraryURL;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (id)defaultSystemPhotoDataDirectory;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (id)descriptionForFileIngestionType:(long long)arg1;
+ (long long)directoryEntryCountAtURL:(id)arg1 error:(id*)arg2;
+ (id)embeddedHomeDirectory;
+ (long long)fileLengthForFilePath:(id)arg1;
+ (id)fileManager;
+ (bool)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (bool)filePath:(id)arg1 isEqualToFilePath:(id)arg2;
+ (bool)filePathIsSubpathOfSyncRoot:(id)arg1;
+ (bool)fileURL:(id)arg1 isEqualToFileURL:(id)arg2;
+ (void)gatherDiagnosticInfoForURL:(id)arg1 handler:(id /* block */)arg2;
+ (bool)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (bool)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id*)arg6;
+ (bool)isFileExistsError:(id)arg1;
+ (void)logDiagnosticInfoForURL:(id)arg1;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2;
+ (id)proxyLockFilePathForDatabasePath:(id)arg1;
+ (id)realPathForPath:(id)arg1 error:(id*)arg2;
+ (id)realSystemPhotoLibraryPath;
+ (id)redactedDescriptionForFileURL:(id)arg1;
+ (id)redactedDescriptionForPath:(id)arg1;
+ (bool)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id*)arg2;
+ (bool)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id*)arg3 progress:(id /* block */)arg4;
+ (bool)removeItemAtPath:(id)arg1 error:(id*)arg2;
+ (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
+ (bool)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id*)arg4;
+ (bool)setFileCreationDate:(id)arg1 forFileURL:(id)arg2 error:(id*)arg3;
+ (id)standardOutputStringForExecutablePath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 standardErrorOut:(id*)arg4 error:(id*)arg5;
+ (bool)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3;
+ (bool)stripImmutableFlagIfNecessaryFromFileAtPath:(id)arg1;
+ (id)systemLibraryURL;

@end
