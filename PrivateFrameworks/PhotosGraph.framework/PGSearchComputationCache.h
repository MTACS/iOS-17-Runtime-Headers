
@interface PGSearchComputationCache : NSObject {
    NSMutableDictionary * _curationInformationByNodeUUID;
    NSMutableDictionary * _locationInformationByNodeUUID;
    NSMutableDictionary * _momentAssetPairsByNodeUUID;
    NSURL * _persistentStoreURL;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) NSMutableDictionary *curationInformationByNodeUUID;
@property (nonatomic, readonly) NSMutableDictionary *locationInformationByNodeUUID;
@property (nonatomic, readonly) NSMutableDictionary *momentAssetPairsByNodeUUID;
@property (nonatomic, readonly) NSURL *persistentStoreURL;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)persistentStoreURLWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)curationInformationByNodeUUID;
- (id)curationInformationForNode:(id)arg1;
- (id)initWithPersistentStoreURL:(id)arg1 photoLibrary:(id)arg2;
- (void)invalidateCache;
- (id)keyAssetLocalIdentifierForNodeIdentifier:(id)arg1 withAssociatedMomentUUIDs:(id)arg2;
- (id)locationInformationByNodeUUID;
- (id)locationInformationForLocationNode:(id)arg1 locationMask:(unsigned long long)arg2;
- (bool)momentAssetPairs:(id)arg1 areValidWithAssociatedMomentUUIDs:(id)arg2;
- (id)momentAssetPairsByNodeUUID;
- (id)persistentStoreURL;
- (id)photoLibrary;
- (void)save;
- (void)setCurationInformation:(id)arg1 forNode:(id)arg2;
- (void)setKeyAssetLocalIdentifier:(id)arg1 forNodeIdentifier:(id)arg2 withAssociatedMomentUUID:(id)arg3;
- (void)setLocationInformation:(id)arg1 forLocationNode:(id)arg2 locationMask:(unsigned long long)arg3;

@end
