
@interface HMDCloudCache : HMFObject {
    HMDBackingStore * _backingStore;
    HMDCloudZone * _homeDataInformation;
    HMDCloudHomeManagerZone * _homeManagerZone;
    NSMutableDictionary * _homeZones;
    HMDCloudLegacyZone * _legacyZone;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDCloudMetadataZone * _metadataZone;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDBackingStore *backingStore;
@property (nonatomic, retain) CKServerChangeToken *databaseServerChangeToken;
@property (nonatomic, retain) HMDCloudZone *homeDataInformation;
@property (nonatomic, retain) HMDCloudHomeManagerZone *homeManagerZone;
@property (nonatomic, retain) NSMutableDictionary *homeZones;
@property (nonatomic, retain) HMDCloudLegacyZone *legacyZone;
@property (nonatomic, retain) HMDCloudMetadataZone *metadataZone;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_createZones:(id)arg1 completion:(id /* block */)arg2;
- (id)_findStoreCacheZone:(id)arg1 byName:(id)arg2;
- (id)allHomeZones;
- (id)backingStore;
- (void)createAndFetchZonesFromBackingStore:(id /* block */)arg1;
- (id)databaseServerChangeToken;
- (void)deleteAllZones;
- (void)deleteHomeZoneWithName:(id)arg1;
- (id)homeDataInformation;
- (id)homeManagerZone;
- (bool)homeZoneExists:(id)arg1;
- (id)homeZoneWithName:(id)arg1;
- (void)homeZoneWithName:(id)arg1 owner:(id)arg2 completion:(id /* block */)arg3;
- (id)homeZones;
- (id)init;
- (id)initWithBackingStore:(id)arg1 workQueue:(id)arg2;
- (id)legacyZone;
- (id)metadataZone;
- (void)persistDatabaseServerChangeToken;
- (void)setBackingStore:(id)arg1;
- (void)setDatabaseServerChangeToken:(id)arg1;
- (void)setHomeDataInformation:(id)arg1;
- (void)setHomeManagerZone:(id)arg1;
- (void)setHomeZones:(id)arg1;
- (void)setLegacyZone:(id)arg1;
- (void)setMetadataZone:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
