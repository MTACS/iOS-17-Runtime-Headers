
@interface NTKComplication : CLKCComplication <NSCopying, NSSecureCoding, NTKComplicationItem> {
    NSString * _appIdentifier;
    unsigned long long  _complicationType;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *analyticsIdentifier;
@property (nonatomic, readonly, copy) NSString *appIdentifier;
@property (nonatomic, readonly) unsigned long long complicationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *ntk_contactIdentifier;
@property (nonatomic, readonly) NSString *ntk_identifier;
@property (nonatomic, readonly) unsigned long long ntk_itemType;
@property (nonatomic, readonly) NSString *ntk_sectionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (Class)_complicationClassForType:(unsigned long long)arg1;
+ (id)allComplicationsOfType:(unsigned long long)arg1;
+ (id)anyComplicationOfType:(unsigned long long)arg1;
+ (id)complicationWithJSONObjectRepresentation:(id)arg1;
+ (id)nullComplication;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_generateAppIdentifier;
- (void)_handleAddedFromFaceSharing;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)_migrateToFamily:(long long)arg1 withAllowedComplications:(id)arg2;
- (void)_setComplicationType:(unsigned long long)arg1;
- (id)analyticsIdentifier;
- (id)appIdentifier;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned long long)complicationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAddedFromFaceSharing;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)localizedSectionHeaderName;
- (id)ntk_contactIdentifier;
- (id)ntk_identifier;
- (unsigned long long)ntk_itemType;
- (id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(bool)arg2;
- (id)ntk_sectionIdentifier;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)uniqueIdentifier;

@end
