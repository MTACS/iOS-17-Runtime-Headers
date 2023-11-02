
@interface PLBackgroundJobDuplicateDetectorWorker : PLBackgroundJobWorker {
    NSSet * _additionalAttributesPropertiesToInclude;
    NSSet * _additionalAttributesPropertiesToIncludeForMetadataProcessing;
    NSObject<NSCopying> * _cancelledWorkItem;
    NSSet * _duplicateAlbumPropertiesToInclude;
    NSSet * _managedAssetPropertiesToInclude;
}

@property (copy) NSObject<NSCopying> *cancelledWorkItem;

+ (bool)_isTokenInvalidError:(id)arg1;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (id)_convertToPLManagedAssetOIDsFromSelectionOIDs:(id)arg1 library:(id)arg2;
- (bool)_hasCompletedPerceptualProcessingWithLibrary:(id)arg1;
- (bool)_isFullLibraryWorkItem:(id)arg1;
- (id)_lastDuplicateDetectorProcessingTokenFromLibrary:(id)arg1;
- (id)_managedAssetOIDsFromAdditionalAssetAttributesOIDs:(id)arg1 library:(id)arg2;
- (id)_managedAssetOIDsFromDuplicateAlbumOIDs:(id)arg1 library:(id)arg2;
- (bool)_processDuplicatesWithLimitedSelection:(id)arg1 requiresFingerprintDedupe:(bool)arg2 library:(id)arg3 error:(id*)arg4 continuationHandler:(id /* block */)arg5;
- (void)_resetCancelledWorkItem;
- (void)_resetTokenIfRequiredFromLibrary:(id)arg1;
- (void)_setLastDuplicateDetectorProcessingToken:(id)arg1 isCompleted:(bool)arg2 library:(id)arg3;
- (void)_setTokenMarkerWithPrivateData:(id)arg1 value:(bool)arg2 wellKnownIdentifier:(long long)arg3;
- (void)_setupPropertiesWithLibrary:(id)arg1;
- (bool)_shouldCancelCurrentWorkItem:(id)arg1;
- (id)_transactionIteratorSinceTokenIfValid:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (id)_validObjectIDFromChange:(id)arg1 entityDescriptionMap:(id)arg2 requiresFingerprintDedupe:(bool*)arg3;
- (id)cancelledWorkItem;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)setCancelledWorkItem:(id)arg1;
- (void)stopWorkingOnItem:(id)arg1;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
