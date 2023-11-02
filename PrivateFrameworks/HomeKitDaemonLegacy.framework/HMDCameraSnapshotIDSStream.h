
@interface HMDCameraSnapshotIDSStream : HMFObject <HMDIDSServiceDelegate, HMFLogging> {
    <HMDIDSService> * _idsProxyService;
    HMDCameraSnapshotSessionID * _sessionID;
    HMFOSTransaction * _snapshotStreamTransaction;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDIDSService> *idsProxyService;
@property (readonly) HMDCameraSnapshotSessionID *sessionID;
@property (readonly) HMFOSTransaction *snapshotStreamTransaction;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)idsProxyService;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 proxyService:(id)arg3;
- (id)logIdentifier;
- (id)sessionID;
- (id)snapshotStreamTransaction;
- (id)workQueue;

@end
