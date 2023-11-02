
@interface NTKApricotComplication : NTKThirdPartyComplication {
    CLKWidgetComplicationDescriptor * _descriptor;
}

@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (nonatomic, readonly) CLKWidgetComplicationDescriptor *descriptor;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSString *kind;

+ (id)complicationWithDescriptor:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_createUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)analyticsIdentifier;
- (id)appIdentifier;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)clkClientIdentifier;
- (id)clkComplicationDescriptor;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

@end
