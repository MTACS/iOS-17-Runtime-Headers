
@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
    _PFZipFileArchive * _baselineArchive;
    PFUbiquityLocation * _baselineStagingLocation;
    PFUbiquityBaselineMetadata * _metadata;
    NSManagedObjectModel * _model;
    NSString * _modelVersionHash;
    NSPersistentStore * _store;
    NSString * _storeFilename;
    NSMutableDictionary * _storeFilenameToData;
    NSString * _storeName;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4;
- (bool)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (bool)moveToPermanentLocation:(id*)arg1;
- (bool)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end
