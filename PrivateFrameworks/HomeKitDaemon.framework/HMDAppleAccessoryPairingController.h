
@interface HMDAppleAccessoryPairingController : HMFObject <HMBCloudDatabaseDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver> {
    HMBLocalZone * _blobZone;
    <HMDAppleAccessoryPairingControllerDataSource> * _dataSource;
    HMDMutableHomeData * _homeData;
    HMDHomeManager * _homeManager;
    HMBLocalZone * _homeManagerZone;
    HMDLegacyCloudDatabase * _legacyCloudDatabase;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pairingHomes;
}

@property (retain) HMBLocalZone *blobZone;
@property (retain) <HMDAppleAccessoryPairingControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMDMutableHomeData *homeData;
@property HMDHomeManager *homeManager;
@property (retain) HMBLocalZone *homeManagerZone;
@property (retain) HMDLegacyCloudDatabase *legacyCloudDatabase;
@property (retain) NSMutableDictionary *pairingHomes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blobZone;
- (id)cleanUpBadHomeManagerRecordsForHomeManager:(id)arg1;
- (void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
- (void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;
- (void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;
- (id)dataSource;
- (void)generateModelChangesForHomeManager:(id)arg1 homeName:(id)arg2 pairingHomeUUID:(id)arg3 defaultRoomUUID:(id)arg4 homeZoneUUID:(id)arg5 accessory:(id)arg6 configurationAppIdentifier:(id)arg7 outBlobChanges:(id*)arg8 outLegacyChanges:(id*)arg9 outHomeManagerChanges:(id*)arg10;
- (bool)handleMessage:(id)arg1 from:(id)arg2;
- (id)homeData;
- (id)homeManager;
- (id)homeManagerZone;
- (id)initWithHomeManager:(id)arg1 dataSource:(id)arg2;
- (id)legacyCloudDatabase;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (bool)pairAccessory:(id)arg1 configurationAppIdentifier:(id)arg2;
- (id)pairingHomes;
- (void)removeControllerForZone:(id)arg1;
- (void)setBlobZone:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHomeData:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setHomeManagerZone:(id)arg1;
- (void)setLegacyCloudDatabase:(id)arg1;
- (void)setPairingHomes:(id)arg1;
- (void)start;

@end
