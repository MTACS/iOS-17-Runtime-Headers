
@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _configuration;
    NSURL * _configurationURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _version;
}

@property (readonly, copy) NSDictionary *configuration;
@property (readonly, copy) NSURL *configurationURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)AMPNonDefaultBehaviourDisabledForRegion:(id)arg1;
- (id)_featuresFromDictionary:(id)arg1 withRegion:(id)arg2 osVersion:(id)arg3 deviceClass:(id)arg4;
- (id)_lock_featuresForRegion:(id)arg1;
- (id)_lock_featuresForRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3;
- (id)_lock_globalFeaturesForOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)_lock_region:(id)arg1;
- (id)_lock_regions;
- (bool)_lock_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4 suportedRegions:(bool)arg5;
- (id)_lock_unsupported_region:(id)arg1;
- (id)_lock_unsupported_regions;
- (id)_regionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3 supportedRegions:(bool)arg4;
- (bool)accountServiceEnabledForRegion:(id)arg1;
- (id)allowedRelayServerHostsForRegion:(id)arg1;
- (bool)applyServiceEnabledForRegion:(id)arg1;
- (id)applyServiceFeaturesForRegion:(id)arg1;
- (id)betaPaymentNetworkVersionsForRegion:(id)arg1;
- (id)betaPaymentNetworksForRegion:(id)arg1;
- (id)brokerURLForRegion:(id)arg1;
- (bool)browseProvisioningBankAppsEnabledForRegion:(id)arg1;
- (bool)buddyManualProvisioningEnabledForRegion:(id)arg1;
- (bool)buddyProvisioningEnabledForRegion:(id)arg1;
- (bool)cameraFirstProvisioningEnabledForRegion:(id)arg1;
- (id)configuration;
- (id)configurationURL;
- (id)contactFormatConfiguration;
- (id)credentialTypesRequiringDPANNotifications;
- (id)credentialTypesRequiringMetadata;
- (id)defaultServerURL;
- (bool)deviceCheckInDisabledForRegion:(id)arg1;
- (double)deviceCheckInIntervalForRegion:(id)arg1;
- (double)deviceUpgradeTaskEnablementPercentageForRegion:(id)arg1;
- (id)discoveryManifestURLForRegion:(id)arg1;
- (double)dynamicAssetPrefetchTimeIntervalForRegion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureWithType:(long long)arg1 inRegion:(id)arg2;
- (id)featuresForRegion:(id)arg1;
- (bool)hasFeatureRequiringRegistrationInRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3;
- (bool)hasFeaturesSupportedForRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3;
- (unsigned long long)hash;
- (id)heroImageManifestURLForRegion:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 url:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)manualProvisioningEnabledForRegion:(id)arg1;
- (id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)arg1;
- (id)marketGeoRegionNotificationTimeRangeForRegion:(id)arg1;
- (id)marketsURL;
- (unsigned long long)notificationAuthorizationPromptPresentationCount;
- (id)numberOfDaysBetweenMapsReprocessingForRegion:(id)arg1;
- (id)paymentServicesMerchantURLForRegion:(id)arg1;
- (id)paymentServicesURLForRegion:(id)arg1;
- (id)paymentSetupBrowsableProductTypesForRegion:(id)arg1;
- (id)paymentSetupFeaturedNetworksForRegion:(id)arg1;
- (double)paymentSetupFeaturesCacheUpdateIntervalForRegion:(id)arg1;
- (bool)paymentTransactionIconsEnabledForRegion:(id)arg1;
- (bool)peerPaymentEnabledForRegion:(id)arg1;
- (id)primaryFeaturedNetworkForRegion:(id)arg1;
- (double)provisioningEnablementPercentageForRegion:(id)arg1;
- (bool)quickAccessForMoreRemovePassEnabled;
- (bool)regionHasProvisioningEnablementPercentage:(id)arg1;
- (id)relayServerHostForRegion:(id)arg1;
- (id)relayServerHostsToHandleUniversalLinksForRegion:(id)arg1;
- (bool)remotePaymentsRequiredForVoiceover;
- (double)sharingMessageCacheTimeToLiveInterval;
- (bool)shouldEnableTransitServiceCheckInForRegion:(id)arg1;
- (id)stationCodeProvidersUsingLocalLookup;
- (id)supportedFeatureOfType:(long long)arg1 inRegion:(id)arg2 osVersion:(id)arg3 deviceClass:(id)arg4 didFailOSVersionRequirements:(bool*)arg5;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;
- (bool)suppressCardholderNameFieldForRegion:(id)arg1;
- (id)unsupportedProvisioningExtensions;
- (id)unsupportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)unsupportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;
- (id)unsupportedWebPaymentConfigurations;
- (bool)userCanResetCloudStoreApplePayViewForRegion:(id)arg1;

@end
