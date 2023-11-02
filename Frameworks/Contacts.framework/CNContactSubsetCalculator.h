
@interface CNContactSubsetCalculator : NSObject

+ (bool)_isLabel:(id)arg1 subsumableIntoLabel:(id)arg2 equivalencies:(id)arg3;
+ (bool)_isLabeledValue:(id)arg1 availableInLabeledValues:(id)arg2 claimedIndices:(id)arg3 forMultiValueProperty:(id)arg4;
+ (bool)isContact:(id)arg1 subsetOfContact:(id)arg2 forMultiValueProperty:(id)arg3;
+ (bool)isContact:(id)arg1 subsetOfContact:(id)arg2 forSingleValueProperty:(id)arg3;
+ (bool)isContact:(id)arg1 subsetOfContact:(id)arg2 ignoringProperties:(id)arg3;

@end
