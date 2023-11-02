
@interface SFAuthenticationManager : NSObject <SFAutoUnlockManagerDelegate, SFUnlockClientProtocol> {
    SFAutoUnlockManager * _autoUnlockManager;
    <SFAuthenticationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) SFAutoUnlockManager *autoUnlockManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAuthenticationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticateForType:(unsigned long long)arg1;
- (id)autoUnlockManager;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)cancelAuthenticationSessionWithID:(id)arg1;
- (bool)checkDynamicStoreForType:(unsigned long long)arg1;
- (void)completedAuthenticationSessionWithID:(id)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (bool)declinedToEnableForType:(unsigned long long)arg1;
- (id)delegate;
- (id)disableForType:(unsigned long long)arg1 device:(id)arg2;
- (id)dynamicStorePathForType:(unsigned long long)arg1;
- (id)enableForType:(unsigned long long)arg1 device:(id)arg2 passcode:(id)arg3;
- (void)enabledAuthenticationSessionWithID:(id)arg1;
- (void)enabledDevice:(id)arg1;
- (void)failedAuthenticationSessionWithID:(id)arg1 error:(id)arg2;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)failedToEnableDeviceForSessionID:(id)arg1 error:(id)arg2;
- (void)failedUnlockWithError:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (bool)isEnabledForType:(unsigned long long)arg1;
- (bool)isSupportedForType:(unsigned long long)arg1;
- (void)keyDeviceLocked:(id)arg1;
- (void)listEligibleDevicesForType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)manager:(id)arg1 beganAttemptWithDevice:(id)arg2;
- (void)manager:(id)arg1 completedUnlockWithDevice:(id)arg2;
- (void)manager:(id)arg1 failedAttemptWithError:(id)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)startedAuthenticationSessionWithID:(id)arg1;

@end
