
@interface NTKComplicationTombstone : NTKComplication {
    NTKComplication * _complication;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NTKComplication *complication;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)tombstoneWithComplication:(id)arg1;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)_migrateToFamily:(long long)arg1 withAllowedComplications:(id)arg2;
- (id)appIdentifier;
- (id)complication;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)uniqueIdentifier;

@end
