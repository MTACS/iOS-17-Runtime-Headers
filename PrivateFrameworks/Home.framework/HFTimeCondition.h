
@interface HFTimeCondition : HFCondition

+ (id)_formattedStringForDateComponentsCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;
+ (id)_formattedStringForOffset:(id)arg1;
+ (id)_formattedStringForSunriseSunsetCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;
+ (id)_formattedStringForTimeCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;
+ (id)_formattedStringForTimeRangeCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;
+ (id)_nameForConditionType:(unsigned long long)arg1 formattingStyle:(long long)arg2 formattingContext:(long long)arg3;
+ (id)defaultConditionForType:(unsigned long long)arg1;
+ (id)hf_naturalLanguageSummaryForTypeOnlyWithOptions:(id)arg1;

- (id)hf_naturalLanguageSummaryWithOptions:(id)arg1;
- (unsigned long long)timeConditionType;

@end
