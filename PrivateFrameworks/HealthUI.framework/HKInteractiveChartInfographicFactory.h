
@interface HKInteractiveChartInfographicFactory : NSObject

+ (id)_appleSleepingWristTemperatureInfographicForDisplayType:(id)arg1;
+ (id)_appleSleepingWristTemperatureItemWithTitleKey:(id)arg1 descriptionKey:(id)arg2;
+ (id)_appleWalkingSteadinessInfographicForDisplayType:(id)arg1;
+ (id)_attributedSymbolForAudioClassification:(unsigned long long)arg1 textStyle:(id)arg2;
+ (id)_environmentalAudioExposureInfographic;
+ (id)_exposureLimitTextItem;
+ (id)_headphoneAudioExposureInfographic;
+ (id)_itemForAppleWalkingSteadinessInfographicWithClassification:(long long)arg1;
+ (id)_itemForAudioInfographicWithClassification:(unsigned long long)arg1 descriptionKey:(id)arg2;
+ (id)_itemWithTitleKey:(id)arg1 valueKey:(id)arg2;
+ (id)_itemWithTitleKey:(id)arg1 valueKey:(id)arg2 hideSeparator:(bool)arg3;
+ (id)_tableTitleAttributes;
+ (id)_titleAttributes;
+ (id)_whoExposureTextItem;
+ (bool)infographicSupportedForDisplayType:(id)arg1 healthStore:(id)arg2;
+ (id)infographicViewControllerForDisplayType:(id)arg1 healthStore:(id)arg2;

@end
