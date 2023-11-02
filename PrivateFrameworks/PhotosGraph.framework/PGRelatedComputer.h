
@interface PGRelatedComputer : NSObject {
    NSSet * _blockedFeatures;
    NSObject<OS_os_log> * _loggingConnection;
    PGManagerWorkingContext * _workingContext;
}

+ (id)searchNodesInGraph:(id)arg1 forAsset:(id)arg2 inMoment:(id)arg3;
+ (id)stringFromPGRelatedType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_diverseResultsFromMatchingResults:(id)arg1 inGraph:(id)arg2 timeShuffleDate:(id)arg3 matchingOptions:(id)arg4 options:(id)arg5;
- (id)_fileURLForMomentNode:(id)arg1 inGraph:(id)arg2 relatedType:(unsigned long long)arg3 focusOnAsset:(id)arg4 toURL:(id)arg5;
- (void)_generateTitleForRelatedResults:(id)arg1 withGraph:(id)arg2 referenceEvent:(id)arg3 referenceAsset:(id)arg4;
- (id)_postProcessMatchingResults:(id)arg1 inGraph:(id)arg2 matchingOptions:(id)arg3 options:(id)arg4;
- (id)_referenceAssetWithLocalIdentifier:(id)arg1;
- (id)_relatedCollectionBetweenHighlight:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(bool)arg4 needsDiversityInfo:(bool)arg5;
- (id)_relatedCollectionBetweenMoment:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(bool)arg4 needsDiversityInfo:(bool)arg5;
- (id)_relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 curationContext:(id)arg5 error:(id*)arg6;
- (id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 curationContext:(id)arg5 error:(id*)arg6;
- (id)_stringFromRelatedType:(unsigned long long)arg1;
- (id)_tripsForTargetDomain:(unsigned short)arg1 inGraph:(id)arg2;
- (id)_upNextCollectionsForAssetCollection:(id)arg1 options:(id)arg2 curationContext:(id)arg3 error:(id*)arg4;
- (id)_weekendsForTargetDomain:(unsigned short)arg1 inGraph:(id)arg2;
- (bool)exportMatchingResultsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4;
- (bool)exportMatchingResultsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4;
- (id)initWithWorkingContext:(id)arg1 blockedFeatures:(id)arg2;
- (id)relatedCollectionBetweenAsset:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(bool)arg4;
- (id)relatedCollectionBetweenAssetCollection:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 curationContext:(id)arg4 needsDebugInfo:(bool)arg5;
- (id)relatedCollectionsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;
- (id)relatedCollectionsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 curationContext:(id)arg4 error:(id*)arg5;
- (id)relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 curationContext:(id)arg4 error:(id*)arg5;
- (id)relatedCollectionsForHighlight:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(bool)arg4 error:(id*)arg5;
- (id)relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 curationContext:(id)arg4 error:(id*)arg5;
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;
- (id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(bool)arg4 error:(id*)arg5;
- (id)relatedCollectionsForPersonLocalIdentifiers:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;

@end
