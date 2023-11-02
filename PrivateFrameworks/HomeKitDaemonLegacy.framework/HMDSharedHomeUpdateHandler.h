
@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFDumpState, HMFLogging> {
    bool  _firstFetchComplete;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _pendingRequestDataFromResident;
    HMDSharedHomeUpdateSession * _pendingRequestDataFromResidentSession;
    bool  _suspended;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstFetchComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic) bool pendingRequestDataFromResident;
@property (nonatomic, retain) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession;
@property (readonly) Class superclass;
@property (getter=isSuspended) bool suspended;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_evaluateNeedForSync;
- (void)_receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(bool)arg2 completion:(id /* block */)arg3;
- (void)configureWithHome:(id)arg1;
- (void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2;
- (id)dumpState;
- (bool)firstFetchComplete;
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;
- (id)home;
- (bool)isSuspended;
- (id)logIdentifier;
- (void)pause;
- (bool)pendingRequestDataFromResident;
- (id)pendingRequestDataFromResidentSession;
- (void)receivedHomeDataFromSourceVersion:(id)arg1 forceUpdateVersion:(bool)arg2 completion:(id /* block */)arg3;
- (void)registerForMessages;
- (void)requestHomeDataSync;
- (void)residentsChanged:(id)arg1;
- (void)resume;
- (void)setFirstFetchComplete:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setPendingRequestDataFromResident:(bool)arg1;
- (void)setPendingRequestDataFromResidentSession:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
