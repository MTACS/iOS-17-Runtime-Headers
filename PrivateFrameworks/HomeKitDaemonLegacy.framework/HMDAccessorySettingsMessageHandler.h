
@interface HMDAccessorySettingsMessageHandler : HMFObject <HMDAccessorySettingsMessageHandler, HMFLogging, HMFMessageReceiver> {
    <HMDAccessorySettingsMessageController> * _messageController;
    HMFMessageDispatcher * _messageDispatcher;
    HMDUserMessagePolicy * _onlyOwnerAllowedUserPolicy;
    NSMapTable * _settingMessageMap;
    HMDUserMessagePolicy * _sharedAdminAllowedUserPolicy;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDAccessorySettingsMessageController> *messageController;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (retain) HMDUserMessagePolicy *onlyOwnerAllowedUserPolicy;
@property (readonly) NSMapTable *settingMessageMap;
@property (retain) HMDUserMessagePolicy *sharedAdminAllowedUserPolicy;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_decodeUpdateValueMessagePayload:(id)arg1 outValue:(id*)arg2;
- (void)_handleAddConstraint:(id)arg1;
- (void)_handleRemoveConstraint:(id)arg1;
- (void)_handleReplaceConstraints:(id)arg1;
- (void)_handleReplaceConstraintsForKeyPath:(id)arg1;
- (void)_handleSettingUpdateValue:(id)arg1;
- (void)_handleSettingUpdateValueByKeyPath:(id)arg1;
- (void)_handleUpdatedConstraints:(id)arg1;
- (void)configureForSetting:(id)arg1 allowSharedAdminEditConstraints:(bool)arg2;
- (void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)messageController;
- (id)messageDispatcher;
- (id)messageMapperForSetting:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)notifyOfUpdatedValue:(id)arg1 settingKeyPath:(id)arg2;
- (id)onlyOwnerAllowedUserPolicy;
- (bool)processReplaceConstraintMessage:(id)arg1 outConstraintsToAdd:(id*)arg2 outConstraintIdsToRemove:(id*)arg3;
- (void)registerForMessages;
- (void)registerForSettingMessages:(id)arg1;
- (void)relayReplaceConstraints:(id)arg1 constraintIdsToRemove:(id)arg2 keyPath:(id)arg3 destination:(id)arg4 completion:(id /* block */)arg5;
- (void)relayUpdateValue:(id)arg1 keyPath:(id)arg2 destination:(id)arg3 completion:(id /* block */)arg4;
- (void)setMessageDispatcher:(id)arg1;
- (void)setOnlyOwnerAllowedUserPolicy:(id)arg1;
- (void)setSharedAdminAllowedUserPolicy:(id)arg1;
- (id)settingMessageMap;
- (id)sharedAdminAllowedUserPolicy;
- (void)unconfigureFromSetting:(id)arg1;
- (id)workQueue;

@end
