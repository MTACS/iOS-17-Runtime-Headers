
@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption {
    NSSet * _disabledBundleIdentifiers;
}

@property (nonatomic, readonly) NSSet *disabledBundleIdentifiers;

+ (id)optionWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_alphabeticallySortedIdentifiers;
- (id)dailySnapshotKey;
- (id)disabledBundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidOption;
- (id)localizedName;

@end
