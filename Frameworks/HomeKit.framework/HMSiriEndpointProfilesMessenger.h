
@interface HMSiriEndpointProfilesMessenger : NSObject <HMFLogging> {
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)messageTargetUUIDWithHomeUUID:(id)arg1;

- (void).cxx_destruct;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (void)sendApplyOnboardingSelectionsRequestWithAccessoryUUID:(id)arg1 onboardingSelections:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendDeleteSiriHistoryRequestWithAccessoryUUID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
