
@interface NSFileManager : NSObject <PLFileManager> {
    id  _delegate;
    NSValue * _weakDelegateValue;
}

@property (nonatomic, readonly) NSURL *as_authenticationServicesManagedConfigurationURL;
@property (readonly) bool crk_isStudentdInstalled;
@property (readonly, copy) NSString *currentDirectoryPath;
@property (readonly, copy) NSString *debugDescription;
@property <NSFileManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *feedbackLoggerDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *homeDirectoryForCurrentUser;
@property (readonly) Class superclass;
@property (readonly, copy) NSURL *temporaryDirectory;
@property (readonly, copy) <NSObject><NSCopying><NSCoding> *ubiquityIdentityToken;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)defaultManager;

- (id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(bool)arg4 error:(id*)arg5;
- (id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3;
- (id)URLForUbiquityContainerIdentifier:(id)arg1;
- (id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2;
- (id)_URLForTrashingItemAtURL:(id)arg1 create:(bool)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(bool)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(bool)arg2 error:(id*)arg3;
- (id)_displayPathForPath:(id)arg1;
- (void)_performRemoveFileAtPath:(id)arg1;
- (bool)_processCanAccessUbiquityIdentityToken;
- (bool)_processHasUbiquityContainerEntitlement;
- (bool)_processUsesCloudServices;
- (bool)_replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;
- (id)_safeDelegate;
- (void)_web_backgroundRemoveFileAtPath:(id)arg1;
- (void)_web_backgroundRemoveLeftoverFiles:(id)arg1;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (bool)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;
- (bool)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2;
- (bool)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2;
- (bool)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (bool)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4;
- (bool)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (bool)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(bool*)arg2 traverseLink:(bool)arg3;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (id)_web_pathWithUniqueFilenameForPath:(id)arg1;
- (bool)_web_removeFileOnlyAtPath:(id)arg1;
- (id)_web_startupVolumeName_nowarn;
- (id)_web_visibleItemsInDirectoryAtPath:(id)arg1;
- (id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)changeCurrentDirectoryPath:(id)arg1;
- (bool)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (id)componentsToDisplayForPath:(id)arg1;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (bool)contentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (bool)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3 error:(id*)arg4;
- (bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3 error:(id*)arg4;
- (bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (bool)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (bool)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3;
- (bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3;
- (id)currentDirectoryPath;
- (void)dealloc;
- (id)delegate;
- (id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2;
- (bool)directoryCanBeCreatedAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(bool)arg4;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(bool)arg4 error:(id*)arg5;
- (id)displayNameAtPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(id /* block */)arg4;
- (bool)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(bool)arg2;
- (bool)fileExistsAtPath:(id)arg1;
- (bool)fileExistsAtPath:(id)arg1 isDirectory:(bool*)arg2;
- (id)fileSystemAttributesAtPath:(id)arg1;
- (const char *)fileSystemRepresentationWithPath:(id)arg1;
- (bool)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (bool)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (bool)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
- (bool)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
- (bool)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
- (bool)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (void)getFileProviderMessageInterfacesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3;
- (bool)getRelationship:(long long*)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id*)arg5;
- (bool)getRelationship:(long long*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4;
- (bool)isDeletableFileAtPath:(id)arg1;
- (bool)isExecutableFileAtPath:(id)arg1;
- (bool)isReadableFileAtPath:(id)arg1;
- (bool)isUbiquitousItemAtURL:(id)arg1;
- (bool)isWritableFileAtPath:(id)arg1;
- (bool)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (bool)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2;
- (bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)pathContentOfSymbolicLinkAtPath:(id)arg1;
- (bool)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (bool)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (bool)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;
- (bool)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4;
- (bool)setUbiquitous:(bool)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4;
- (bool)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (id)subpathsAtPath:(id)arg1;
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (void)synchronouslyGetFileProviderServiceWithName:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)synchronouslyGetFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)temporaryDirectory;
- (bool)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3;
- (id)ubiquityIdentityToken;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (void)fp_createPathIfNeeded:(id)arg1;
- (id)fp_putBackURLForTrashedItemAtURL:(id)arg1 error:(id*)arg2;
- (void)fp_setPutBackInfoOnItemAtURL:(id)arg1;
- (bool)fp_trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3;
- (id)fp_trashURLForItemAtURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (bool)hk_enumerateDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;

// Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing

+ (void)_QLTRemoveTemporaryDirectoryAtURL:(id)arg1;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

- (long long)_srDeleteAllAndSystemTempFiles;
- (long long)_srDeleteAllTempFiles;
- (long long)_srDeleteFilesOlderThanTimeToLiveInSeconds:(double)arg1 deleteSystemFiles:(bool)arg2;
- (void)_srDeleteFilesWithPrefix:(id)arg1;
- (unsigned long long)_srDeviceFreeDiskSpace;
- (bool)_srDeviceHasSufficientFreeSpaceForRecording;
- (bool)_srDeviceHasSufficientSpaceForCurrentRecording;
- (id)_srGetCreationDateForFile:(id)arg1;
- (void)_srMoveFileFromURL:(id)arg1 toURL:(id)arg2 completion:(id /* block */)arg3;
- (void)_srRemoveFile:(id)arg1 completion:(id /* block */)arg2;
- (void)_srSetupTempDirectory;
- (long long)_srSizeOfTempDir:(id*)arg1;
- (id)_srTempPath;
- (id)dateSuffix;
- (id)outputPath:(int)arg1 bundleID:(id)arg2;
- (id)trimmedOutputPath:(id)arg1;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_web_createTemporaryFileForQuickLook:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (bool)ams_ensureDirectoryExists:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine

+ (bool)ane_addWriteModeForPath:(id)arg1;
+ (bool)ane_addWriteModeIfMissing:(id)arg1 originalMode:(unsigned short)arg2;

// Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore

- (id)as_authenticationServicesManagedConfigurationURL;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (id)blt_contactImagesDirectory;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)mimeTypeForFile:(id)arg1;

- (id)CalTemporaryDirectoryAppropriateForURL:(id)arg1;
- (bool)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(bool)arg3;
- (bool)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(bool)arg3 error:(id*)arg4;
- (bool)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(bool)arg3;
- (bool)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(bool)arg3 error:(id*)arg4;
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(bool)arg2;
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(bool)arg2 error:(id*)arg3;
- (bool)makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)makeUniqueDirectoryWithPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_computeNonContainerizedHomeDirectoryURL;
+ (id)crk_nonContainerizedHomeDirectoryURL;

- (id)crk_collisionAvoidingURLForURL:(id)arg1;
- (id)crk_deepContentsOfDirectoryAtPath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)crk_isStudentdInstalled;
- (bool)crk_safeRemoveItemAtURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (bool)br_forceMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)br_putBackTrashedItemAtURL:(id)arg1 resultingURL:(id*)arg2 error:(id*)arg3;
- (id)br_putBackURLForTrashedItemAtURL:(id)arg1 error:(id*)arg2;
- (void)br_setFavoriteRank:(id)arg1 onItemAtURL:(id)arg2;
- (void)br_setLastOpenDate:(id)arg1 onItemAtURL:(id)arg2;
- (void)br_setPutBackInfoOnItemAtURL:(id)arg1;
- (id)br_topLevelSharedFolderForURL:(id)arg1 error:(id*)arg2;
- (bool)br_trashItemAtURL:(id)arg1 resultingURL:(id*)arg2 error:(id*)arg3;
- (int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (bool)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)cplFileExistsAtURL:(id)arg1;
- (bool)cplIsFileDoesNotExistError:(id)arg1;
- (bool)cplIsFileExistsError:(id)arg1;
- (bool)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (bool)_cutIsPathOnMissingVolume:(id)arg1;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

- (id)dataForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
- (bool)setExtendedAttributeData:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id*)arg4;
- (bool)setExtendedAttributeValue:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id*)arg4;
- (id)stringForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (bool)_cn_getValue:(id*)arg1 forExtendendAttribute:(id)arg2 path:(id)arg3 error:(id*)arg4;
- (bool)_cn_getValue:(id*)arg1 forExtendendAttribute:(id)arg2 url:(id)arg3 error:(id*)arg4;
- (bool)_cn_removeExtendedAttributeForKey:(id)arg1 path:(id)arg2 error:(id*)arg3;
- (bool)_cn_setValue:(id)arg1 forExtendedAttribute:(id)arg2 path:(id)arg3 error:(id*)arg4;
- (bool)_cn_setValue:(id)arg1 forExtendedAttribute:(id)arg2 url:(id)arg3 error:(id*)arg4;
- (id)_cn_valueForExtendedAttribute:(id)arg1 path:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (bool)wf_removeExtendedAttributeName:(id)arg1 ofItemAtURL:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (bool)_fides_removeItemAtPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (bool)_doc_destinationLocationExists:(long long)arg1;
- (id)_doc_importItemAtURL:(id)arg1 toDestination:(long long)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (bool)fm_setDataProtectionClass:(long long)arg1 forFileURL:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger

