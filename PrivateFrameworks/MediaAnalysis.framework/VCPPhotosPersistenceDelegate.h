
@interface VCPPhotosPersistenceDelegate : NSObject <PNPersonPromoterDelegate> {
    bool  _personBuilderMergeCandidatesDisabled;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool personBuilderMergeCandidatesDisabled;
@property (readonly) Class superclass;

+ (void)enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(id /* block */)arg3;
+ (struct CGSize { double x1; double x2; })faceTileSizeAdjustingForImageAspectRatio:(struct CGSize { double x1; double x2; })arg1 imgWidth:(double)arg2 imgHeight:(double)arg3;
+ (bool)getCropRectForPortraitImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFacesDeterministicSortDescriptors;
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustConfirmingAndRejectionWithFaces:(id)arg1 faceCrops:(id)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3;
- (id)_bestVURepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 candidateFaces:(id)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4;
- (void)_buildPersonsFromUpdatedFaceGroups:(id)arg1 faceClusterer:(id)arg2 keyFaceUpdateBlock:(id /* block */)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4 context:(id)arg5;
- (void)_categorizeGroupedFacesInFetchResult:(id)arg1 intoFaceLocalIdentifiersByFaceGroup:(id)arg2 ungroupedFaceLocalIdentifiers:(id*)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4 photoLibrary:(id)arg5;
- (bool)_cleanupMergeCandidatesForVerifiedPersons:(id)arg1 minimumFaceGroupSize:(unsigned long long)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)_completePersonBuildingWithPersonsToUpdate:(id)arg1 facesToRemoveByPerson:(id)arg2 facesToAddByPerson:(id)arg3 updateFaceGroup:(id)arg4 newMergeCandidatePairs:(id)arg5 newInvalidMergeCandidatePairs:(id)arg6 faceInFaceGroupByCSN:(id)arg7 personCache:(id)arg8 keyFaceUpdateBlock:(id /* block */)arg9 cancelOrExtendTimeoutBlock:(id /* block */)arg10 context:(id)arg11 error:(id*)arg12;
- (void)_detectDuplicationInExistingFaceCrops:(id)arg1 withFetchedFaces:(id)arg2 faceCropFaceIdentifiersToEvaluate:(id)arg3 duplicationResults:(id*)arg4 cancelOrExtendTimeoutBlock:(id /* block */)arg5;
- (id)_duplicateFaceCSNsOnAssetForPerson:(id)arg1 faceCSNsOnPerson:(id)arg2 faceByCSNCache:(id)arg3;
- (void)_enumeratePersonsWithLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2 personCache:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)_faceToFaceCountMapForFaces:(id)arg1;
- (id)_facesFromFaceGroupWithMostNumberOfFacesOnPerson:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)_fetchResultForGroupedFacesWithClusterSequenceNumberSetToZeroInPhotoLibrary:(id)arg1;
- (id)_fetchResultForUngroupedFacesWithNonZeroClusterSequenceNumberInPhotoLibrary:(id)arg1;
- (void)_getMergeCandidates:(id)arg1 invalidMergeCandidates:(id)arg2 forPersonsWithLocalIdentifiers:(id)arg3;
- (void)_getRejectedTrainingFaceCSNs:(id*)arg1 rejectedFaceCSNs:(id*)arg2 rejectedPersonLocalIdentifiers:(id*)arg3 forPerson:(id)arg4 faceInFaceGroupByCSN:(id)arg5;
- (void)_getTrainingFacesByPerson:(id*)arg1 confirmedFaceCSNs:(id*)arg2 faceCSNsByPerson:(id*)arg3 faceCSNsByMigratedPerson:(id*)arg4 faceCSNsByQuickClassificationPerson:(id*)arg5 mergeCandidates:(id*)arg6 invalidMergeCandidates:(id*)arg7 rejectedPersonsByPerson:(id*)arg8 faceInFaceGroupByCSN:(id*)arg9 inFaces:(id)arg10 personCache:(id)arg11 cancelOrExtendTimeoutBlock:(id /* block */)arg12;
- (double)_keyFacePortraitFactorCoefficient;
- (double)_keyFaceSunglassesFactorCoefficient;
- (double)_keyFaceWeightingFactorCoefficient;
- (unsigned long long)_level0ClusterIdForFaceCSN:(unsigned long long)arg1 level0Clusters:(id)arg2;
- (id)_localIdentifiersOfUnverifiedPersonsAssociatedWithFaceGroups:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2;
- (void)_processNewlyClusteredFaceCropsInFaceGroups:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2;
- (id)_representativenessByFaceCSNFromFaces:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2;
- (bool)_resetFaceClusterSequenceNumberOfFacesInFetchResult:(id)arg1 inPhotoLibrary:(id)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)_ungroupFaceClusterSequenceNumbers:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)_updateFaceCSNsToAddByPerson:(id)arg1 faceCSNsToRemoveByPerson:(id)arg2 faceInFaceGroupByCSN:(id)arg3 faceCSNsByPersonLocalIdentifier:(id)arg4 faceCSNsByMigratedPersonLocalIdentifier:(id)arg5 personsToUpdate:(id)arg6;
- (id)_updatedFaceGroupByFGLocalIdentifierFromClusterCSNs:(id /* block */)arg1 fetchLimit:(unsigned long long)arg2;
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 candidateFaces:(id)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4;
- (void)buildPersonWithFaceClusterer:(id)arg1 keyFaceUpdateBlock:(id /* block */)arg2 context:(id)arg3 cancelOrExtendTimeoutBlock:(id /* block */)arg4;
- (bool)cleanupGroupedFacesWithClusterSequenceNumberSetToZero:(id /* block */)arg1 error:(id*)arg2;
- (bool)cleanupMergeCandidatesWithMinimumFaceGroupSize:(unsigned long long)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbers:(id /* block */)arg1 error:(id*)arg2;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
- (unsigned long long)countOfUnclusteredClusteringEligibleFaces;
- (void)dedupeGraphVerifiedPersonsInFaceGroup:(id)arg1 personCache:(id)arg2;
- (bool)deleteEmptyGroupsAndReturnError:(id*)arg1;
- (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(id /* block */)arg4;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(int)arg2;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(int)arg2 groupingIdentifiers:(id)arg3;
- (id)fetchFaceWithClusterSequenceNumber:(id)arg1 error:(id*)arg2;
- (id)fetchFaceWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchPersonWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id*)arg2;
- (id)identifyConflictingL0Clusters:(id)arg1 csnToRejectedPersonForNewlyClusteredFaces:(id)arg2 csnToConfirmedPersonForNewlyClusteredFaces:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(id /* block */)arg3;
- (bool)needsPersonBuilding;
- (id)otherFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(bool)arg3 updateBlock:(id /* block */)arg4;
- (bool)persistChangesToAlgorithmicFaceGroups:(id)arg1 l1ClustersByFaceCSNRepresentingFaceGroup:(id)arg2 l0ClustersByFaceCSNRepresentingFaceGroup:(id)arg3 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg4 faceCSNsOfUnclusteredFaces:(id)arg5 localIdentifiersOfUnclusteredFaces:(id)arg6 persistenceCompletionBlock:(id /* block */)arg7 cancelOrExtendTimeoutBlock:(id /* block */)arg8 error:(id*)arg9;
- (bool)personBuilderMergeCandidatesDisabled;
- (bool)removeAutoAssignedFacesFromVerifiedPersonsAndPrepareForPersonBuilding:(id)arg1 cancelOrExtendTimeoutBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)resetLibraryClustersWithCancelOrExtendTimeoutBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)setPersonBuilderMergeCandidatesDisabled:(bool)arg1;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id*)arg1;
- (bool)ungroupFaceClusterSequenceNumbers:(id)arg1 batchSizeForUnclusteringFaces:(unsigned long long)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 cancelOrExtendTimeoutBlock:(id /* block */)arg3 error:(id*)arg4;

@end
