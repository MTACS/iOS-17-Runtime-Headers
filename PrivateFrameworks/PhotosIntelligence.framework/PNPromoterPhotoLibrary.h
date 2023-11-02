
@interface PNPromoterPhotoLibrary : NSObject <PNPhotoLibraryProtocol> {
    bool  _includesPets;
    PHPhotoLibrary * _photoLibrary;
    NSDictionary * _rawClusters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesPets;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSDictionary *rawClusters;
@property (readonly) Class superclass;

+ (id)_defaultAssetPropertySets;
+ (id)_defaultFacePropertySets;
+ (id)_phFaceSortDescriptors;
+ (id)_phPeopleSortDescriptors;

- (void).cxx_destruct;
- (id)_defaultAssetFetchOptions;
- (id)_defaultFetchOptions;
- (double)_progressFromWorkerStatesDictionary:(id)arg1;
- (bool)includesPets;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 rawClusters:(id)arg2 includesPets:(bool)arg3;
- (id)photoLibrary;
- (float)pn_faceProcessingProgress;
- (id)pn_fetchAssetsForFaceGroup:(id)arg1;
- (id)pn_fetchAssetsForFaceLocalIdentifiers:(id)arg1;
- (id)pn_fetchAssetsForPerson:(id)arg1;
- (id)pn_fetchAssetsInMoment:(id)arg1;
- (id)pn_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pn_fetchFaceGroups;
- (id)pn_fetchFaceGroupsForPerson:(id)arg1;
- (id)pn_fetchFacesForFaceGroup:(id)arg1;
- (id)pn_fetchFacesForPerson:(id)arg1;
- (id)pn_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pn_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pn_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pn_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pn_fetchMoments;
- (id)pn_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchMomentsForPerson:(id)arg1;
- (id)pn_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pn_fetchPersonsInMoment:(id)arg1;
- (id)pn_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pn_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pn_lastAssetDate;
- (unsigned long long)pn_numberOfFacesWithFaceprints;
- (bool)pn_performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (id)pn_persistentStorageDirectoryURL;
- (id)rawClusters;
- (void)setPhotoLibrary:(id)arg1;
- (void)setRawClusters:(id)arg1;

@end
