
@interface HMNetworkConfigurationProfile : HMAccessoryProfile <HMFLogging, _HMNetworkConfigurationProfileDelegate> {
    <HMNetworkConfigurationProfileDelegate> * _delegate;
}

@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) NSArray *allowedHosts;
@property (readonly) long long credentialType;
@property (readonly) long long currentProtectionMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMNetworkConfigurationProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *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;
@property (nonatomic, readonly) bool hf_hasCurrentNetworkAccessViolation;
@property (nonatomic, readonly) bool hf_hasManagedNetworkCredential;
@property (nonatomic, readonly) bool hf_hasProtectionModeMismatch;
@property (nonatomic, readonly) bool hf_requiresManualWiFiReconfiguration;
@property (nonatomic, readonly) bool hf_requiresWiFiReconfiguration;
@property (nonatomic, readonly, copy) NSString *hf_targetProtectionModeDetailedLocalizedDescription;
@property (nonatomic, readonly, copy) NSString *hf_targetProtectionModeDetailedLocalizedTitle;
@property (nonatomic, readonly) bool hf_targetProtectionModeIsValid;
@property (nonatomic, readonly, copy) NSString *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;
@property (getter=isNetworkAccessRestricted, nonatomic, readonly) bool networkAccessRestricted;
@property (readonly) Class superclass;
@property (readonly) bool supportsWiFiReconfiguration;
@property (readonly) long long targetProtectionMode;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessViolation;
- (id)allowedHosts;
- (long long)credentialType;
- (long long)currentProtectionMode;
- (id)delegate;
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(bool)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(bool)arg7 credentialType:(long long)arg8;
- (bool)isNetworkAccessRestricted;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (void)networkConfigurationProfileDidUpdateAccessViolation:(id)arg1;
- (void)networkConfigurationProfileDidUpdateAllowedHosts:(id)arg1;
- (void)networkConfigurationProfileDidUpdateNetworkAccessMode:(id)arg1;
- (void)networkConfigurationProfileDidUpdateProtectionMode:(id)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiCredentialType:(id)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(id)arg1;
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id /* block */)arg1;
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)supportsWiFiReconfiguration;
- (long long)targetProtectionMode;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_localizedStringForPurpose;
+ (id)_validCurrentModesForTargetModes;
+ (bool)hf_currentProtectionMode:(long long)arg1 isValidForTargetProtectionMode:(long long)arg2;
+ (id)hf_detailedLocalizedDescriptionForTargetProtectionMode:(long long)arg1;
+ (id)hf_detailedLocalizedTitleForTargetProtectionMode:(long long)arg1;
+ (id)hf_localizedDescriptionForAllowedHostPurpose:(unsigned long long)arg1;
+ (id)hf_localizedDescriptionForCredentialType:(long long)arg1;
+ (id)hf_localizedTitleForTargetProtectionMode:(long long)arg1;
+ (bool)hf_targetProtectionModeIsValid:(long long)arg1;

- (id)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;
- (bool)hf_hasCurrentNetworkAccessViolation;
- (bool)hf_hasManagedNetworkCredential;
- (bool)hf_hasProtectionModeMismatch;
- (bool)hf_requiresManualWiFiReconfiguration;
- (bool)hf_requiresWiFiReconfiguration;
- (id)hf_targetProtectionModeDetailedLocalizedDescription;
- (id)hf_targetProtectionModeDetailedLocalizedTitle;
- (bool)hf_targetProtectionModeIsValid;
- (id)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;

@end