- (id)feedbackLoggerDirectoryURL;
- (id)urlForStoreWithId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (double)_gkExpirationIntervalOfFileAtPath:(id)arg1;
- (long long)_gkReadXattrBytes:(void*)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;
- (void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2;
- (void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2;
- (void)_gkWriteXattrBytes:(void*)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

- (id)gs_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hd_removeAllFilesAtDirectoryPath:(id)arg1 error:(id*)arg2;
- (bool)hd_removeHFDDatabaseAtURL:(id)arg1 preserveCopy:(bool)arg2;
- (bool)hd_removeSQLiteDatabaseAtURL:(id)arg1 preserveCopy:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (bool)im_copySecurityScopedResourceAtURL:(id)arg1 toDestination:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)_generateLinkForURL:(id)arg1;
- (bool)_isPathOnMissingVolume:(id)arg1;
- (bool)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 asCopy:(bool)arg5;
- (id)_randomSimilarFilePathAsPath:(id)arg1;
- (id)_randomTemporaryPathWithFileName:(id)arg1;
- (id)_randomTemporaryPathWithFileName:(id)arg1 withAppendedPathComponent:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 withAppendedPathComponent:(id)arg3;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 withAppendedPathComponent:(id)arg2;
- (bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (bool)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;
- (bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (bool)__im_getItemsRemovedFromiCloudBackupsAtDirectoryPath:(id)arg1 outPaths:(id*)arg2 outRemovedPaths:(id*)arg3 error:(id*)arg4;
- (bool)__im_getiCloudBackupAttributeForItemAtPath:(id)arg1 attributeValue:(bool*)arg2 error:(id*)arg3;
- (bool)__im_isPathOnMissingVolume:(id)arg1;
- (bool)__im_makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;
- (bool)__im_setiCloudBackupAttribute:(bool)arg1 onDirectoryAndChildrenAtPath:(id)arg2 error:(id*)arg3;
- (bool)__im_setiCloudBackupAttribute:(bool)arg1 onItemAtPath:(id)arg2 error:(id*)arg3;
- (id)im_randomTemporaryFileURLWithFileName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon

+ (id)userLibraryDirectoryPath;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (struct { unsigned int x1[8]; })if_auditTokenForExtendedAttributeNamed:(id)arg1 ofItemAtURL:(id)arg2;
- (bool)if_boolForExtendedAttributeName:(id)arg1 ofItemAtURL:(id)arg2;
- (bool)if_removeExtendedAttributeName:(id)arg1 ofItemAtURL:(id)arg2;
- (bool)if_setAuditToken:(struct { unsigned int x1[8]; })arg1 forExtendedAttributeNamed:(id)arg2 ofItemAtURL:(id)arg3;
- (bool)if_setBool:(bool)arg1 forExtendedAttributeNamed:(id)arg2 ofItemAtURL:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_defaultVolumeMountPoint;

- (bool)mf_canWriteToDirectoryAtPath:(id)arg1;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(bool)arg2;
- (bool)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (bool)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id*)arg3;
- (bool)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id*)arg4;
- (long long)mf_sizeForDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (long long)mf_sizeForDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)temporaryFilePathWithExtension:(id)arg1;

