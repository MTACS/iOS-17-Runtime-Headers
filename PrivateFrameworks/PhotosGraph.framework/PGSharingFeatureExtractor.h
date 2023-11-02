
@interface PGSharingFeatureExtractor : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
}

+ (id)extractFeatureNodesFromAsset:(id)arg1 andPersonLocalIdentifiers:(id)arg2 inGraph:(id)arg3;
+ (id)featuresFilename;
+ (void)invalidateCacheForPhotoLibrary:(id)arg1;
+ (id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)arg1;
+ (id)recordsFilename;

- (void).cxx_destruct;
- (id)_loadAllPersistedSharingRecordsFromDisk;
- (id)extractFeaturesFromSharingRecords:(id)arg1 withGraph:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)extractSharingRecordsWithGraph:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (bool)persistFeatures:(id)arg1;
- (bool)persistSharingRecords:(id)arg1;
- (id)persistedFeatures;
- (id)persistedSharingRecords;
- (id)persistedSharingRecordsForType:(unsigned long long)arg1;
- (void)prefetchAssetInSharingRecords:(id)arg1;

@end
