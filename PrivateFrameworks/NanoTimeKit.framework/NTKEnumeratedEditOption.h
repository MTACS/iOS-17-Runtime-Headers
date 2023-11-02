
@interface NTKEnumeratedEditOption : NTKValueEditOption

@property (nonatomic, readonly) unsigned long long _value;

+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (bool)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)domain;
+ (unsigned long long)indexOfOption:(id)arg1 forDevice:(id)arg2;
+ (id)legacyOptionWithName:(id)arg1 forDevice:(id)arg2;
+ (id)legacyOptionWithPigmentEditOption:(id)arg1 forDevice:(id)arg2;
+ (unsigned long long)numberOfOptionsForDevice:(id)arg1;
+ (id)optionAtIndex:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionsRestrictedByDevice:(id)arg1;

@end
