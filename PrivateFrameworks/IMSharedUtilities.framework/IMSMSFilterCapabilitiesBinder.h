
@interface IMSMSFilterCapabilitiesBinder : NSObject

+ (void)IMMetricsCollectorForSMSSubClassification:(unsigned long long)arg1;
+ (long long)deLocalizeSubAction:(long long)arg1 action:(long long)arg2;
+ (void)executeCompletionBlockForFilterParamsUpdate:(id)arg1 promo:(id)arg2;
+ (bool)firstPartyFilterExtensionActive;
+ (void)handleSMSFilterCapabilitiesOptionsChange;
+ (void)handleSubClassificationFilterChange;
+ (bool)isValidSubAction:(long long)arg1 subAction:(long long)arg2;
+ (long long)localizeSubAction:(long long)arg1;
+ (int)updateFilterParamsBindings:(id)arg1 promotionalSubActions:(id)arg2;

@end
