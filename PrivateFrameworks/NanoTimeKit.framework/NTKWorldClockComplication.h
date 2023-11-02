
@interface NTKWorldClockComplication : NTKComplication {
    WorldClockCity * _city;
}

@property (nonatomic, readonly) WorldClockCity *city;

+ (id)_allCities;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (long long)compareComplication:(id)arg1 toComplication:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (void)_handleAddedFromFaceSharing;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
