
@interface PLLockedResourceTransferRecovery : NSObject {
    NSURL * _destinationDirectoryURL;
    PLFileSystemImportAsset * _transferAsset;
}

@property (nonatomic, readonly) NSURL *destinationDirectoryURL;
@property (nonatomic, readonly) PLFileSystemImportAsset *transferAsset;

+ (void)_validateAsset:(id)arg1 pathManager:(id)arg2;
+ (id)assetDirectoryForAsset:(id)arg1 bundleScope:(unsigned short)arg2 pathManager:(id)arg3;
+ (id)assetMainScopeDirectoryFromMarkerFilePathRelativeToBundle:(id)arg1 pathManager:(id)arg2;
+ (id)dcimDirectoryForAssetDirectory:(id)arg1 filename:(id)arg2 bundleScope:(unsigned short)arg3 pathManager:(id)arg4;
+ (id)dcimFileURLForAsset:(id)arg1 cplResourceType:(unsigned long long)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4 resourceType:(unsigned int)arg5 utiString:(id)arg6 bundleScope:(unsigned short)arg7 pathManager:(id)arg8;
+ (id)dcimFileURLForAsset:(id)arg1 resource:(id)arg2 bundleScope:(unsigned short)arg3 pathManager:(id)arg4;
+ (id)destinationURLForResource:(id)arg1 asset:(id)arg2 bundleScope:(unsigned short)arg3 pathManager:(id)arg4;
+ (id)dontImportMarkerFileURLForAsset:(id)arg1 bundleScope:(unsigned short)arg2 pathManager:(id)arg3;
+ (void)enumerateFilesInDirectoryWithType:(unsigned char)arg1 forMarkerFilePathRelativeToBundle:(id)arg2 pathManager:(id)arg3 block:(id /* block */)arg4;
+ (bool)isStaleResourceURL:(id)arg1 asset:(id)arg2 resource:(id)arg3 pathManager:(id)arg4;
+ (id)lockedTransferRecoveryMarkerFileExtension;
+ (unsigned short)oppositeBundleScope:(unsigned short)arg1;
+ (id)pathToResourceDirectoryForPhotoDirectoryType:(unsigned char)arg1 fromMarkerFilePathRelativeToBundle:(id)arg2 pathManager:(id)arg3;
+ (bool)updateAssetPropertiesAndSaveForAsset:(id)arg1 moveToDestinationScope:(unsigned short)arg2 library:(id)arg3 error:(id*)arg4;
+ (void)validateAssetWithUUID:(id)arg1 inLibrary:(id)arg2;

- (void).cxx_destruct;
- (id)destinationDirectoryURL;
- (id)initWithTransferImportAsset:(id)arg1 destinationDirectoryURL:(id)arg2;
- (bool)recoverFromInProgressLockedTransferForImportAsset:(id)arg1 pathManager:(id)arg2;
- (id)transferAsset;

@end
