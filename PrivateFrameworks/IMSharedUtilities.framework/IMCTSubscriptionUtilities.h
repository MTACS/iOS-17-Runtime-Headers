
@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate> {
    NSMutableDictionary * _cachedCarrierSettings;
    CoreTelephonyClient * _coreTelephonyClient;
    IMCTXPCServiceSubscriptionInfo * _ctSubscriptionInfo;
    IDSPhoneSubscriptionSelector * _phoneSubscriptionSelector;
    NSNumber * _wrmCellScore;
    NSNumber * _wrmNetworkPreference;
}

@property (nonatomic, retain) NSMutableDictionary *cachedCarrierSettings;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic, readonly, copy) NSString *ctPhoneNumber;
@property (nonatomic, readonly) NSArray *ctServiceSubscriptions;
@property (nonatomic, retain) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector;
@property (nonatomic, readonly, copy) NSArray *registeredPhoneNumbers;
@property (nonatomic, readonly, copy) NSArray *registeredSIMIDs;
@property (nonatomic, readonly, copy) NSArray *registeredSubscriptionSlotIDs;
@property (readonly) Class superclass;
@property (retain) NSNumber *wrmCellScore;
@property (retain) NSNumber *wrmNetworkPreference;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_CTSIMSFromPhoneSubscriptions:(id)arg1;
- (id)_cachedCarrierKeyForKeyHierarchy:(id)arg1 bundleType:(long long)arg2;
- (id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)arg1;
- (id)_createSettingsDictionaryForUniqueID:(id)arg1;
- (id)_getCachedCarrierSettingValueForBundleKey:(id)arg1 uniqueID:(id)arg2;
- (id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 bundleType:(long long)arg2 forContext:(id)arg3 defaultValue:(id)arg4;
- (id)_getCarrierSettingsForUniqueID:(id)arg1;
- (id)_iMessageService;
- (void)_registerForWRM;
- (void)_resetCachedCarrierSettingsForUniqueID:(id)arg1;
- (void)_setCachedCarrierSettingValue:(id)arg1 bundleKey:(id)arg2 uniqueID:(id)arg3;
- (void)_setCarrierSettings:(id)arg1 uniqueID:(id)arg2;
- (void)activeSubscriptionsDidChange;
- (id)cachedCarrierSettings;
- (void)carrierBundleChange:(id)arg1;
- (id)copyBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 bundleType:(long long)arg3 defaultValue:(id)arg4 valueIfError:(id)arg5;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)copyIsoCountryCodeForSubscriptionContext:(id)arg1;
- (id)copyOperatorBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)coreTelephonyClient;
- (id)ctPhoneNumber;
- (id)ctServiceSubscriptions;
- (id)ctSubscriptionInfo;
- (id)ctSubscriptionInfoWithError:(id*)arg1;
- (bool)deviceSupportsMultipleSubscriptions;
- (id)init;
- (bool)isDataConnectionExpensive;
- (id)newSubscriptionContextWithPhoneNumber:(id)arg1 labelID:(id)arg2 isDefaultVoice:(id)arg3 isDefaultData:(id)arg4 slot:(long long)arg5;
- (id)newSubscriptionContextWithSlot:(long long)arg1;
- (unsigned long long)numberOfSubscriptions;
- (id)phoneSubscriptionSelector;
- (id)registeredPhoneNumbers;
- (id)registeredSIMIDs;
- (id)registeredSubscriptionSlotIDs;
- (void)resetCacheSubscriptionInfo;
- (void)resetCacheSubscriptionInfoAndPostNotification;
- (void)setCachedCarrierSettings:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setCtSubscriptionInfo:(id)arg1;
- (void)setPhoneSubscriptionSelector:(id)arg1;
- (void)setWrmCellScore:(id)arg1;
- (void)setWrmNetworkPreference:(id)arg1;
- (bool)simInHomeCountryWithSubscriptionContext:(id)arg1;
- (id)stringForBundleType:(long long)arg1;
- (void)subscriptionInfoDidChange;
- (bool)wifiCallingEnabledForSubscriptionContext:(id)arg1;
- (id)wrmCellScore;
- (id)wrmNetworkPreference;

@end
