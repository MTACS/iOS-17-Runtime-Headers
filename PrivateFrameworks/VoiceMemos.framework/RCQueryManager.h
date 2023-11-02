
@interface RCQueryManager : NSObject

+ (id)_defaultFolderFetchRequest;
+ (id)_defaultRecordingsFetchRequest;
+ (id)_defaultRecordingsFetchRequest:(id)arg1;
+ (id)_foldersWithPredicateFormat:(id)arg1;
+ (id)_recordingsWithPredicateFormat:(id)arg1;
+ (id)allCustomLabelsFetchRequest;
+ (id)allDeletedRecordingsFetchRequest;
+ (id)allFoldersForSortingFetchRequest;
+ (id)cacheDeletedOnWatchPredicate;
+ (id)clearTransientFlagsBatchUpdateRequest;
+ (id)customLabelSearchPredicateWithString:(id)arg1;
+ (id)defaultFetchedProperties;
+ (id)defaultResidentRecordingsFetchedProperties;
+ (id)defaultSortDescriptors;
+ (id)deletedRecordingsFetchRequest;
+ (id)deletedRecordingsPredicate;
+ (id)encryptedFieldsMigrationsFetchRequest;
+ (id)evictionDateBeforeFetchRequest:(id)arg1;
+ (id)favoritePredicate;
+ (id)foldersWithNameFetchRequest:(id)arg1 searchOption:(int)arg2;
+ (id)foldersWithUUIDFetchRequest:(id)arg1;
+ (id)foldersWithhRankFetchRequest:(long long)arg1;
+ (id)musicMemoPredicate;
+ (id)playablePredicate;
+ (id)playableRecordingsFetchRequestWithSubPredicate:(id)arg1;
+ (id)recordingMatchingNameCaseInsensitiveFetchRequest:(id)arg1;
+ (id)recordingsForFileNameFetchRequest:(id)arg1;
+ (id)recordingsInFolderFetchRequest:(id)arg1;
+ (id)recordingsInFolderPredicate:(id)arg1;
+ (id)recordingsNeedingAssetExportFetchRequest;
+ (id)recordingsWithNilAudioFuturesFetchRequest;
+ (id)recordingsWithNilEncryptedTitleOrCustomLabelFetchRequest;
+ (id)recordingsWithTitleFetchRequest:(id)arg1;
+ (id)recordingsWithUniqueIDFetchRequest:(id)arg1;
+ (id)recordingsWithUniqueIDsFetchRequest:(id)arg1;
+ (id)userDefinedFoldersFetchRequest;
+ (id)visibleRecordingsFetchRequest;
+ (id)watchOSPredicate;

@end
