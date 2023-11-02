
@interface PLBackgroundJobLockedResourceWorker : PLBackgroundJobWorker {
    PLThumbnailManager * _thumbnailManager;
    NSMutableDictionary * _userInfo;
}

+ (void)_accessFileForAsset:(id)arg1 cplResourceType:(unsigned long long)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4 resourceType:(unsigned int)arg5 utiString:(id)arg6 bundleScope:(unsigned short)arg7 pathManager:(id)arg8 mode:(unsigned char)arg9 handler:(id /* block */)arg10;
+ (bool)_isRecoveringFromTransferForAsset:(id)arg1 pathManager:(id)arg2 mainMarkerURLIfExists:(id*)arg3 lockedMarkerURLIfExists:(id*)arg4;
+ (bool)_removeFilesForAsset:(id)arg1 inBundleScope:(unsigned short)arg2 pathManager:(id)arg3;
+ (void)recoverFromInterruptedJobWithLibrary:(id)arg1;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (bool)_cloneResource:(id)arg1 asset:(id)arg2 destinationBundleScope:(unsigned short)arg3 pathManager:(id)arg4 sourceURL:(id*)arg5 destinationURL:(id*)arg6 error:(id*)arg7;
- (bool)_cloneResourceWithCPLResourceType:(unsigned long long)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 resourceType:(unsigned int)arg4 utiString:(id)arg5 asset:(id)arg6 destinationBundleScope:(unsigned short)arg7 pathManager:(id)arg8 sourceURL:(id*)arg9 destinationURL:(id*)arg10 error:(id*)arg11;
- (bool)_eraseTableThumbnailAtIndex:(long long)arg1 managedObjectContext:(id)arg2 pathManager:(id)arg3;
- (id)initWithLibraryBundle:(id)arg1;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
