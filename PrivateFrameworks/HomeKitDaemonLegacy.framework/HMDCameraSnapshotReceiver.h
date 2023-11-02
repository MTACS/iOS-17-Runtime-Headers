
@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMDDevice * _remoteDevice;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    HMDCameraSnapshotSessionID * _sessionID;
    HMDSnapshotFile * _snapshotFile;
    HMDSnapshotRequestHandler * _snapshotRequestHandler;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDDevice *remoteDevice;
@property (nonatomic, readonly) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (nonatomic, readonly) HMDCameraSnapshotSessionID *sessionID;
@property (nonatomic, retain) HMDSnapshotFile *snapshotFile;
@property (nonatomic, readonly) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_sendConfirmationToResident:(id /* block */)arg1;
- (void)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_sendRequestWithTierType:(unsigned long long)arg1 toResident:(id /* block */)arg2;
- (id)accessory;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegateQueue:(id)arg4 uniqueIdentifier:(id)arg5 snapshotRequestHandler:(id)arg6 residentMessageHandler:(id)arg7 remoteDevice:(id)arg8;
- (id)logIdentifier;
- (id)remoteDevice;
- (id)residentMessageHandler;
- (id)sessionID;
- (void)setAccessory:(id)arg1;
- (void)setSnapshotFile:(id)arg1;
- (id)snapshotFile;
- (id)snapshotRequestHandler;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
