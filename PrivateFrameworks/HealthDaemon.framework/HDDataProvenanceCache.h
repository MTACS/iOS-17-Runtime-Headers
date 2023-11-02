
@interface HDDataProvenanceCache : NSObject {
    NSMutableDictionary * _codableObjectCollectionsByProvenance;
    NSMutableDictionary * _codableSourcesByID;
    NSMutableDictionary * _contributorByReferenceCache;
    NSMutableDictionary * _deviceByPersistentIDCache;
    NSMutableDictionary * _deviceUUIDBytesByID;
    HDProfile * _profile;
    NSMutableDictionary * _provenanceByID;
    HDDataProvenanceManager * _provenanceManager;
    NSMutableDictionary * _sourceByPersistentIDCache;
    HDEntityEncoder * _sourceEncoder;
    NSMutableDictionary * _sourceRevisionByDataProvenanceIDCache;
    NSMutableDictionary * _sourceRevisionsDictionaryBySourceCache;
    HDDatabaseTransaction * _transaction;
}

- (void).cxx_destruct;
- (id)allCodableObjectCollections;
- (id)allCodableObjectCollectionsByProvenance;
- (void)clearCodableObjectCollections;
- (id)codableObjectCollectionForProvenance:(id)arg1;
- (id)codableProvenanceWithProvenance:(id)arg1;
- (id)codableSourceWithProvenance:(id)arg1;
- (id)contributorForReference:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)deviceForPersistentID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)deviceUUIDBytesWithProvenance:(id)arg1;
- (id)initWithProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3;
- (id)provenanceWithID:(id)arg1;
- (id)sourceRevisionForProvenanceID:(id)arg1 dataProvenance:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
