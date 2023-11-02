
@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDHomeManager * _homeManager;
    NSString * _progressState;
    unsigned long long  _residentProvisioningStatus;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (readonly, copy) HMFMessageDestination *messageDestination;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) NSString *progressState;
@property (readonly) unsigned long long residentProvisioningStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)beginPairingWithCompletionHandler:(id /* block */)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)progressState;
- (void)resetConfig;
- (unsigned long long)residentProvisioningStatus;
- (void)setHomeManager:(id)arg1;
- (void)setProgressState:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