- (bool)createDirectoryIfNecessary:(id)arg1;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

- (bool)_anyPathExists:(id)arg1;
- (bool)_migratePaths:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)_moveItemAtPath:(id)arg1 toTempDir:(id)arg2;
- (id)_pathsRootedAt:(id)arg1 subpaths:(id)arg2;
- (bool)_perform:(id /* block */)arg1 times:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_removeAllPaths:(id)arg1 error:(id*)arg2;
- (bool)_tryMovingThenRemovingItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)mb_migrateIfNeededFromSource:(id)arg1 sourceSubPaths:(id)arg2 toDestination:(id)arg3 destinationSubPaths:(id)arg4 error:(id*)arg5;
- (bool)mb_moveToTmpDirThenRemoveItemAtPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)fc_quicklyClearDirectory:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)fc_removeContentsOfDirectoryAtURL:(id)arg1;
- (unsigned long long)fc_sizeOfItemAtURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_temporaryDirectoryAppropriateForDestination:(id)arg1;
- (id)ic_temporaryDirectoryPathAppropriateForDestinationPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (unsigned long long)sfu_directoryUsage:(id)arg1;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (bool)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(bool)arg3 error:(id*)arg4;
- (bool)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(bool)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(id /* block */)arg5;
- (bool)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2;
- (bool)tsu_linkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (id)pbui_createTransientDirectoryAtURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore

