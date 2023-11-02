
@interface PLThumbnailManagerCore : NSObject {
    NSArray * _fastImageTables;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    <PLThumbPersistenceManager> * _lastUsedThumbManager;
    unsigned short  _lastUsedThumbManagerFormatID;
    PLPhotoLibraryPathManager * _pathManager;
    NSMutableDictionary * _thumbManagersByFormat;
    NSLock * _thumbManagersLock;
    NSMutableDictionary * _thumbnailConfigurationDict;
}

@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) NSMutableDictionary *thumbManagersByFormat;

+ (id)_configurationThumbnailFormatIDsWithPathManager:(id)arg1;
+ (id)_formatIDsForIthmbFilesWithPathManager:(id)arg1;
+ (id)_generateTableFormatsFromFormatIDs:(id)arg1;
+ (id)_generateUncompressedImageTableSpecificationsForRunningConfigWithPathManager:(id)arg1;
+ (bool)_hasTableChangesOnlyFromFormatIDs:(id)arg1 toFormatIDs:(id)arg2;
+ (bool)_hasTableFormatsAndAllAreCompressedForFormatIDs:(id)arg1;
+ (bool)_isSuppressingTargetConfigComparedToSavedConfigForPathManager:(id)arg1;
+ (id)_thumbnailFormatsFromIDs:(id)arg1;
+ (long long)allocatedFileSizeOfThumbnailTablesWithPathManager:(id)arg1;
+ (int)configurationThumbnailVersionWithPathManager:(id)arg1;
+ (void)enumerateThumbnailTablesWithPathManager:(id)arg1 fileManager:(id)arg2 handler:(id /* block */)arg3;
+ (bool)hasThumbnailConfigMismatchWithPathManager:(id)arg1 comparedToConfigPhase:(long long)arg2;
+ (void)invalidateCachedConfig;
+ (void)invalidateIsSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)arg1;
+ (bool)isMissingThumbnailTablesWithPathManager:(id)arg1;
+ (bool)isSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)arg1;
+ (void)markThumbnailConfigurationForTableOnlyRebuildForThumbnailConfigDict:(id)arg1;
+ (void)markThumbnailConfigurationTableOnlyRebuildFinishedForThumbnailConfigDict:(id)arg1;
+ (void)removeThumbnailTablesUnsupportedOnly:(bool)arg1 withPathManager:(id)arg2;
+ (void)removeThumbnailTablesUnsupportedOnly:(bool)arg1 withPathManager:(id)arg2 fileManagerDelegate:(id)arg3;
+ (long long)requiredThumbnailResetTypeWithPathManager:(id)arg1 comparedToConfigPhase:(long long)arg2;
+ (void)stampThumbnailConfiguration:(id)arg1 toFile:(bool)arg2 withPathManager:(id)arg3;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1;
+ (id)tableThumbnailFormatsForConfigPhase:(long long)arg1 withPathManager:(id)arg2;
+ (id)thumbnailConfigurationDictWithPathManager:(id)arg1;
+ (id)thumbnailConfigurationPathWithPathManager:(id)arg1;
+ (id)thumbnailFormatIDsForConfigPhase:(long long)arg1 withPathManager:(id)arg2;
+ (id)thumbnailFormatsForConfigPhase:(long long)arg1 withPathManager:(id)arg2;
+ (int)thumbnailVersionForConfigPhase:(long long)arg1 withPathManager:(id)arg2;
+ (id)uncompressedImageTableSpecificationsWithPathManager:(id)arg1;
+ (bool)wantsTableOnlyRebuildForThumbnailConfigDict:(id)arg1;

- (void).cxx_destruct;
- (id)_thumbManagerForFormatID:(unsigned short)arg1;
- (void)dealloc;
- (id)fastThumbPersistenceManagers;
- (id)initWithPhotoLibraryPathManager:(id)arg1;
- (id)pathManager;
- (id)thumbManagerForFormatID:(unsigned short)arg1 thumbFileManagerClass:(Class)arg2 readOnly:(bool)arg3;
- (id)thumbManagersByFormat;

@end
