
@interface HMDCompositeSettingsOwnerToDatabaseAdapterRegistry : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _settingOwnerToDatabaseAdapterTable;
    NSMapTable * _settingOwnerToZoneManagerTable;
}

- (void).cxx_destruct;
- (void)createDatabaseAdapterIfNotExistForUUID:(id)arg1 homeUUID:(id)arg2 accessory:(id)arg3 workQueue:(id)arg4 zoneName:(id)arg5;
- (id)databaseAdapterForUUID:(id)arg1;
- (id)init;
- (void)removeZoneWithZoneName:(id)arg1 uuid:(id)arg2 workQueue:(id)arg3;

@end
