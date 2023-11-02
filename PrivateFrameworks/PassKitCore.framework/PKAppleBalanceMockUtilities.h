
@interface PKAppleBalanceMockUtilities : NSObject

+ (id)_appleBalanceAccountDetailsDictionary;
+ (id)_appleBalanceAccountDetailsDictionary2;
+ (id)_appleBalanceAccountNoBalanceDetailsDictionary;
+ (id)_appleBalanceCloudStoreZoneNames;
+ (id)_appleBalanceCloudStoreZoneNames2;
+ (id)_appleBalanceDTUConfigurationDictionary;
+ (id)_appleBalanceDTUConfigurationDictionary2;
+ (id)_appleBalanceSupportedFeaturesArray;
+ (id)_appleBalanceSupportedFeaturesArray2;
+ (id)_date1;
+ (id)_date2;
+ (id)_date3;
+ (id)_date4;
+ (id)_inStoreTokenForType:(long long)arg1 debugType:(long long)arg2;
+ (bool)_verifyAppleBalanceAccountDetails2:(id)arg1;
+ (bool)_verifyAppleBalanceAccountDetails:(id)arg1;
+ (bool)_verifyAppleBalanceSupportedFeatures2:(id)arg1;
+ (bool)_verifyAppleBalanceSupportedFeatures:(id)arg1;
+ (bool)_verifyLightweightAppleBalanceAccountDetails:(id)arg1;
+ (id)appleBalanceAccountDictionary;
+ (id)appleBalanceAccountDictionary2;
+ (id)appleBalanceAccountDictionaryUpdated;
+ (id)appleBalanceAccountNoBalanceDictionary;
+ (id)appleBalanceAddMoneyConfigurationWithCurrencyCode:(id)arg1;
+ (id)appleBalanceInStoreTopUpTokenForType:(long long)arg1 state:(long long)arg2 debugType:(long long)arg3;
+ (id)lightweightAppleBalanceAccountDictionary;
+ (id)mockAppleBalanceAccount;
+ (id)mockInStoreTopUpToken;
+ (id)mockPromotion;
+ (bool)verifyAppleBalanceAccount2:(id)arg1;
+ (bool)verifyAppleBalanceAccount:(id)arg1;
+ (bool)verifyInStoreTopUpToken:(id)arg1;
+ (bool)verifyLightweightAppleBalanceAccount:(id)arg1;
+ (bool)verifyPromotion:(id)arg1;

@end
