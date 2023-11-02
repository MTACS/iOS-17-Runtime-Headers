
@interface HMDCameraSnapshotIDSRelay : HMFObject <HMDIDSServiceDelegate, HMFLogging> {
    <HMDIDSService> * _idsStreamService;
    NSString * _logIdentifier;
    NSUUID * _sessionID;
    HMFOSTransaction * _snapshotRelayTransaction;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDIDSService> *idsStreamService;
@property (readonly) NSString *logIdentifier;
@property (readonly) NSUUID *sessionID;
@property (readonly) HMFOSTransaction *snapshotRelayTransaction;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)idsStreamService;
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3;
- (id)logIdentifier;
- (id)sessionID;
- (id)snapshotRelayTransaction;
- (id)workQueue;

@end
