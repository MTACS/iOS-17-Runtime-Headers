
@interface HMDHomeHindsightCloudShareManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFLogging> {
    NSUUID * _UUID;
    NSString * _logIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMDDatabaseZoneManager * _zoneManager;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDatabaseZoneManager *zoneManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)_startZoneManager;
- (void)_synchronize;
- (void)configure;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 zoneManager:(id)arg3;
- (id)logIdentifier;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)removeZones;
- (void)synchronize;
- (id)workQueue;
- (id)zoneManager;
- (bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;
- (void)zoneManagerDidStart:(id)arg1;

@end
