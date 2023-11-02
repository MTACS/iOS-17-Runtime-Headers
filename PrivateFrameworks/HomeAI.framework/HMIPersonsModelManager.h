
@interface HMIPersonsModelManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSDictionary * _equivalencyTablesByHome;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _personsModelsByHome;
    NSDictionary * _torsoModelsByHome;
    NSDictionary * _torsoToFaceCropByHome;
    NSDictionary * _userDefinedPersonLinksByHome;
    HMFTimer * _watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *equivalencyTablesByHome;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *personsModelsByHome;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *torsoModelsByHome;
@property (readonly) NSDictionary *torsoToFaceCropByHome;
@property (readonly) NSDictionary *userDefinedPersonLinksByHome;
@property (readonly) HMFTimer *watchdogTimer;

+ (id)faceObservationFromTorsoprint:(id)arg1;
+ (id)getModelStoragePathForHome:(id)arg1 error:(id*)arg2;
+ (id)getModelStoragePathForModel:(id)arg1 error:(id*)arg2;
+ (id)getRootModelStoragePathWithError:(id*)arg1;
+ (id)getTorsoModelStoragePathForHomeUUID:(id)arg1 error:(id*)arg2;
+ (id)getTorsoSubdirectoryPathForHomeUUID:(id)arg1 error:(id*)arg2;
+ (id)getTorsoToFaceCropStoragePathForHomeUUID:(id)arg1 error:(id*)arg2;
+ (id)getTorsoprinterVersionStoragePathForHomeUUID:(id)arg1 error:(id*)arg2;
+ (id)getUserDefinedPersonLinksStoragePathForHomeUUID:(id)arg1 error:(id*)arg2;
+ (id)loadModelAtPath:(id)arg1 error:(id*)arg2;
+ (id)loadTorsoToFaceCrop:(id)arg1 error:(id*)arg2;
+ (id)loadTorsoprinterVersion:(id)arg1 error:(id*)arg2;
+ (id)loadUserDefinedPersonLinksForHomeUUID:(id)arg1 error:(id*)arg2;
+ (id)logCategory;
+ (id)minimumUUIDInEquivalencyCell:(id)arg1;
+ (bool)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
+ (bool)persistTorsoToFaceCrop:(id)arg1 forHomeUUID:(id)arg2 error:(id*)arg3;
+ (bool)persistTorsoprinterVersionForHomeUUID:(id)arg1 error:(id*)arg2;
+ (bool)persistUserDefinedPersonLinks:(id)arg1 forHomeUUID:(id)arg2 error:(id*)arg3;
+ (id)personsModelWithFaceObservationsByID:(id)arg1 error:(id*)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_hasTorsoprinterVersionChangedForHome:(id)arg1;
- (bool)_isTorsoFaceCropMapStale:(id)arg1;
- (void)_loadTorsoDataForHomeUUID:(id)arg1 intoTorsoModelsByHome:(id)arg2 torsoToFaceCropByHome:(id)arg3;
- (void)_reset;
- (bool)_resetStaleTorsoStateForHome:(id)arg1 torsoToFaceCropMap:(id)arg2;
- (id)buildEquivalencyMapForPersonsModels:(id)arg1 userDefinedPersonLinks:(id)arg2 error:(id*)arg3;
- (bool)buildPersonsModelForHomeUUID:(id)arg1 sourceUUID:(id)arg2 externalLibrary:(bool)arg3 faceObservationsByPerson:(id)arg4 error:(id*)arg5;
- (id)equivalencyCellForPerson:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3;
- (id)equivalencyTablesByHome;
- (id)faceCropFromTorsoModelForHomeUUID:(id)arg1 personUUID:(id)arg2 sourceUUID:(id)arg3;
- (id)homePersonsModelForHomeWithUUID:(id)arg1;
- (id)init;
- (id)linkedPredictionsForPrediction:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3;
- (bool)loadModelsWithError:(id*)arg1;
- (id)loadPersonsModelFromURL:(id)arg1 externalLibrary:(bool)arg2 homeUUID:(id)arg3 error:(id*)arg4;
- (id)modelURLsFromPath:(id)arg1 error:(id*)arg2;
- (id)personsModelWithFaceObservations:(id)arg1 error:(id*)arg2;
- (id)personsModelsByHome;
- (id)predictHomePersonFromFaceObservation:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3;
- (id)predictPersonFromFaceObservation:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3;
- (id)predictPersonFromTorsoObservation:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3;
- (bool)removePersonsModelForHomeUUID:(id)arg1 sourceUUID:(id)arg2 error:(id*)arg3;
- (void)reset;
- (id)summaryForHomeUUID:(id)arg1 error:(id*)arg2;
- (void)timerDidFire:(id)arg1;
- (id)torsoModelsByHome;
- (id)torsoToFaceCropByHome;
- (bool)updateTorsoModelForHome:(id)arg1 torsoAnnotations:(id)arg2 error:(id*)arg3;
- (id)userDefinedPersonLinksByHome;
- (id)watchdogTimer;

@end
