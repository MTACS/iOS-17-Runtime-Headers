
@interface _HMCameraControl : NSObject <HMFLogging, HMFMessageReceiver> {
    _HMCameraProfile * _cameraProfile;
    _HMContext * _context;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _profileUniqueIdentifier;
}

@property _HMCameraProfile *cameraProfile;
@property (retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)cameraProfile;
- (id)context;
- (id)home;
- (id)initWithCameraProfile:(id)arg1 profileUniqueIdentifier:(id)arg2;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)profileUniqueIdentifier;
- (void)setCameraProfile:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHome:(id)arg1;

@end
