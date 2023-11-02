
@interface HMDUnassociatedWACAccessory : HMDUnassociatedAccessory <HMFLogging, HMFTimerDelegate> {
    id /* block */  _completionHandler;
    <HMDWACAccessoryConfigurationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HMFTimer * _handoffExpirationTimer;
    HMDUnassociatedAccessory * _postWACAccessory;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
    <HMDWACDevice> * _wacDevice;
    NSString * wacDeviceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDWACAccessoryConfigurationDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (setter=setWACDevice:, retain) <HMDWACDevice> *wacDevice;
@property (readonly) NSString *wacDeviceID;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_abort:(id /* block */)arg1;
- (void)_configureDevice;
- (void)_configureDeviceCompleted:(id)arg1;
- (void)_postWACMatchTimeout;
- (void)_postWACMatchingAccessoryFound:(id)arg1;
- (void)_requestUserPermission;
- (void)_userPermissionResponse:(bool)arg1;
- (void)_waitForPostWACMatch;
- (void)cancelConfigurationWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 wacDevice:(id)arg5;
- (id)logIdentifier;
- (void)setDelegate:(id)arg1 withQueue:(id)arg2;
- (void)setWACDevice:(id)arg1;
- (void)startConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;
- (unsigned long long)transportTypes;
- (void)updateWithMatchingUnassociatedAccessory:(id)arg1;
- (id)wacDevice;
- (id)wacDeviceID;

@end