- (bool)createDirectoryIfNeededAtPath:(id)arg1 error:(id*)arg2;
- (bool)directoryExistsAtPath:(id)arg1;
- (bool)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (id)tmpFileForVideoTranscodeToPhotoDataDirectory:(bool)arg1 withExtension:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)remcrtt_createTemporaryFileDirectoryURLIfNeeded;

// Image: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal

- (bool)rem_createDirectoryIfNecessaryAtURL:(id)arg1 error:(id*)arg2;
- (id)rem_createProtectedTemporaryDirectoryIfNeededWithError:(id*)arg1;
- (bool)rem_fileExistsAtURL:(id)arg1;
- (bool)rem_fileExistsAtURL:(id)arg1 isDirectory:(bool*)arg2;
- (bool)rem_isEmptyDirectoryAtURL:(id)arg1 skipsHiddenFiles:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (void)_safari_getMobileSafariContainerDirectoryURL:(id*)arg1 isContainerized:(bool*)arg2;
- (id)_safari_libraryDirectoryForHomeDirectory:(id)arg1;
- (bool)_safari_removeFileAtURL:(id)arg1 onlyIfFileExists:(bool)arg2 error:(id*)arg3;
- (id)safari_autoFillQuirksDownloadDirectoryURL;
- (id)safari_createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id*)arg2;
- (id)safari_createTemporaryDirectoryWithTemplate:(id)arg1;
- (bool)safari_currentProcessIsContainerized;
- (id)safari_ensureDirectoryExists:(id)arg1;
- (id)safari_frameworksDirectoryURLs;
- (id)safari_mobileSafariContainerDirectoryURL;
- (bool)safari_moveDownloadedFileAtURL:(id)arg1 toURL:(id)arg2;
- (id)safari_nonContaineredSettingsDirectoryURL;
- (id)safari_pathWithUniqueFilenameForPath:(id)arg1;
- (id)safari_productionSafariSettingsDirectory;
- (id)safari_profileDirectoryURLWithID:(id)arg1 createIfNeeded:(bool)arg2;
- (id)safari_profilesDirectoryURL;
- (void)safari_removeContentsOfDirectory:(id)arg1;
- (bool)safari_removeDirectoryIfEmpty:(id)arg1;
- (bool)safari_removeFileAtURL:(id)arg1 error:(id*)arg2;
- (bool)safari_removeFileOnlyAtURL:(id)arg1 error:(id*)arg2;
- (id)safari_safariLibraryDirectory;
- (id)safari_settingsDirectoryForHomeDirectory:(id)arg1;
- (id)safari_settingsDirectoryForLibraryDirectory:(id)arg1;
- (id)safari_settingsDirectoryURL;
- (id)safari_startPageBackgroundImageFileURL;
- (id)safari_startPageBackgroundImageFileURLForIdentifier:(id)arg1;
- (id)safari_startPageBackgroundImageFolderURL;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2;
- (id)safari_webExtensionsSettingsDirectoryURL;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)temporaryFilePathWithExtension:(id)arg1;
+ (id)temporaryFileURLWithExtension:(id)arg1;

