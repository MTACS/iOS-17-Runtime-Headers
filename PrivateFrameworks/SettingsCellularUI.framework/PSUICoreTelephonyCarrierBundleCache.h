
@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    NSMutableDictionary * _carrierBundleVersionDict;
    CoreTelephonyClient * _client;
    NSArray * _defaultValues;
    NSMutableDictionary * _dictionariesBySlot;
    NSArray * _keys;
    PSSimStatusCache * _simCache;
}

@property (nonatomic, retain) NSMutableDictionary *carrierBundleVersionDict;
@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *defaultValues;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *dictionariesBySlot;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *keys;
@property (nonatomic, retain) PSSimStatusCache *simCache;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearCache;
- (id)activeDataCarrierName;
- (void)bulkFetch;
- (void)bulkFetchCarrierServicesNamesForServices:(id)arg1 context:(id)arg2;
- (void)bulkFetchForKeys:(id)arg1 defaultValues:(id)arg2;
- (void)carrierBundleChange:(id)arg1;
- (id)carrierBundleVersion:(id)arg1;
- (id)carrierBundleVersionDict;
- (id)carrierName:(id)arg1;
- (id)carrierServiceNameForServiceName:(id)arg1 context:(id)arg2;
- (id)carrierServices:(id)arg1;
- (id)carrierServicesAccountUrl:(id)arg1;
- (id)carrierServicesMyAccountUrlTitle:(id)arg1;
- (id)carrierServicesWebViewAccountUrl:(id)arg1;
- (id)client;
- (void)createKeysAndDefaultValues;
- (id)defaultValues;
- (id)dictionariesBySlot;
- (id)fetchCarrierBundleValue:(id)arg1 context:(id)arg2;
- (void)fetchCarrierBundleVersion;
- (id)getCarrierBundleArrayForKey:(id)arg1 context:(id)arg2;
- (id)getCarrierBundleDictForKey:(id)arg1 context:(id)arg2;
- (bool)getCarrierBundleFlagForKey:(id)arg1 context:(id)arg2;
- (id)getCarrierBundleStringForKey:(id)arg1 context:(id)arg2;
- (id)getCarrierBundleValueForKey:(id)arg1 context:(id)arg2;
- (id)getDictionaryForSlotID:(long long)arg1;
- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (id)initWithCoreTelephonyClient:(id)arg1 simStatusCache:(id)arg2;
- (bool)is5GSAEnabledByDefault:(id)arg1;
- (bool)isMMSOnWhileRoamingForActiveDataPlan;
- (id)keys;
- (id)mmsInfoTitle:(id)arg1;
- (id)mmsInfoUrl:(id)arg1;
- (void)resetDictionariesBySlot;
- (void)setCarrierBundleVersionDict:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDefaultValues:(id)arg1;
- (void)setDictionariesBySlot:(id)arg1;
- (void)setKeys:(id)arg1;
- (void)setSimCache:(id)arg1;
- (bool)shouldOverride3Gto4G:(id)arg1;
- (bool)shouldOverrideLTEto4G:(id)arg1;
- (bool)shouldShowVoiceRoamingSwitchForDefaultVoicePlan;
- (bool)shouldShowWifiAssistForActiveDataPlan;
- (bool)show5GSACoverageExtension:(id)arg1;
- (bool)show5GWarningUnsupportedCarrier:(id)arg1;
- (bool)showServiceCodes:(id)arg1;
- (bool)showVoNRWarningUnsupportedCarrier:(id)arg1;
- (bool)showVolteWarningUnsupportedCarrier:(id)arg1;
- (id)simCache;
- (id)volteCustomerCarePhoneNumber:(id)arg1;
- (id)volteCustomerCareWebsite:(id)arg1;
- (void)willEnterForeground;

@end
