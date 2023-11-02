
@interface IMSMSFilterHelper : NSObject

+ (bool)IDSDeviceSupportsIncomingSMSRelayFilteringForDeviceType:(long long)arg1;
+ (unsigned long long)conversationFilterModeForMessageFilter:(unsigned long long)arg1;
+ (id)fetchSMSFilterExtensionParams;
+ (id)fetchSMSFilterParamForCategory:(long long)arg1 subCategory:(long long)arg2;
+ (long long)filterActionForCategory:(long long)arg1;
+ (id)filterLabelForAction:(long long)arg1 subAction:(long long)arg2;
+ (long long)filterSubActionForCategory:(long long)arg1 subCategory:(long long)arg2;
+ (bool)isValidActiveFilterAction:(long long)arg1 subAction:(long long)arg2;
+ (id)smsFilterParamForFilterMode:(unsigned long long)arg1;
+ (bool)supportsIncomingSMSRelayFiltering;
+ (void)updateSMSFilterExtensionParams;

@end
