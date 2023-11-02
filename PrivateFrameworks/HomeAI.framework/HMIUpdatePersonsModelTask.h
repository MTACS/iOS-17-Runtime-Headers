
@interface HMIUpdatePersonsModelTask : HMIHomeTask {
    <HMIPersonManagerDataSource> * _dataSource;
    bool  _externalLibrary;
    bool  _removeExcessFaceCrops;
    NSUUID * _sourceUUID;
}

@property (readonly) <HMIPersonManagerDataSource> *dataSource;
@property (getter=isExternalLibrary, readonly) bool externalLibrary;
@property (getter=shouldRemoveExcessFaceCrops, readonly) bool removeExcessFaceCrops;
@property (readonly) NSUUID *sourceUUID;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 dataSource:(id)arg4 externalLibrary:(bool)arg5 removeExcessFaceCrops:(bool)arg6;
- (bool)isExternalLibrary;
- (id)limitEnforcedSubsetFromPersons:(id)arg1;
- (id)logIdentifier;
- (void)mainInsideAutoreleasePool;
- (bool)shouldRemoveExcessFaceCrops;
- (id)sourceUUID;
- (void)subsampleFacesForPersons:(id)arg1 withFaceObservationsMap:(id)arg2 dataSource:(id)arg3 vnUUIDToFaceCropUUIDMap:(id)arg4;

@end
