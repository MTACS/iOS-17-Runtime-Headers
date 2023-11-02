
@interface HFActionNaturalLanguageUtilities : NSObject

+ (id)_actionTypeDescriptionPriority;
+ (id)_actionTypeForAction:(id)arg1;
+ (id)_actionValue:(id)arg1 forCharacteristicType:(id)arg2;
+ (id)_characteristicTypesFailingMismatch;
+ (id)_relativePercentValueInActions:(id)arg1 characteristics:(id)arg2 characteristicType:(id)arg3;
+ (bool)_shouldIgnoreActions:(id)arg1 withCharacteristicType:(id)arg2 execution:(id)arg3;
+ (id)_valueForAction:(id)arg1 withActionType:(id)arg2;
+ (bool)actionTypesMissingDescriptionShouldCauseFailure:(id)arg1;
+ (id)actionValuesByTypeForActions:(id)arg1 execution:(id)arg2;
+ (void)characteristicCaseClassification:(id*)arg1 valueKey:(id*)arg2 argumentKeys:(id*)arg3 fromCharacteristicType:(id)arg4 targetValue:(id)arg5;
+ (id)genericStringKeyWithNumberOfAccessories:(unsigned long long)arg1 named:(bool)arg2 inContext:(bool)arg3 options:(id)arg4;
+ (id)hf_naturalLanguageDescriptionForActions:(id)arg1 withOptions:(id)arg2;
+ (id)lightbulbStringKeyWithExecution:(id)arg1;
+ (id)selectHighestPriorityStringsFromStrings:(id)arg1;
+ (id)shortcutsStringKeyWithExecution:(id)arg1;
+ (id)stringKeyForCharacteristicType:(id)arg1 targetValue:(id)arg2 named:(bool)arg3 options:(id)arg4;
+ (id)stringKeyForMediaPlaybackAction:(id)arg1 named:(bool)arg2 options:(id)arg3;
+ (id)stringKeyForSpecialCasesWithValuesByType:(id)arg1 execution:(id)arg2 characteristics:(id)arg3;
+ (id)stringKeyWithType:(id)arg1 values:(id)arg2 execution:(id)arg3;
+ (id)stringKeysForActions:(id)arg1 withServiceType:(id)arg2 execution:(id)arg3;
+ (id)temperatureStringKeyForActions:(id)arg1 execution:(id)arg2 characteristics:(id)arg3;

@end
