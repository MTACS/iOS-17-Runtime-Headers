
@interface HMDTargetControlManager : HMFObject <HMFLogging> {
    NSMutableArray * _activeControlServices;
    NSMutableArray * _configuredControllers;
    NSMutableArray * _eventReceivers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logID;
    HMDSiriServer * _siriServer;
    HMDAccessory * _targetAccessory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableArray *activeControlServices;
@property (nonatomic, readonly) NSMutableArray *configuredControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *eventReceivers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, retain) HMDSiriServer *siriServer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDAccessory *targetAccessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__accessoryAdded:(id)arg1;
- (void)__accessoryConfigured:(id)arg1;
- (void)__accessoryConnected:(id)arg1;
- (void)__accessoryDisconnected:(id)arg1;
- (void)__accessoryNameUpdated:(id)arg1;
- (void)__accessoryRemoved:(id)arg1;
- (void)__accessoryUnconfigured:(id)arg1;
- (void)__activeSelectionChanged:(id)arg1;
- (void)__activeSelectionReset:(id)arg1;
- (void)__characteristicsEventsReceived:(id)arg1;
- (void)__controllerRefreshedConfiguration:(id)arg1;
- (id)__getOrCreateEventReceiver:(id)arg1;
- (id)__selectButtonConfiguration:(id)arg1 receiver:(id)arg2;
- (void)__serviceRemoved:(id)arg1;
- (void)__targetAccessoryConfiguredForControl:(id)arg1;
- (void)__targetAccessoryUnconfiguredForControl:(id)arg1;
- (void)_addController:(id)arg1;
- (void)_handleButtonEvent:(id)arg1 fromControlService:(id)arg2;
- (void)_handleControllerDisconnected:(id)arg1;
- (void)_handleTargetControlServiceDeselection:(id)arg1;
- (void)_handleTargetControlServiceSelection:(id)arg1;
- (void)_removeController:(id)arg1;
- (void)_targetAccessoryConfiguredWithController:(id)arg1;
- (void)_targetAccessoryRefreshConfigurationWithController:(id)arg1 userInfo:(id)arg2;
- (void)_targetAccessoryUnconfiguredWithController:(id)arg1;
- (id)activeControlServices;
- (void)addControlService:(id)arg1;
- (void)addReceiver:(id)arg1;
- (void)addTargetControllers:(id)arg1;
- (id)configuredControllers;
- (id)eventReceivers;
- (id)init;
- (id)initWithTargetAccessory:(id)arg1 controllers:(id)arg2;
- (void)invalidate;
- (id)logID;
- (id)logIdentifier;
- (void)removeControlService:(id)arg1;
- (void)removeReceiver:(id)arg1;
- (void)setSiriServer:(id)arg1;
- (id)siriServer;
- (id)targetAccessory;
- (id)workQueue;

@end
