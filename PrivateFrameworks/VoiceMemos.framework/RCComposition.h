
@interface RCComposition : NSObject <NSCopying, NSMutableCopying, RCDictionaryPListRepresentationCoding> {
    double  _cachedComposedAVURLDuration;
    bool  _cachedComposedAVURLDurationIsValid;
    NSURL * _composedAVURL;
    NSArray * _composedFragments;
    NSObject * _composedFragmentsMutex;
    NSURL * _composedWaveformURL;
    NSDate * _creationDate;
    NSArray * _decomposedFragments;
    NSDictionary * _musicMemoMetadata;
    bool  _readonly;
    NSString * _savedRecordingUUID;
    NSString * _title;
}

@property (nonatomic) double cachedComposedAVURLDuration;
@property (nonatomic) bool cachedComposedAVURLDurationIsValid;
@property (nonatomic, readonly) NSURL *composedAVURL;
@property (nonatomic, readonly) double composedDuration;
@property (nonatomic, retain) NSArray *composedFragments;
@property (nonatomic, retain) NSObject *composedFragmentsMutex;
@property (nonatomic, readonly) NSURL *composedWaveformURL;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *decomposedFragments;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentBeingModified;
@property (nonatomic, retain) NSDictionary *musicMemoMetadata;
@property (nonatomic) bool readonly;
@property (nonatomic, retain) NSString *savedRecordingUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (id)_compositionFragmentsFolderForComposedAVURL:(id)arg1;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingUUID:(id)arg3 creationDate:(id)arg4 createIfNeeded:(bool)arg5;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 savedRecording:(id)arg2;
+ (id)_compositionMetadataURLForCompositionBundleURL:(id)arg1;
+ (bool)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1;
+ (bool)_markCompositionAVURLsBeingModified:(id)arg1;
+ (id)_unitTestingCompositionWithDecomposedFragments:(id)arg1;
+ (id)compositionBundleURLForComposedAVURL:(id)arg1;
+ (id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(bool)arg2;
+ (id)compositionLoadedForEditingSavedRecording:(id)arg1 error:(id*)arg2;
+ (id)compositionLoadedForSavedRecording:(id)arg1;
+ (id)compositionLoadedFromCompositionBundleURL:(id)arg1;
+ (id)compositionMetadataURLForComposedAVURL:(id)arg1;
+ (id)compositionWithComposedAVURL:(id)arg1;
+ (void)deleteFromFilesystem:(id)arg1;
+ (bool)excludeFromBackup:(id)arg1 error:(id*)arg2;
+ (bool)migrateBackupExclusionFlag:(id)arg1;
+ (id)uriRepresentationForLegacyComposedAVURL:(id)arg1;

- (void).cxx_destruct;
- (id)_calculateComposedFragments;
- (double)_composedDuration;
- (id)_compositionAsset:(bool)arg1 error:(id*)arg2;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessary:(id /* block */)arg1;
- (bool)_enumerateFragmentsForInsertion:(id /* block */)arg1;
- (unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(bool)arg1;
- (id)_initWithComposedAVURL:(id)arg1 savedRecordingUUID:(id)arg2 creationDate:(id)arg3 title:(id)arg4 musicMemoMetadata:(id)arg5 decomposedFragments:(id)arg6 composedFragments:(id)arg7;
- (id)_initWithSavedRecording:(id)arg1 decomposedFragments:(id)arg2 composedFragments:(id)arg3;
- (void)_loadMusicMemoMetadata;
- (double)cachedComposedAVURLDuration;
- (bool)cachedComposedAVURLDurationIsValid;
- (id)composedAVURL;
- (double)composedDuration;
- (id)composedFragments;
- (id)composedFragmentsIntersectingTimeRange:(struct { double x1; double x2; })arg1;
- (id)composedFragmentsMutex;
- (id)composedWaveformURL;
- (id)compositionAssetForExport:(id*)arg1;
- (id)compositionByAppendingFragment:(id)arg1;
- (id)compositionByClippingToComposedTimeRange:(struct { double x1; double x2; })arg1;
- (id)compositionByDeletingAndSplittingAtComposedTimeRange:(struct { double x1; double x2; })arg1;
- (id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1;
- (id)compositionByOverdubbingWithFragment:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)decomposedFragments;
- (void)deleteFromFilesystem;
- (id)description;
- (id)dictionaryPListRepresentation;
- (void)enumerateOrphanedFragmentsWithBlock:(id /* block */)arg1;
- (unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(bool)arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(bool)arg1;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (bool)isContentBeingModified;
- (id)musicMemoMetadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newRandomFragmentWithInsertionTimeRangeInComposition:(struct { double x1; double x2; })arg1 pathExtension:(id)arg2;
- (id)playableAsset:(id*)arg1;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(bool)arg1 composeWaveform:(bool)arg2 canGenerateWaveformByProcessingAVURL:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary:(id /* block */)arg1;
- (bool)readonly;
- (void)recacheComposedDuration;
- (bool)saveMetadataToDefaultLocation;
- (id)savedRecordingUUID;
- (void)setCachedComposedAVURLDuration:(double)arg1;
- (void)setCachedComposedAVURLDurationIsValid:(bool)arg1;
- (void)setComposedFragments:(id)arg1;
- (void)setComposedFragmentsMutex:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDecomposedFragments:(id)arg1;
- (void)setMusicMemoMetadata:(id)arg1;
- (void)setReadonly:(bool)arg1;
- (void)setSavedRecordingUUID:(id)arg1;
- (void)setSavedRecordingUUIDFromRecoveredRecordingUUID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
