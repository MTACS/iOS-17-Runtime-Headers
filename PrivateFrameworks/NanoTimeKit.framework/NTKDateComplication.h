
@interface NTKDateComplication : NTKComplication {
    unsigned long long  _dateStyle;
}

@property (nonatomic, readonly) unsigned long long dateStyle;

+ (id)complicationWithDateStyle:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_migrateFromSkiHillWithCoder:(id)arg1;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (unsigned long long)dateStyle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (id)ntk_sectionIdentifier;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
