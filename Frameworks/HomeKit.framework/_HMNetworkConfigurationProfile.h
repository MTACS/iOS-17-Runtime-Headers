
@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile <HMFLogging> {
    HMAccessoryNetworkAccessViolation * _accessViolation;
    NSArray * _allowedHosts;
    long long  _credentialType;
    long long  _currentProtectionMode;
    <_HMNetworkConfigurationProfileDelegate> * _delegate;
    bool  _networkAccessRestricted;
    bool  _supportsWiFiReconfiguration;
    long long  _targetProtectionMode;
}

@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) NSArray *allowedHosts;
@property (readonly) long long credentialType;
@property (readonly) long long currentProtectionMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HMNetworkConfigurationProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNetworkAccessRestricted, readonly) bool networkAccessRestricted;
@property (readonly) Class superclass;
@property (readonly) bool supportsWiFiReconfiguration;
@property (readonly) long long targetProtectionMode;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAccessViolationUpdated:(id)arg1;
- (void)_handleHostsUpdated:(id)arg1;
- (void)_handleWiFiReconfigurationUpdated:(id)arg1;
- (void)_notifyDelegateOfNetworkAccessModeChanged;
- (void)_notifyDelegateOfUpdatedAccessViolation;
- (void)_notifyDelegateOfUpdatedAllowedHosts;
- (void)_notifyDelegateOfUpdatedProtectionMode;
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
- (void)_registerNotificationHandlers;
- (id)accessViolation;
- (id)allowedHosts;
- (long long)credentialType;
- (long long)currentProtectionMode;
- (id)delegate;
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(bool)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(bool)arg7 credentialType:(long long)arg8;
- (bool)isNetworkAccessRestricted;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id /* block */)arg1;
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAccessViolation:(id)arg1;
- (void)setAllowedHosts:(id)arg1;
- (void)setCredentialType:(long long)arg1;
- (void)setCurrentProtectionMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNetworkAccessRestricted:(bool)arg1;
- (void)setSupportsWiFiReconfiguration:(bool)arg1;
- (void)setTargetProtectionMode:(long long)arg1;
- (bool)supportsWiFiReconfiguration;
- (long long)targetProtectionMode;

@end
