
@interface NTKAstronomyComplication : NTKComplication {
    unsigned long long  _vista;
}

@property (nonatomic, readonly) unsigned long long vista;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)appIdentifier;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (unsigned long long)vista;

@end
