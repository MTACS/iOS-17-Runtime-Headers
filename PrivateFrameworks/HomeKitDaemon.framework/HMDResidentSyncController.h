
@interface HMDResidentSyncController : NSObject <HMFLogging, HMFMessageReceiver> {
    HMDManagedObjectCodingModel * _codingModel;
    HMDManagedObjectContext * _context;
    HMDHome * _home;
    NSUUID * _homeUUID;
    NSNotificationCenter * _notificationCenter;
    HMFVersion * _schemaVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMFVersion *schemaVersion;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)changeToken:(id)arg1 isAheadOf:(id)arg2;
- (id)decodeToken:(id)arg1 error:(id*)arg2;
- (id)dispatchContextForMessage:(id)arg1;
- (id)encodeToken:(id)arg1 error:(id*)arg2;
- (id)initWithHome:(id)arg1 codingModel:(id)arg2 notificationCenter:(id)arg3 persistence:(id)arg4;
- (id)logIdentifier;
- (id)messageTargetUUID;
- (id)schemaVersion;

@end
