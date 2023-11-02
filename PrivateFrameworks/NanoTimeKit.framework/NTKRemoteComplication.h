
@interface NTKRemoteComplication : NTKThirdPartyComplication {
    NSString * _appBundleIdentifier;
    NSString * _clientIdentifier;
    CLKComplicationDescriptor * _complicationDescriptor;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) CLKComplicationDescriptor *complicationDescriptor;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)_remoteStocksComplicationDescriptorWithIdentifier:(id)arg1 forDevice:(id)arg2;
+ (id)_remoteStocksComplicationWithIdentifier:(id)arg1 forDevice:(id)arg2;
+ (id)complicationWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)analyticsIdentifier;
- (id)appBundleIdentifier;
- (id)appIdentifier;
- (id)clientIdentifier;
- (id)clkClientIdentifier;
- (id)clkComplicationDescriptor;
- (id)companionLocalizedKeylineLabelText;
- (id)complicationDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (void)resetComplicationDescriptor;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)watchLocalizedKeylineLabelText;

@end
