
@interface CNUnifiedContacts : NSObject

+ (void)addLinkedLabeledValue:(id)arg1 toLabeledValue:(id)arg2 forProperty:(id)arg3;
+ (bool)canUnifyLabel:(id)arg1 withLabel:(id)arg2 forProperty:(id)arg3;
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (unsigned long long)countOfLabelsUnifiableWithLabel:(id)arg1 valuesUnifiableWithValue:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (bool)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;
+ (id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2;
+ (id)imageValuePropertiesByKey;
+ (id)imageValuePropertyKeys;
+ (unsigned long long)indexOfPreferredContactForImage:(id)arg1 prefersSharedImage:(bool)arg2;
+ (unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)makeNonNameSingleValuePropertiesByKey;
+ (id)nonNameSingleValuePropertiesByKey;
+ (void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;
+ (bool)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4;
+ (bool)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;
+ (id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;
+ (id)unifyAvailableKeysOfContacts:(id)arg1;
+ (void)unifyImageOfContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3;
+ (void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;
+ (void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;
+ (void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 availableKeyDescriptor:(id)arg4;

@end
