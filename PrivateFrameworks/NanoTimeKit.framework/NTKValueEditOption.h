
@interface NTKValueEditOption : NTKEditOption {
    unsigned long long  _value;
}

+ (id)_localizedNameForActionForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_optionWithValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (bool)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)localizedNameForValidValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionByValidatingValueOfInvalidOption:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (id)_faceBundleStringToValueDict;
- (unsigned long long)_value;
- (id)_valueToFaceBundleStringDict;
- (id)dailySnapshotKey;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidOption;
- (id)localizedName;
- (id)localizedNameForAction;

@end
