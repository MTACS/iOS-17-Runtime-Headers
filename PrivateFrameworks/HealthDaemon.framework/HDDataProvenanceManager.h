
@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {
    _Atomic bool  _defaultsLoaded;
    NSString * _localProductType;
    NSString * _localSourceVersion;
    NSString * _localSystemBuild;
    HDDatabaseValueCache * _originProvenanceByPersistentID;
    HDDatabaseValueCache * _persistentIDsByProvenanceKey;
    HDProfile * _profile;
    NSLock * _propertyLock;
    NSNumber * _propertyLock_deviceNoneID;
    NSNumber * _propertyLock_localDeviceID;
    NSNumber * _propertyLock_localSourceID;
    HDContributorReference * _propertyLock_noneContributorReference;
    HDContributorReference * _propertyLock_primaryUserContributorReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultLocalDataProvenance;
- (id)defaultLocalDataProvenanceWithDeviceEntity:(id)arg1;
- (id)description;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3;
- (id)originProvenanceForPersistentID:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)provenanceEntityForProvenance:(id)arg1 error:(id*)arg2;
- (id)provenanceEntityForProvenance:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
