
@interface IMSMSFilterCapabilitiesSyncHelper : NSObject

+ (unsigned long long)IMSMSFilterCapabilitiesOptionForFilterSubAction:(long long)arg1 action:(long long)arg2;
+ (id)fetchFilterExtensionNameForDeviceID:(id)arg1;
+ (unsigned long long)fetchSMSFilterCapabilitiesOptions;
+ (unsigned long long)fetchSMSFilterCapabilitiesOptionsForDeviceID:(id)arg1;
+ (id)fetchSMSFilterSyncDeviceParams;
+ (bool)isSMSFilteringEnabledInSMSFilterCapabilitiesOptions;
+ (bool)isSubActionActiveInSMSFilterCapabilitiesOptions:(unsigned long long)arg1 subAction:(long long)arg2 action:(long long)arg3;
+ (bool)isValidSMSFilterCapabilitiesOptions:(unsigned long long)arg1;
+ (bool)isValidSubActionForDeviceID:(id)arg1 action:(long long)arg2 subAction:(long long)arg3;
+ (bool)shouldUpdateSMSFilterSyncDeviceParamsForDeviceID:(id)arg1 smsFilterCapabilitiesOptions:(unsigned long long)arg2 filterExtensionName:(id)arg3;
+ (void)storeSMSFilterCapabilitiesOptions:(unsigned long long)arg1;
+ (void)storeSMSFilterSyncDeviceParams:(id)arg1;
+ (void)updateFilterExtensionName;
+ (void)updateSMSFilterCapabilitiesOptions;
+ (void)updateSMSFilterCapabilitiesOptionsCache;
+ (void)updateSMSFilterCapabilitiesOptionsForDeviceID:(id)arg1 smsFilterCapabilitiesOptions:(unsigned long long)arg2 filterExtensionName:(id)arg3;
+ (void)updateSMSFilterCapabilitiesOptionsForSelf;
+ (void)updateSMSFilterSyncDeviceParamsCache;
+ (void)verifyCurrentRelayDevicesActive:(id)arg1;

@end