- (bool)copySource:(id)arg1 toDestination:(id)arg2 withProgressionBlock:(id /* block */)arg3;
- (id)createTemporaryDirectoryAppropriateForForPath:(id)arg1 error:(id*)arg2;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)incrementalURLInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)unarchiveItemAtPath:(id)arg1 toDirectory:(id)arg2 withProgressionBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)assertDefaultFileProtectionAtDocumentURL:(id)arg1;
- (bool)setDefaultFileProtectionAtDocumentURL:(id)arg1 error:(id*)arg2;
- (bool)setDefaultFileProtectionForDirectoryPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (bool)_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(bool)arg4 error:(id*)arg5;
- (bool)_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (bool)_fileProtectionAtURL:(id)arg1 recursively:(bool)arg2 passesTest:(id /* block */)arg3;
- (void)_logFileProtectionAtURL:(id)arg1 recursively:(bool)arg2 indent:(id)arg3;
- (bool)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(bool)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(id /* block */)arg5;
- (bool)applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id*)arg3;
- (bool)changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(bool)arg4 error:(id*)arg5;
- (bool)changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(bool)arg3 error:(id*)arg4;
- (unsigned long long)directoryUsage:(id)arg1;
- (bool)grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2;
- (bool)hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(bool)arg3;
- (bool)hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(bool)arg3;
- (void)logFileProtectionAtURL:(id)arg1 recursively:(bool)arg2;
- (unsigned long long)pathUsage:(id)arg1;
- (bool)setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(bool)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (unsigned long long)tv_onDiskSizeOfDirectoryAtPath:(id)arg1 status:(int*)arg2;
- (unsigned long long)tv_onDiskSizeOfFileAtPath:(id)arg1 status:(int*)arg2;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)triArbitraryFileInDirWithPath:(id)arg1;
+ (bool)triHasFileProtection:(id)arg1;
+ (bool)triIdempotentCreateDirectoryOrFaultWithPath:(id)arg1;
+ (bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;

- (id)triCreateDirectoryForPath:(id)arg1 isDirectory:(bool)arg2 error:(id*)arg3;
- (id)triPath:(id)arg1 relativeToParentPath:(id)arg2;
- (bool)triRemoveItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)triSafeCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (unsigned long long)triCompressedSizeForFileAtPath:(id)arg1 shouldFault:(bool*)arg2;
+ (id)triDiskUsageForDirectory:(id)arg1;
+ (bool)triForceRenameWithSourcePath:(id)arg1 destPath:(id)arg2;
+ (id)triPostOrderDescendantDirectoryPathsAtPath:(id)arg1;
+ (bool)triRenameOrFaultWithSourcePath:(id)arg1 destPath:(id)arg2;
+ (id)triTargetPathForSymlink:(id)arg1;

- (bool)triForceRemoveItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)triRemoveCachedANEBinariesForModelsFromPath:(id)arg1 error:(id*)arg2;
- (bool)triRemoveDirectoryForPath:(id)arg1 isDirectory:(bool)arg2 error:(id*)arg3;
- (bool)triRemoveNestedEmptyDirectoriesAtPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_contentsSortedByLastModificationDateOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (bool)uns_securelyCopyFile:(id)arg1 fromURL:(id)arg2 toURL:(id)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (unsigned long long)vui_onDiskSizeOfDirectoryAtPath:(id)arg1 status:(int*)arg2;
- (unsigned long long)vui_onDiskSizeOfFileAtPath:(id)arg1 status:(int*)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (void)rc_cleanUpM4AsInDirectory:(id)arg1;
- (void)rc_cleanUpTemporaryDirectory;
- (bool)rc_fileExistsAndIsInValidRecordingURL:(id)arg1;
- (bool)rc_moveToTempAndMarkAsPurgeable:(id)arg1 error:(id*)arg2;
- (bool)rc_path:(id)arg1 isSubpathOf:(id)arg2;
- (id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

- (void)cleanDirectory:(id)arg1 withDateOlderThan:(id)arg2;
- (void)cleanDirectory:(id)arg1 withLRULimit:(unsigned long long)arg2;
- (unsigned long long)directorySize:(id)arg1;
- (void)removeDirectory:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_webkit_createTemporaryDirectoryWithTemplatePrefix:(id)arg1;
- (id)_webkit_pathWithUniqueFilenameForPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

+ (id)defaultsDomain;
+ (id)userCacheDirectoryPath;
+ (id)wifiCacheDirectoryPath;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (bool)_storeMovePath:(id)arg1 toPath:(id)arg2;
+ (id)cacheDirectoryPathWithName:(id)arg1;
+ (bool)ensureDirectoryExists:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (unsigned long long)sfu_directoryUsage:(id)arg1;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (bool)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(bool)arg3 error:(id*)arg4;
- (bool)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(bool)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(id /* block */)arg5;
- (bool)tsu_canCloneItemAtURL:(id)arg1 toURL:(id)arg2;
- (id)tsu_containerURLForDefaultSecurityApplicationGroupIdentifier;
- (bool)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2;
- (bool)tsu_linkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)tsu_makeWritableItemAtURL:(id)arg1 permissionsOverride:(id)arg2 resetCreationDate:(bool)arg3 error:(id*)arg4;
- (void)tsu_removeContentsOfDirectoryAtURL:(id)arg1 reason:(id)arg2 urlsToExclude:(id)arg3 logContext:(id)arg4;
- (bool)tsu_replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;

@end
