
@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver> {
    HMSoftwareUpdate * _availableUpdate;
    _HMContext * _context;
    <HMSoftwareUpdateManagerDelegate> * _delegate;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _started;
}

@property (readonly) HMSoftwareUpdate *availableUpdate;
@property (nonatomic, readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMSoftwareUpdateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isStarted, nonatomic) bool started;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__registerForMessages;
- (void)_handleFetch:(id)arg1;
- (void)_handleStartUpdate:(id)arg1;
- (void)_handleUpdatedAvailableUpdate:(id)arg1;
- (void)_reallyStartWithCompletionHandler:(id /* block */)arg1;
- (id)availableUpdate;
- (id)context;
- (id)delegate;
- (id)identifier;
- (id)init;
- (id)initWithContext:(id)arg1;
- (bool)isStarted;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)reconnect;
- (void)setAvailableUpdate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (void)updateAvailableUpdate:(id)arg1 completionHandler:(id /* block */)arg2;

@end
