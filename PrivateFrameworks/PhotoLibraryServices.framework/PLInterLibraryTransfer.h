
@interface PLInterLibraryTransfer : NSObject {
    PLPhotoLibraryBundle * _destinationBundle;
    PLPhotoLibrary * _destinationLibrary;
    NSFileManager * _fileManager;
    PLInterLibraryTransferOptions * _options;
    PLPhotoLibraryBundle * _sourceBundle;
    PLPhotoLibrary * _sourceLibrary;
}

@property (retain) PLPhotoLibraryBundle *destinationBundle;
@property (retain) PLPhotoLibrary *destinationLibrary;
@property (retain) NSFileManager *fileManager;
@property (retain) PLInterLibraryTransferOptions *options;
@property (retain) PLPhotoLibraryBundle *sourceBundle;
@property (retain) PLPhotoLibrary *sourceLibrary;

- (void).cxx_destruct;
- (bool)_copyFileFrom:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)_copyFilesFromSourceAsset:(id)arg1 toDestinationAsset:(id)arg2 objectMap:(id)arg3 filesCopied:(id)arg4 error:(id*)arg5;
- (bool)_copyMasterThumbnailFrom:(id)arg1 toDestinationAsset:(id)arg2 filesCopied:(id)arg3 error:(id*)arg4;
- (id)_copyObject:(id)arg1 toDestinationObject:(id)arg2 toLibrary:(id)arg3 objectMap:(id)arg4;
- (void)_copyRelationship:(id)arg1 fromObject:(id)arg2 toObject:(id)arg3 inLibrary:(id)arg4 objectMap:(id)arg5;
- (id)_createNewObjectWithEntity:(id)arg1 attributes:(id)arg2 inLibrary:(id)arg3;
- (id)_dedupedDestinationAssetWithSourceAsset:(id)arg1 destinationLibrary:(id)arg2;
- (bool)_deleteAsset:(id)arg1;
- (void)_initFileManager;
- (id)_loadAssetWithUuid:(id)arg1 fromLibrary:(id)arg2 error:(id*)arg3;
- (id)_loadDestinationLibraryWithError:(id*)arg1;
- (id)_loadFaceCropWithUuid:(id)arg1 fromLibrary:(id)arg2 error:(id*)arg3;
- (bool)_loadLibrariesWithError:(id*)arg1;
- (id)_loadObjectWithEntityName:(id)arg1 withValues:(id)arg2 forKeyPaths:(id)arg3 fromLibrary:(id)arg4 error:(id*)arg5;
- (id)_loadPersonWithUuid:(id)arg1 fromLibrary:(id)arg2 error:(id*)arg3;
- (id)_loadSourceLibraryWithError:(id*)arg1;
- (void)_setAttributes:(id)arg1 onObject:(id)arg2;
- (void)_setRelationship:(id)arg1 origin:(id)arg2 target:(id)arg3;
- (bool)_shouldSkipRelationship:(id)arg1;
- (bool)_shouldSkipTransferWithSourceAsset:(id)arg1 destinationAsset:(id)arg2;
- (id)_sourceAttributesFromObject:(id)arg1;
- (void)_transferThumbnailsForSourceAsset:(id)arg1 toDestinationAsset:(id)arg2 filesCopied:(id)arg3;
- (void)_validateSourceAsset:(id)arg1 destinationAsset:(id)arg2;
- (void)_validateSourceFaceCrop:(id)arg1 destinationFaceCrop:(id)arg2;
- (void)_validateSourcePerson:(id)arg1 destinationPerson:(id)arg2;
- (id)destinationBundle;
- (id)destinationLibrary;
- (id)fileManager;
- (id)initWithSourceBundle:(id)arg1 destinationBundle:(id)arg2 options:(id)arg3;
- (id)initWithSourceLibrary:(id)arg1 destinationLibrary:(id)arg2 options:(id)arg3;
- (id)options;
- (void)setDestinationBundle:(id)arg1;
- (void)setDestinationLibrary:(id)arg1;
- (void)setFileManager:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSourceBundle:(id)arg1;
- (void)setSourceLibrary:(id)arg1;
- (id)sourceBundle;
- (id)sourceLibrary;
- (bool)transferAssetWithUuid:(id)arg1 error:(id*)arg2;
- (bool)transferFaceCropWithUuid:(id)arg1 error:(id*)arg2;
- (bool)transferPersonWithUuid:(id)arg1 error:(id*)arg2;

@end
