
@protocol PNPhotoLibraryProtocol <NSObject>

@required

- (float)pn_faceProcessingProgress;
- (<PNFetchResultProtocol> *)pn_fetchAssetsForFaceGroup:(id <PNFaceGroupProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchAssetsForFaceLocalIdentifiers:(id <NSFastEnumeration>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchAssetsForPerson:(id <PNPersonProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchAssetsInMoment:(id <PNMomentProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (<PNFetchResultProtocol> *)pn_fetchCandidatePersonsForPerson:(id <PNPersonProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchFaceGroups;
- (<PNFetchResultProtocol> *)pn_fetchFaceGroupsForPerson:(id <PNPersonProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchFacesForFaceGroup:(id <PNFaceGroupProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchFacesForPerson:(id <PNPersonProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchFacesForPerson:(id <PNPersonProtocol>)arg1 inMoment:(id <PNMomentProtocol>)arg2;
- (<PNFetchResultProtocol> *)pn_fetchFacesForPersonLocalIdentifiers:(NSArray *)arg1 inMoment:(id <PNMomentProtocol>)arg2;
- (NSDictionary *)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id <PNFetchResultProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchFacesWithLocalIdentifiers:(NSArray *)arg1;
- (NSSet *)pn_fetchInvalidAssetIdentifiersForCommonComparison;
- (<PNFetchResultProtocol> *)pn_fetchInvalidCandidatePersonsForPerson:(id <PNPersonProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchMoments;
- (<PNFetchResultProtocol> *)pn_fetchMomentsForAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (<PNFetchResultProtocol> *)pn_fetchMomentsForPerson:(id <PNPersonProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchMomentsWithLocalIdentifiers:(NSArray *)arg1;
- (NSDictionary *)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id <PNFetchResultProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchPersonsInMoment:(id <PNMomentProtocol>)arg1;
- (<PNFetchResultProtocol> *)pn_fetchPersonsWithLocalIdentifiers:(NSArray *)arg1;
- (<PNFetchResultProtocol> *)pn_fetchPersonsWithType:(unsigned long long)arg1;
- (NSDate *)pn_lastAssetDate;
- (unsigned long long)pn_numberOfFacesWithFaceprints;
- (bool)pn_performChangesAndWait:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id*
- (NSURL *)pn_persistentStorageDirectoryURL;

@end
