
@interface NTKBundleComplication : NTKComplication {
    CLKCBundleComplication * _complication;
}

@property (nonatomic, readonly) CLKCBundleComplication *complication;
@property (nonatomic, readonly) CLKComplicationDescriptor *complicationDescriptor;

+ (id)_revertedBundleComplicationFromJSONDictionary:(id)arg1;
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3;
+ (id)bundledComplicationWithComplication:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)_migrateToFamily:(long long)arg1 withAllowedComplications:(id)arg2;
- (id)analyticsIdentifier;
- (id)appIdentifier;
- (id)complication;
- (id)complicationDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_sectionIdentifier;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

@end
