
@interface HMDUserActionPredictionManager : HMFObject <HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate> {
    HMBLocalZone * _localZone;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMDDatabaseZoneManager * _zoneManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMBLocalZone *localZone;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDatabaseZoneManager *zoneManager;

- (void).cxx_destruct;
- (id)_removeZones;
- (void)configure;
- (id)initWithHome:(id)arg1;
- (id)initWithZoneManager:(id)arg1 workQueue:(id)arg2;
- (id)localZone;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)removeZones;
- (void)setLocalZone:(id)arg1;
- (id)workQueue;
- (id)zoneManager;
- (void)zoneManagerDidStart:(id)arg1;
- (void)zoneManagerDidStop:(id)arg1;

@end
