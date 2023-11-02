
@interface HMDDefaultResidentDeviceManagerRoarBackingStore : NSObject <HMDResidentDeviceManagerRoarBackingStore, HMFLogging> {
    HMDAppleAccountManager * _appleAccountManager;
    bool  _hasAnyResident;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    NSObject<OS_os_log> * _logger;
    NSMapTable * _residentDeviceByObjectID;
}

@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly) NSString *cloudChangeUpdateNotificationName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAnyResident;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) NSString *logIdentifier;
@property (readonly) NSMapTable *residentDeviceByObjectID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_addDeviceIdentifiersIfNecessary:(id)arg1 fromResidentDevice:(id)arg2;
- (id)_deviceFromModel:(id)arg1;
- (id)_deviceFromModel:(id)arg1 currentDevice:(id)arg2;
- (id)_deviceWithIdsDestination:(id)arg1 fromAccount:(id)arg2;
- (id)_deviceWithIdsIdentifier:(id)arg1 fromAccount:(id)arg2;
- (void)_mapResidentsToMKFResidents:(id)arg1 operation:(id /* block */)arg2 finished:(id /* block */)arg3;
- (bool)_shouldUpdateDeviceIdentifiersForResident:(id)arg1 fromResidentDevice:(id)arg2;
- (void)_updateHasAnyResident;
- (id)appleAccountManager;
- (id)cloudChangeUpdateNotificationName;
- (id)findResidents:(id)arg1 outHasResidents:(bool*)arg2;
- (id)handleCloudResidentChange:(id)arg1 currentResidents:(id)arg2 isCurrentDevicePrimaryResident:(bool)arg3 currentDevice:(id)arg4;
- (bool)hasAnyResident;
- (id)home;
- (id)initWithHome:(id)arg1 appleAccountManager:(id)arg2;
- (id)logIdentifier;
- (id)pruneDuplicateResidentModelsFrom:(id)arg1;
- (id)residentDeviceByObjectID;
- (bool)residentModel:(id)arg1 isTheSameAs:(id)arg2;
- (id)residentsRequiringReachabilityUpdate:(id)arg1;
- (void)setHasAnyResident:(bool)arg1;
- (void)updateIdentifiersForAvailableResidentDevices:(id)arg1;
- (void)updateReachabilityForResidents:(id)arg1;

@end
