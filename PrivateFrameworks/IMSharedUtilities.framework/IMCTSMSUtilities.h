
@interface IMCTSMSUtilities : NSObject

+ (id)IMCountryCodeForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)IMCountryCodeForSimSlot:(long long)arg1;
+ (bool)IMIsEagerUploadEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSDefaultEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSGroupTextReplicationSupportedForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)IMMMSMaximumDurationWithPreset:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMMSSupportsH264VideoForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMMessagesFilteringSettingForPreferedSubscription;
+ (id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+ (unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMReadDisablePreviewTranscodingQualityOnWRMCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMReadMMSUserOverrideForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (bool)IMShouldShowMMSEmailAddress:(id)arg1 simID:(id)arg2;
+ (void)IMSynchronizeMMSCapabilityToWatch:(bool)arg1;
+ (void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+ (id)IMUniqueIdentifierForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long*)arg1 cellSize:(unsigned long long*)arg2 serverConfigurationBag:(id)arg3 phoneNumber:(id)arg4 simID:(id)arg5;
+ (bool)MMSRestrictedModeEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 reset:(bool)arg3;
+ (bool)SMSAllowCaseSenstiveSenderIDForPhoneNumber:(id)arg1;
+ (id)carrierBundleValueForKeyHierarchy:(id)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
+ (id)carrierNameForPhoneNumber:(id)arg1;

@end
